% Copyright (C) 2021 All rights reserved.
% Authors:     Seonghyeon Jo <cpsc.seonghyeon@gmail.com>
%
% Date:        Des, 24, 2021
%
% -------------------------------------------------
% PID Simple Controller
% -------------------------------------------------
%
% the following code has been tested on Matlab 2021a
%%
clc; clear;
n = 7;
q = zeros(7,1);
qd = zeros(7,1);

% simulation setup
sim_time = 5;
sim_period = 0.001;
t = 0:sim_period:sim_time;
sample_size = size(t, 2);

% Ref Trajectory(Deg)
Ran_v1 = 10;
Ran_v2 = 5;

q_t(1,:)=10*sin(0.5*pi*t)+10*sin(1*pi*t);
q_t(2,:)=10*sin(0.5*pi*t)+10*sin(1*pi*t);
q_t(3,:)=Ran_v1*sin(0.1*pi*t);
q_t(4,:)=Ran_v1*sin(0.1*pi*t);
q_t(5,:)=Ran_v2*sin(0.05*pi*t);
q_t(6,:)=Ran_v2*sin(0.05*pi*t);
q_t(7,:)=zeros(sample_size,1);

qd_t(1,:)=5*pi*cos(0.5*pi*t)+10*pi*cos(1*pi*t);
qd_t(2,:)=5*pi*cos(0.5*pi*t)+10*pi*cos(1*pi*t);
qd_t(3,:)=Ran_v1*0.1*pi*cos(0.1*pi*t);
qd_t(4,:)=Ran_v1*0.1*pi*cos(0.1*pi*t);
qd_t(5,:)=Ran_v2*0.05*pi*cos(0.05*pi*t);
qd_t(6,:)=Ran_v2*0.05*pi*cos(0.05*pi*t);
qd_t(7,:)=zeros(sample_size,1);

qdd_t(1,:)=-2.5*pi^2*sin(0.5*pi*t)-10*pi^2*sin(1*pi*t);
qdd_t(2,:)=-2.5*pi^2*sin(0.5*pi*t)-10*pi^2*sin(1*pi*t);
qdd_t(3,:)=-Ran_v1*(0.1*pi)^2*sin(0.1*pi*t);
qdd_t(4,:)=-Ran_v1*(0.1*pi)^2*sin(0.1*pi*t);
qdd_t(5,:)=-Ran_v2*(0.05*pi)^2*sin(0.05*pi*t);
qdd_t(6,:)=-Ran_v2*(0.05*pi)^2*sin(0.05*pi*t);
qdd_t(7,:)=zeros(sample_size,1);

% gain
p_gain = [600; 600; 600; 600; 250; 150; 150]*10;
d_gain = [50.0; 50.0; 50.0; 50.0; 30.0; 25.0; 15.0]*0.1;


% Simulation
x = [q_t(:,1); qd];
e_int = zeros(7,1);
qdd = zeros(n,1);
for i=1:sample_size
    q = x(1:7,i);
    qd = x(8:14,i);
    
    c = get_CoriolisVector(q,qd);
    G = get_GravityVector(q);
    
    e = q_t(:,i)/180*pi-q;
    eq = qd_t(:,i)/180*pi-qd;
    e_int = e_int + e*0.001;
    
    u = p_gain.*e + d_gain.*eq + c + G; %+e_int;
    if(i ~= sample_size)
        x(:,i+1) = rk2(x(:,i), u, sim_period);
    end
end

%% Plotting 
t = (1:sample_size)*0.001;
% Plotting
figure(1)
tiledlayout(3,3,'TileSpacing','Compact','Padding','Compact');
set(gcf,'color','w');
for i=1:7
    ax = nexttile;
    hold off
    plot(t, q_t(i,:)/180*pi,'-r','LineWidth',1.5')
    hold on;
    plot(t,x(i,:),'--k','LineWidth',1.2')
    xlim([t(1) t(sample_size)]);
    xlabel('Time (sec)', 'FontSize', 10)
    ylabel("q_"+num2str(i), 'FontSize', 10);
    grid on
end
legend('ref', 'cur')
lgd = legend;
lgd.Layout.Tile = 9;
lgd.FontSize = 11;
saveas(gcf,"result.png");