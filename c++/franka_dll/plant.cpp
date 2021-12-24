/*
 * plant.c
 *
 * Code generation for function 'plant'
 *
 */

/* Include files */
#include "pch.h"
#include "plant.h"
#include "get_CoriolisVector.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void plant(const double x[14], const double u[7], double dxdt[14])
{
  static const double dv[7] = { 0.54615, 0.87224, 0.64068, 1.2794, 0.83904,
    0.30301, 0.56489 };

  static const double dv1[7] = { 5.1181, 9.0657, 10.136, 5.5903, 8.3469, 17.133,
    10.336 };

  static const double dv2[7] = { 0.039533, 0.025882, -0.04607, 0.036194,
    0.026226, -0.021047, 0.0035526 };

  double b_x[49];
  double y[49];
  double F[7];
  double dv3[7];
  double dv4[7];
  double Bstack_hat_idx_1;
  double Bstack_hat_idx_10;
  double Bstack_hat_idx_10_tmp_tmp;
  double Bstack_hat_idx_11;
  double Bstack_hat_idx_11_tmp_tmp;
  double Bstack_hat_idx_12;
  double Bstack_hat_idx_12_tmp;
  double Bstack_hat_idx_13;
  double Bstack_hat_idx_13_tmp;
  double Bstack_hat_idx_13_tmp_tmp;
  double Bstack_hat_idx_15;
  double Bstack_hat_idx_16;
  double Bstack_hat_idx_17;
  double Bstack_hat_idx_18;
  double Bstack_hat_idx_19;
  double Bstack_hat_idx_1_tmp;
  double Bstack_hat_idx_1_tmp_tmp_tmp;
  double Bstack_hat_idx_21;
  double Bstack_hat_idx_22;
  double Bstack_hat_idx_23;
  double Bstack_hat_idx_24;
  double Bstack_hat_idx_25;
  double Bstack_hat_idx_26;
  double Bstack_hat_idx_3;
  double Bstack_hat_idx_3_tmp;
  double Bstack_hat_idx_4;
  double Bstack_hat_idx_4_tmp_tmp_tmp;
  double Bstack_hat_idx_6;
  double Bstack_hat_idx_6_tmp;
  double Bstack_hat_idx_6_tmp_tmp;
  double Bstack_hat_idx_7;
  double Bstack_hat_idx_7_tmp_tmp;
  double Bstack_hat_idx_8;
  double Bstack_hat_idx_8_tmp_tmp;
  double b_Bstack_hat_idx_10_tmp_tmp;
  double b_Bstack_hat_idx_11_tmp_tmp;
  double b_Bstack_hat_idx_13_tmp_tmp;
  double b_Bstack_hat_idx_1_tmp;
  double b_Bstack_hat_idx_3_tmp;
  double b_Bstack_hat_idx_6_tmp_tmp;
  double b_Bstack_hat_idx_7_tmp_tmp;
  double b_Bstack_hat_idx_8_tmp_tmp;
  double c_Bstack_hat_idx_10_tmp_tmp;
  double c_Bstack_hat_idx_1_tmp;
  double c_Bstack_hat_idx_3_tmp;
  double c_Bstack_hat_idx_6_tmp_tmp;
  double c_Bstack_hat_idx_8_tmp_tmp;
  double d;
  double d1;
  double d10;
  double d100;
  double d101;
  double d102;
  double d103;
  double d104;
  double d105;
  double d106;
  double d107;
  double d108;
  double d109;
  double d11;
  double d110;
  double d111;
  double d112;
  double d113;
  double d114;
  double d115;
  double d116;
  double d117;
  double d118;
  double d119;
  double d12;
  double d120;
  double d121;
  double d122;
  double d123;
  double d124;
  double d125;
  double d126;
  double d127;
  double d128;
  double d129;
  double d13;
  double d130;
  double d131;
  double d132;
  double d133;
  double d134;
  double d135;
  double d136;
  double d137;
  double d138;
  double d139;
  double d14;
  double d140;
  double d141;
  double d142;
  double d143;
  double d144;
  double d145;
  double d146;
  double d147;
  double d148;
  double d149;
  double d15;
  double d150;
  double d151;
  double d152;
  double d153;
  double d154;
  double d155;
  double d156;
  double d157;
  double d158;
  double d159;
  double d16;
  double d160;
  double d161;
  double d162;
  double d163;
  double d164;
  double d165;
  double d166;
  double d167;
  double d168;
  double d169;
  double d17;
  double d170;
  double d171;
  double d172;
  double d173;
  double d174;
  double d175;
  double d176;
  double d177;
  double d178;
  double d179;
  double d18;
  double d180;
  double d181;
  double d182;
  double d183;
  double d184;
  double d185;
  double d186;
  double d187;
  double d188;
  double d189;
  double d19;
  double d190;
  double d191;
  double d192;
  double d193;
  double d194;
  double d195;
  double d196;
  double d197;
  double d198;
  double d199;
  double d2;
  double d20;
  double d200;
  double d201;
  double d202;
  double d203;
  double d204;
  double d205;
  double d206;
  double d207;
  double d208;
  double d209;
  double d21;
  double d210;
  double d211;
  double d212;
  double d213;
  double d214;
  double d215;
  double d216;
  double d217;
  double d218;
  double d219;
  double d22;
  double d220;
  double d221;
  double d222;
  double d223;
  double d224;
  double d225;
  double d226;
  double d227;
  double d228;
  double d229;
  double d23;
  double d230;
  double d231;
  double d232;
  double d233;
  double d234;
  double d235;
  double d236;
  double d237;
  double d238;
  double d239;
  double d24;
  double d240;
  double d241;
  double d242;
  double d243;
  double d244;
  double d245;
  double d246;
  double d247;
  double d248;
  double d249;
  double d25;
  double d250;
  double d251;
  double d252;
  double d253;
  double d254;
  double d255;
  double d256;
  double d257;
  double d258;
  double d259;
  double d26;
  double d260;
  double d261;
  double d262;
  double d263;
  double d264;
  double d265;
  double d266;
  double d267;
  double d268;
  double d269;
  double d27;
  double d270;
  double d271;
  double d272;
  double d273;
  double d274;
  double d275;
  double d276;
  double d28;
  double d29;
  double d3;
  double d30;
  double d31;
  double d32;
  double d33;
  double d34;
  double d35;
  double d36;
  double d37;
  double d38;
  double d39;
  double d4;
  double d40;
  double d41;
  double d42;
  double d43;
  double d44;
  double d45;
  double d46;
  double d47;
  double d48;
  double d49;
  double d5;
  double d50;
  double d51;
  double d52;
  double d53;
  double d54;
  double d55;
  double d56;
  double d57;
  double d58;
  double d59;
  double d6;
  double d60;
  double d61;
  double d62;
  double d63;
  double d64;
  double d65;
  double d66;
  double d67;
  double d68;
  double d69;
  double d7;
  double d70;
  double d71;
  double d72;
  double d73;
  double d74;
  double d75;
  double d76;
  double d77;
  double d78;
  double d79;
  double d8;
  double d80;
  double d81;
  double d82;
  double d83;
  double d84;
  double d85;
  double d86;
  double d87;
  double d88;
  double d89;
  double d9;
  double d90;
  double d91;
  double d92;
  double d93;
  double d94;
  double d95;
  double d96;
  double d97;
  double d98;
  double d99;
  double d_Bstack_hat_idx_1_tmp;
  double d_Bstack_hat_idx_3_tmp;
  double d_Bstack_hat_idx_6_tmp_tmp;
  double e_Bstack_hat_idx_1_tmp;
  double e_Bstack_hat_idx_3_tmp;
  double e_Bstack_hat_idx_6_tmp_tmp;
  double f_Bstack_hat_idx_1_tmp;
  double f_Bstack_hat_idx_3_tmp;
  double g_Bstack_hat_idx_1_tmp;
  double h_Bstack_hat_idx_1_tmp;
  double i_Bstack_hat_idx_1_tmp;
  double j_Bstack_hat_idx_1_tmp;
  double k_Bstack_hat_idx_1_tmp;
  double l_Bstack_hat_idx_1_tmp;
  double s;
  double smax;
  double t10;
  double t10_tmp;
  double t11;
  double t11_tmp;
  double t12_tmp;
  double t13;
  double t13_tmp;
  double t15;
  double t16;
  double t18;
  double t20;
  double t22;
  double t24;
  double t25;
  double t2_tmp;
  double t3_tmp;
  double t4;
  double t4_tmp;
  double t5_tmp;
  double t6_tmp;
  double t7;
  double t7_tmp;
  double t8_tmp;
  double t9_tmp;
  int b_i;
  int b_tmp;
  int i;
  int i2;
  int ix;
  int iy;
  int j;
  int jA;
  int jp1j;
  int k;
  int mmj_tmp;
  signed char ipiv[7];
  signed char p[7];
  signed char i1;

  /*  author: Claudio Gaz, Marco Cognetti, Alexander Oliva */
  /*  date: September 3, 2019 */
  /*   */
  /*  ------------------------------------------------- */
  /*  Panda Dynamic Model v. 1.0 */
  /*  ------------------------------------------------- */
  /*  C. Gaz, M. Cognetti, A. Oliva, P. Robuffo Giordano, A. De Luca, 'Dynamic */
  /*  Identification of the Franka Emika Panda Robot With Retrieval of Feasible */
  /*  Parameters Using Penalty-Based Optimization'. IEEE RA-L, 2019. */
  /*  */
  /*  the following code has been tested on Matlab 2018b */
  /*  get_GravityVector returns the numerical gravity vector g(q)  */
  /*  given the current joint positions */
  /* GET_GRAVITYVECTOR */
  /*     G_LI_HAT = GET_GRAVITYVECTOR(Q) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     21-Jan-2019 01:12:30 */
  /*  real kin pars */
  /* ---------- */
  t2_tmp = cos(x[1]);
  t3_tmp = sin(x[1]);
  t4_tmp = cos(x[2]);
  t5_tmp = cos(x[3]);
  t6_tmp = sin(x[3]);
  t7_tmp = sin(x[2]);
  t8_tmp = cos(x[4]);
  t9_tmp = sin(x[4]);
  t10_tmp = cos(x[5]);
  t11_tmp = sin(x[5]);
  t12_tmp = cos(x[6]);
  t13_tmp = sin(x[6]);

  /*  author: Claudio Gaz, Marco Cognetti, Alexander Oliva */
  /*  date: September 3, 2019 */
  /*   */
  /*  ------------------------------------------------- */
  /*  Panda Dynamic Model v. 1.0 */
  /*  ------------------------------------------------- */
  /*  C. Gaz, M. Cognetti, A. Oliva, P. Robuffo Giordano, A. De Luca, 'Dynamic */
  /*  Identification of the Franka Emika Panda Robot With Retrieval of Feasible */
  /*  Parameters Using Penalty-Based Optimization'. IEEE RA-L, 2019. */
  /*  */
  /*  the following code has been tested on Matlab 2018b */
  /*  get_MassMatrix returns the numerical inertia matrix  */
  /*  M(q), given the current joint positions */
  /* GET_MASSMATRIX */
  /*     MASSMATRIX = GET_MASSMATRIX(Q) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     21-Jan-2019 01:38:56 */
  /*  real kin pars */
  /* ---------- */
  t4 = t2_tmp * t2_tmp;
  t7 = t3_tmp * t3_tmp;
  t10 = t4_tmp * t4_tmp;
  t11 = t5_tmp * t5_tmp;
  t13 = t6_tmp * t6_tmp;
  t15 = t8_tmp * t8_tmp;
  t16 = t7_tmp * t7_tmp;
  t18 = t9_tmp * t9_tmp;
  t20 = t10_tmp * t10_tmp;
  t22 = t11_tmp * t11_tmp;
  t24 = t13_tmp * t13_tmp;
  t25 = t12_tmp * t12_tmp;
  d = t2_tmp * t4_tmp;
  d1 = t2_tmp * t7_tmp;
  d2 = t3_tmp * t5_tmp;
  d3 = t3_tmp * t6_tmp;
  d4 = t2_tmp * t5_tmp;
  d5 = d4 * t4_tmp;
  d6 = t3_tmp * t4_tmp;
  d7 = d6 * t7_tmp;
  d8 = d * t6_tmp;
  d9 = d2 * t10;
  d10 = d3 * t10;
  d11 = d1 * t11;
  d12 = d1 * t13;
  d13 = d2 * t16;
  d14 = d3 * t16;
  d15 = 0.0825 * t2_tmp * t6_tmp;
  d16 = d15 * t7_tmp;
  d17 = 0.316 * t2_tmp * t5_tmp * t7_tmp;
  d18 = d5 * t8_tmp;
  d19 = d4 * t6_tmp;
  d20 = d19 * t7_tmp;
  d21 = d7 * t11;
  d22 = d10 * t8_tmp;
  d23 = d5 * t9_tmp;
  d24 = d8 * t15;
  d25 = d7 * t13;
  d26 = d3 * t8_tmp;
  d27 = d11 * t8_tmp;
  d28 = d9 * t18;
  d29 = d1 * t8_tmp * t13;
  d30 = d7 * t18;
  d31 = d7 * t15;
  d32 = d11 * t9_tmp;
  d33 = d2 * t15 * t16;
  d34 = d10 * t9_tmp;
  d35 = d26 * t16;
  d36 = d12 * t9_tmp;
  d37 = d13 * t18;
  d38 = d14 * t9_tmp;
  d39 = 0.0825 * t2_tmp * t5_tmp;
  d40 = d39 * t7_tmp;
  d41 = 0.316 * t2_tmp * t6_tmp * t7_tmp;
  d42 = d9 * t15;
  d43 = d8 * t18;
  d44 = 0.0825 * t3_tmp * t5_tmp;
  d45 = d44 * t4_tmp;
  d46 = d45 * t7_tmp;
  d47 = 0.0825 * t3_tmp * t4_tmp * t6_tmp;
  d48 = d47 * t7_tmp;
  d49 = -0.0825 * t2_tmp * t4_tmp * t6_tmp;
  d50 = d49 * t8_tmp;
  d51 = d16 * t8_tmp;
  d52 = -0.0825 * t3_tmp * t5_tmp;
  d53 = d52 * t10;
  d54 = -0.0825 * t3_tmp * t4_tmp;
  d55 = d54 * t7_tmp;
  d56 = 0.0825 * t3_tmp * t10;
  d57 = 0.0825 * t3_tmp * t11;
  d58 = 0.384 * t2_tmp * t5_tmp;
  d59 = d58 * t4_tmp;
  d60 = 0.316 * t2_tmp * t4_tmp;
  d61 = d60 * t11;
  d62 = 0.384 * t2_tmp * t7_tmp;
  d63 = 0.384 * t3_tmp * t6_tmp;
  d64 = d63 * t10;
  d65 = d62 * t11;
  d66 = d8 * t11_tmp;
  d67 = d9 * t11_tmp;
  d68 = d56 * t11;
  d69 = d68 * t9_tmp;
  d70 = d52 * t16 * t9_tmp;
  d71 = d56 * t13;
  d72 = d71 * t9_tmp;
  d73 = 0.0825 * t3_tmp * t13;
  d74 = d57 * t16 * t9_tmp;
  d75 = d73 * t16;
  d76 = d75 * t9_tmp;
  d77 = d17 * t8_tmp;
  d78 = d65 * t8_tmp;
  d79 = d59 * t9_tmp;
  d80 = d60 * t13;
  d81 = d62 * t8_tmp;
  d82 = d81 * t13;
  d83 = d61 * t9_tmp;
  d84 = d80 * t9_tmp;
  d85 = d64 * t9_tmp;
  d86 = d63 * t16 * t9_tmp;
  d87 = d2 * t4_tmp;
  d88 = d87 * t6_tmp;
  d89 = d88 * t7_tmp;
  d90 = d20 * t15;
  d91 = d7 * t8_tmp;
  d92 = d20 * t18;
  d93 = d66 * t15;
  d94 = d21 * t15;
  d95 = d91 * t9_tmp;
  d96 = d18 * t10_tmp;
  d97 = d8 * t8_tmp;
  d98 = d97 * t9_tmp;
  d99 = d9 * t8_tmp;
  d100 = d99 * t9_tmp;
  d101 = d67 * t15;
  d102 = d20 * t22;
  d103 = d21 * t18;
  d104 = d55 * t9_tmp;
  d56 = d56 * t8_tmp * t13;
  d105 = d52 * t8_tmp * t16;
  d106 = d57 * t8_tmp * t16;
  d107 = 0.0825 * t3_tmp * t8_tmp * t13 * t16;
  d108 = d59 * t8_tmp;
  d109 = d61 * t8_tmp;
  d110 = d17 * t9_tmp;
  d60 = d60 * t8_tmp * t13;
  d111 = d64 * t8_tmp;
  d112 = d63 * t8_tmp * t16;
  d65 *= t9_tmp;
  d62 = d62 * t13 * t9_tmp;
  d113 = d18 * t11_tmp;
  d114 = d22 * t11_tmp;
  d66 *= t18;
  d115 = d23 * t20;
  d116 = d2 * t11_tmp;
  d117 = -0.0825 * t2_tmp * t5_tmp;
  d118 = d117 * t6_tmp;
  d119 = d118 * t7_tmp;
  d120 = -0.0825 * t3_tmp * t4_tmp * t7_tmp * t8_tmp;
  d121 = d40 * t11_tmp;
  d122 = d2 * t8_tmp;
  d123 = d122 * t16 * t9_tmp;
  d124 = d116 * t15 * t16;
  d125 = d27 * t20;
  d126 = d11 * t11_tmp * t9_tmp;
  d127 = d25 * t22;
  d26 = d26 * t11_tmp * t16;
  d128 = d27 * t22;
  d129 = d32 * t10_tmp;
  d130 = d29 * t20;
  d131 = d12 * t11_tmp * t9_tmp;
  d132 = d28 * t10_tmp;
  d116 = d116 * t16 * t18;
  d133 = d34 * t20;
  d134 = d35 * t10_tmp;
  d135 = d29 * t22;
  d136 = d36 * t10_tmp;
  d137 = d30 * t20;
  d138 = d33 * t10_tmp;
  d139 = d34 * t22;
  d140 = d37 * t10_tmp;
  d141 = d38 * t20;
  d142 = d38 * t22;
  d143 = d46 * t8_tmp;
  d144 = d119 * t8_tmp;
  d145 = d120 * t13;
  d146 = d121 * t18;
  d147 = d51 * t10_tmp;
  d148 = d120 * t10_tmp;
  d149 = d46 * t9_tmp;
  d119 *= t9_tmp;
  d150 = d55 * t13 * t9_tmp;
  d151 = -0.0825 * t2_tmp * t7_tmp;
  d152 = d151 * t11;
  Bstack_hat_idx_1_tmp = d152 * t11_tmp;
  d153 = Bstack_hat_idx_1_tmp * t15;
  d154 = -0.0825 * t2_tmp * t4_tmp * t6_tmp * t9_tmp;
  d155 = d154 * t10_tmp;
  d151 *= t13;
  d156 = d151 * t11_tmp;
  d157 = d156 * t15;
  d158 = 0.088 * t3_tmp;
  d159 = d41 * t11_tmp;
  d160 = 0.384 * t3_tmp * t4_tmp;
  d161 = d160 * t7_tmp;
  d162 = d161 * t11_tmp;
  d163 = d69 * t10_tmp;
  d164 = d70 * t10_tmp;
  d165 = d72 * t10_tmp;
  d166 = d74 * t10_tmp;
  d167 = d77 * t10_tmp;
  d168 = d159 * t15;
  d169 = d162 * t15;
  d159 *= t18;
  d170 = d79 * t10_tmp;
  d162 *= t18;
  d171 = d83 * t10_tmp;
  d172 = d78 * t10_tmp;
  d173 = d84 * t10_tmp;
  d174 = d82 * t10_tmp;
  d175 = d86 * t10_tmp;
  d176 = d89 * t8_tmp;
  d177 = d20 * t8_tmp;
  d178 = d89 * t9_tmp;
  d179 = d177 * t9_tmp;
  d180 = d20 * t11_tmp;
  d181 = d180 * t10_tmp;
  d182 = d21 * t8_tmp;
  d183 = d182 * t9_tmp;
  d184 = d90 * t20;
  d185 = t3_tmp * t5_tmp * t10 * t11_tmp * t18;
  d186 = d24 * t10_tmp;
  d187 = t3_tmp * t6_tmp * t10 * t8_tmp * t10_tmp;
  d188 = d95 * t10_tmp;
  d189 = d29 * t11_tmp * t10_tmp;
  d190 = d10 * t11_tmp * t9_tmp * t10_tmp;
  d191 = d123 * t20;
  d192 = d27 * t11_tmp * t10_tmp;
  d193 = d100 * t20;
  d194 = d42 * t10_tmp;
  d195 = d43 * t10_tmp;
  d196 = d48 * t11_tmp;
  d197 = d3 * t11_tmp * t16 * t9_tmp * t10_tmp;
  d198 = d143 * t10_tmp;
  d199 = d196 * t15;
  d200 = d144 * t10_tmp;
  d196 *= t18;
  d201 = 0.088 * t2_tmp * t5_tmp;
  b_Bstack_hat_idx_1_tmp = d201 * t4_tmp;
  d202 = d201 * t6_tmp;
  d203 = d50 * t20;
  d204 = 0.088 * t3_tmp * t5_tmp;
  d205 = d204 * t10;
  d206 = d205 * t8_tmp * t9_tmp;
  d207 = 0.088 * t3_tmp * t4_tmp;
  d208 = d207 * t7_tmp;
  d209 = d208 * t11;
  d210 = d209 * t18;
  d211 = 0.088 * t3_tmp * t6_tmp;
  d212 = d211 * t10;
  d213 = d212 * t8_tmp * t11_tmp;
  d214 = -0.0825 * t3_tmp * t5_tmp * t10;
  d215 = d214 * t8_tmp;
  d216 = d215 * t20;
  d217 = 0.088 * t2_tmp * t4_tmp * t6_tmp;
  d218 = d217 * t15 * t10_tmp;
  d219 = d208 * t13 * t20;
  d220 = d68 * t8_tmp;
  d221 = 0.0825 * t2_tmp * t6_tmp * t7_tmp * t9_tmp;
  c_Bstack_hat_idx_1_tmp = 0.088 * t2_tmp * t5_tmp * t6_tmp * t7_tmp;
  d222 = d217 * t8_tmp;
  d223 = d206 * t12_tmp;
  d224 = d104 * t20;
  d217 = d217 * t18 * t10_tmp;
  d225 = 0.088 * t2_tmp * t7_tmp;
  d226 = d225 * t11;
  d227 = d226 * t11_tmp * t9_tmp;
  d228 = d204 * t8_tmp * t16 * t9_tmp;
  d229 = d228 * t12_tmp;
  d230 = d211 * t8_tmp * t11_tmp * t16;
  d231 = d56 * t20;
  d232 = d225 * t13 * t11_tmp * t9_tmp;
  d233 = d205 * t18 * t10_tmp;
  d234 = d204 * t15 * t16 * t10_tmp;
  d235 = d208 * t18;
  d236 = d106 * t20;
  d237 = d107 * t20;
  d238 = 0.384 * t3_tmp * t5_tmp;
  d239 = d58 * t6_tmp;
  d240 = d239 * t7_tmp;
  d241 = d161 * t11;
  d242 = d241 * t11_tmp;
  d243 = d108 * t20;
  d244 = d109 * t20;
  d245 = d110 * t20;
  d246 = d60 * t20;
  d247 = d242 * t15;
  d242 *= t18;
  d248 = d112 * t20;
  d249 = d62 * t20;
  d250 = t3_tmp * t4_tmp * t7_tmp * t8_tmp * t11_tmp * t9_tmp;
  d251 = d25 * t11_tmp * t10_tmp;
  d252 = d176 * t20;
  d253 = d89 * t11_tmp * t9_tmp;
  d177 = d177 * t11_tmp * t9_tmp;
  d254 = d176 * t22;
  d255 = d178 * t10_tmp;
  d180 = d180 * t15 * t10_tmp;
  d182 = d182 * t11_tmp * t9_tmp;
  d256 = d179 * t10_tmp;
  d257 = d21 * t11_tmp;
  d97 *= t11_tmp;
  d122 = d122 * t11_tmp * t16 * t9_tmp * t10_tmp;
  d258 = d183 * t10_tmp;
  d259 = d94 * t20;
  d260 = d98 * t20;
  d261 = d52 * t4_tmp;
  Bstack_hat_idx_3_tmp = d261 * t6_tmp;
  d262 = Bstack_hat_idx_3_tmp * t7_tmp;
  d263 = d262 * t11_tmp;
  d264 = d149 * t20;
  d265 = d119 * t20;
  d266 = -0.0825 * t3_tmp * t4_tmp * t7_tmp * t8_tmp * t13 * t10_tmp;
  d267 = d263 * t15;
  d263 *= t18;
  d268 = c_Bstack_hat_idx_1_tmp * t15;
  b_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_1_tmp * t11_tmp * t9_tmp * t10_tmp;
  d225 = d225 * t8_tmp * t13 * t11_tmp * t10_tmp;
  d212 = d212 * t11_tmp * t9_tmp * t10_tmp;
  d269 = d211 * t11_tmp * t16 * t9_tmp * t10_tmp;
  d270 = d238 * t4_tmp;
  d271 = d270 * t6_tmp;
  d_Bstack_hat_idx_1_tmp = d271 * t7_tmp;
  d272 = d_Bstack_hat_idx_1_tmp * t8_tmp;
  d273 = d240 * t11_tmp;
  d274 = d273 * t15;
  d273 *= t18;
  d275 = d272 * t10_tmp;
  d276 = d176 * t11_tmp * t10_tmp;
  Bstack_hat_idx_19 = d204 * t4_tmp;
  Bstack_hat_idx_18 = Bstack_hat_idx_19 * t6_tmp;
  smax = Bstack_hat_idx_18 * t7_tmp;
  e_Bstack_hat_idx_1_tmp = smax * t11_tmp * t9_tmp;
  f_Bstack_hat_idx_1_tmp = c_Bstack_hat_idx_1_tmp * t8_tmp * t9_tmp * t10_tmp;
  g_Bstack_hat_idx_1_tmp = d209 * t8_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_1_tmp_tmp_tmp = d_Bstack_hat_idx_1_tmp * t9_tmp;
  h_Bstack_hat_idx_1_tmp = Bstack_hat_idx_1_tmp_tmp_tmp * t20;
  i_Bstack_hat_idx_1_tmp = smax * t8_tmp * t11_tmp * t10_tmp;
  j_Bstack_hat_idx_1_tmp = b_Bstack_hat_idx_1_tmp * t8_tmp * t11_tmp;
  Bstack_hat_idx_21 = c_Bstack_hat_idx_1_tmp * t20;
  k_Bstack_hat_idx_1_tmp = Bstack_hat_idx_1_tmp * t18;
  Bstack_hat_idx_24 = d53 * t9_tmp * t10_tmp;
  d_Bstack_hat_idx_1_tmp = -0.0825 * t2_tmp * t7_tmp * t13 * t11_tmp * t18;
  Bstack_hat_idx_23 = d204 * t16 * t18 * t10_tmp;
  b_Bstack_hat_idx_1_tmp = d111 * t20;
  c_Bstack_hat_idx_1_tmp = d7 * t11_tmp * t18 * t10_tmp;
  Bstack_hat_idx_22 = 0.088 * t2_tmp * t4_tmp * t6_tmp * t8_tmp * t9_tmp;
  l_Bstack_hat_idx_1_tmp = d257 * t15 * t10_tmp;
  Bstack_hat_idx_1_tmp = d97 * t9_tmp * t10_tmp;
  smax = d99 * t11_tmp * t9_tmp * t10_tmp;
  s = t2_tmp * t5_tmp * t4_tmp * t11_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_1 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((t2_tmp * 0.0034928431547746048 - t3_tmp *
    0.028418666615685852) - d * 0.012234928566235041) - d1 * 0.22781531224653659)
    + t3_tmp * t10 * 0.0002219907944069274) - t3_tmp * t16 *
    0.0002219907944069274) + d5 * 0.002736425713896764) - d8 *
    0.0047707392479584537) + d9 * 0.0047707392479584537) + d7 *
    0.62647301058908633) + d10 * 0.002736425713896764) + d11 *
    0.15017243230248289) - d12 * 0.15017243230248289) - d13 *
    0.0047707392479584537) - d14 * 0.002736425713896764) - d40 *
    1.717769816935919) + d16 * 0.48863425572370828) + d17 * 0.48863425572370828)
    + d41 * 1.717769816935919) + d20 * 0.51437714810622071) + d18 *
    0.0077038208929667978) - d21 * 0.53245576672167294) - d23 *
    0.00614079330980765) - d24 * 0.003731166785767855) - d25 *
    0.01807861861545219) + d42 * 0.003731166785767855) + d31 *
    0.025052011110203509) + d22 * 0.0077038208929667978) + d43 *
    0.003731166785767855) - d27 * 0.00614079330980765) + d29 *
    0.00614079330980765) - d28 * 0.003731166785767855) + d30 *
    0.0321778928866176) - d34 * 0.00614079330980765) - d32 *
    0.0077038208929667978) - d33 * 0.003731166785767855) - d35 *
    0.0077038208929667978) + d36 * 0.0077038208929667978) + d37 *
    0.003731166785767855) + d38 * 0.00614079330980765) - d46 *
    0.97726851144741667) - d48 * 3.4355396338718371) - d50 *
    0.077027839799114317) + d51 * 0.01003178367299898) + d53 * t8_tmp *
    0.077027839799114317) - d55 * t8_tmp * 0.02006356734599796) + d154 *
    0.01003178367299898) + d221 * 0.077027839799114317) + d220 *
    0.077027839799114317) - d214 * t9_tmp * 0.01003178367299898) - d104 *
    0.15405567959822861) - d105 * 0.077027839799114317) + d56 *
    0.077027839799114317) - d69 * 0.01003178367299898) - d106 *
    0.077027839799114317) + d70 * 0.01003178367299898) - d72 *
    0.01003178367299898) - d107 * 0.077027839799114317) + d74 *
    0.01003178367299898) + d76 * 0.01003178367299898) - d108 *
    0.077027839799114317) + d77 * 0.01003178367299898) - d109 *
    0.077027839799114317) + d79 * 0.01003178367299898) + d110 *
    0.077027839799114317) - d60 * 0.077027839799114317) - d111 *
    0.077027839799114317) + d83 * 0.01003178367299898) + d78 *
    0.01003178367299898) + d84 * 0.01003178367299898) - d82 *
    0.01003178367299898) + d85 * 0.01003178367299898) + d65 *
    0.077027839799114317) + d112 * 0.077027839799114317) - d62 *
    0.077027839799114317) - d86 * 0.01003178367299898) + d89 *
    0.30034486460496579) + d113 * 1.243656534471744E-5) + d90 *
    0.0321778928866176) + d92 * 0.025052011110203509) - d96 *
    0.00082043031824491353) - d20 * t20 * 0.0012722430112630651) - d94 *
    0.0321778928866176) + d98 * 0.0071258817764140933) + d93 *
    0.00082043031824491353) + d102 * 0.0065540822374886409) - d100 *
    0.0071258817764140933) - d101 * 0.00082043031824491353) - d103 *
    0.025052011110203509) - d95 * 0.0074623335715357092) + d114 *
    1.243656534471744E-5) - d66 * 0.00082043031824491353) + d115 *
    0.005367504695157484) + d186 * 1.243656534471744E-5) + d67 * t18 *
    0.00082043031824491353) - d25 * t20 * 0.0012722430112630651) - d23 * t22 *
    0.005367504695157484) - d2 * t10 * t15 * t10_tmp * 1.243656534471744E-5) -
    d187 * 0.00082043031824491353) - t2_tmp * t4_tmp * t6_tmp * t18 * t10_tmp *
    1.243656534471744E-5) - d126 * 1.243656534471744E-5) + d123 *
    0.0071258817764140933) + d124 * 0.00082043031824491353) + d127 *
    0.0065540822374886409) - d26 * 1.243656534471744E-5) + d125 *
    0.005367504695157484) + d131 * 1.243656534471744E-5) + d132 *
    1.243656534471744E-5) - d128 * 0.005367504695157484) - d130 *
    0.005367504695157484) - d116 * 0.00082043031824491353) - d137 *
    0.0065540822374886409) - d31 * t24 * 0.001765933827532306) + d129 *
    0.00082043031824491353) + d135 * 0.005367504695157484) + d138 *
    1.243656534471744E-5) + d30 * t22 * 0.0012722430112630651) + d133 *
    0.005367504695157484) + d134 * 0.00082043031824491353) - d136 *
    0.00082043031824491353) - d139 * 0.005367504695157484) - d140 *
    1.243656534471744E-5) - d141 * 0.005367504695157484) + d142 *
    0.005367504695157484) - d143 * 0.02006356734599796) + d144 *
    0.02006356734599796) - d149 * 0.15405567959822861) + d119 *
    0.15405567959822861) + d145 * 0.02006356734599796) - d121 * t15 *
    0.16562614043137031) - d51 * t11_tmp * 0.06771241001216606) + d120 * t11_tmp
    * 0.13542482002433209) - d146 * 0.16562614043137031) - d49 * t11_tmp *
    t9_tmp * 0.06771241001216606) + d150 * 0.15405567959822861) + d40 * t15 *
    t10_tmp * 0.06771241001216606) - d147 * 0.16562614043137031) + d53 * t11_tmp
    * t9_tmp * 0.06771241001216606) + d148 * 0.33125228086274061) - d153 *
    0.16562614043137031) + d40 * t18 * t10_tmp * 0.06771241001216606) - d155 *
    0.16562614043137031) + d157 * 0.16562614043137031) + d68 * t11_tmp * t9_tmp *
    0.06771241001216606) - k_Bstack_hat_idx_1_tmp * 0.16562614043137031) +
    Bstack_hat_idx_24 * 0.16562614043137031) - d52 * t11_tmp * t16 * t9_tmp *
    0.06771241001216606) + d71 * t11_tmp * t9_tmp * 0.06771241001216606) + d152 *
    t15 * t10_tmp * 0.06771241001216606) + d_Bstack_hat_idx_1_tmp *
    0.16562614043137031) + d208 * t15 * t12_tmp * 0.01249486888554935) - d151 *
    t15 * t10_tmp * 0.06771241001216606) + 0.088 * t3_tmp * t4_tmp * t7_tmp *
    t15 * t13_tmp * 0.000942222077621846) + d163 * 0.16562614043137031) + d152 *
    t18 * t10_tmp * 0.06771241001216606) - d57 * t11_tmp * t16 * t9_tmp *
    0.06771241001216606) - d164 * 0.16562614043137031) + d165 *
    0.16562614043137031) - d151 * t18 * t10_tmp * 0.06771241001216606) - d73 *
    t11_tmp * t16 * t9_tmp * 0.06771241001216606) - d166 * 0.16562614043137031)
    - d76 * t10_tmp * 0.16562614043137031) - d77 * t11_tmp * 0.06771241001216606)
    - d59 * t11_tmp * t9_tmp * 0.06771241001216606) - d167 * 0.16562614043137031)
    + d168 * 0.16562614043137031) + d169 * 0.33125228086274061) - d61 * t11_tmp *
    t9_tmp * 0.06771241001216606) - d78 * t11_tmp * 0.06771241001216606) + d159 *
    0.16562614043137031) - d170 * 0.16562614043137031) - d80 * t11_tmp * t9_tmp *
    0.06771241001216606) + d82 * t11_tmp * 0.06771241001216606) + d162 *
    0.33125228086274061) - d41 * t15 * t10_tmp * 0.06771241001216606) - d161 *
    t15 * t10_tmp * 0.13542482002433209) - d64 * t11_tmp * t9_tmp *
    0.06771241001216606) - d171 * 0.16562614043137031) - d172 *
    0.16562614043137031) - d41 * t18 * t10_tmp * 0.06771241001216606) - d173 *
    0.16562614043137031) + d174 * 0.16562614043137031) - d161 * t18 * t10_tmp *
    0.13542482002433209) - d85 * t10_tmp * 0.16562614043137031) + d63 * t11_tmp *
    t16 * t9_tmp * 0.06771241001216606) + d175 * 0.16562614043137031) - d176 *
    0.0122815866196153) - d178 * 0.0154076417859336) + d179 *
    0.0074623335715357092) - d181 * 0.01073500939031497) - d183 *
    0.0074623335715357092) - d184 * 0.0065540822374886409) + d90 * t22 *
    0.0012722430112630651) + d91 * t11_tmp * t9_tmp * 0.0016408606364898271) +
    d113 * t24 * 0.0011854468639373871) - d5 * t11_tmp * t9_tmp * t10_tmp *
    0.0078263252487517053) - d5 * t8_tmp * t11_tmp * t25 * 0.0011854468639373871)
    + d7 * t11 * t15 * t20 * 0.0065540822374886409) - d6 * t7_tmp * t13 *
    t11_tmp * t10_tmp * 0.01073500939031497) - d4 * t4_tmp * t8_tmp * t10_tmp *
    t12_tmp * 0.00059693993396417282) - t2_tmp * t4_tmp * t6_tmp * t8_tmp *
    t9_tmp * t20 * 0.0065540822374886409) - d92 * t24 * 0.001765933827532306) +
    d93 * t12_tmp * 0.00059693993396417282) - d94 * t22 * 0.0012722430112630651)
    + d188 * 2.4873130689434881E-5) + d96 * t13_tmp * 0.0017587418349192239) +
    d98 * t22 * 0.0012722430112630651) - d192 * 0.0078263252487517053) + d193 *
    0.0065540822374886409) - d93 * t13_tmp * 0.0017587418349192239) - d101 *
    t12_tmp * 0.00059693993396417282) + d98 * t24 * 0.001765933827532306) - d66 *
    t12_tmp * 0.00059693993396417282) + d189 * 0.0078263252487517053) - d100 *
    t22 * 0.0012722430112630651) - c_Bstack_hat_idx_1_tmp * 0.01073500939031497)
    + d101 * t13_tmp * 0.0017587418349192239) - d115 * t12_tmp *
    0.0017587418349192239) + d102 * t25 * 0.001765933827532306) + d66 * t13_tmp *
    0.0017587418349192239) - d100 * t24 * 0.001765933827532306) + d185 * t12_tmp
    * 0.00059693993396417282) + d103 * t24 * 0.001765933827532306) + d114 * t24 *
    0.0011854468639373871) - d190 * 0.0078263252487517053) - d114 * t25 *
    0.0011854468639373871) - d115 * t13_tmp * 0.00059693993396417282) + d23 *
    t12_tmp * t22 * 0.0017587418349192239) - d185 * t13_tmp *
    0.0017587418349192239) - d191 * 0.0065540822374886409) - d187 * t12_tmp *
    0.00059693993396417282) + d186 * t24 * 0.0011854468639373871) + d124 *
    t12_tmp * 0.00059693993396417282) + t2_tmp * t5_tmp * t4_tmp * t9_tmp * t22 *
    t13_tmp * 0.00059693993396417282) - d186 * t25 * 0.0011854468639373871) -
    d125 * t12_tmp * 0.0017587418349192239) + d123 * t22 * 0.0012722430112630651)
    + d187 * t13_tmp * 0.0017587418349192239) - d194 * t24 *
    0.0011854468639373871) - d124 * t13_tmp * 0.0017587418349192239) - d195 *
    t24 * 0.0011854468639373871) - d125 * t13_tmp * 0.00059693993396417282) +
    d27 * t12_tmp * t22 * 0.0017587418349192239) - d126 * t24 *
    0.0011854468639373871) + d130 * t12_tmp * 0.0017587418349192239) + d194 *
    t25 * 0.0011854468639373871) + d123 * t24 * 0.001765933827532306) - d116 *
    t12_tmp * 0.00059693993396417282) + d6 * t7_tmp * t15 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d3 * t8_tmp * t11_tmp * t16 * t24 *
    0.0011854468639373871) + d197 * 0.0078263252487517053) + d195 * t25 *
    0.0011854468639373871) + d126 * t25 * 0.0011854468639373871) + d127 * t25 *
    0.001765933827532306) + d26 * t25 * 0.0011854468639373871) + d128 * t13_tmp *
    0.00059693993396417282) + d129 * t12_tmp * 0.00059693993396417282) + d130 *
    t13_tmp * 0.00059693993396417282) - d29 * t12_tmp * t22 *
    0.0017587418349192239) + d131 * t24 * 0.0011854468639373871) + d132 * t24 *
    0.0011854468639373871) + d116 * t13_tmp * 0.0017587418349192239) - d133 *
    t12_tmp * 0.0017587418349192239) + d134 * t12_tmp * 0.00059693993396417282)
    - d131 * t25 * 0.0011854468639373871) - d132 * t25 * 0.0011854468639373871)
    - d129 * t13_tmp * 0.0017587418349192239) - d135 * t13_tmp *
    0.00059693993396417282) - d136 * t12_tmp * 0.00059693993396417282) - d137 *
    t25 * 0.001765933827532306) - d133 * t13_tmp * 0.00059693993396417282) + d34
    * t12_tmp * t22 * 0.0017587418349192239) - d134 * t13_tmp *
    0.0017587418349192239) + d138 * t24 * 0.0011854468639373871) + d136 *
    t13_tmp * 0.0017587418349192239) - d138 * t25 * 0.0011854468639373871) +
    d139 * t13_tmp * 0.00059693993396417282) - d140 * t24 *
    0.0011854468639373871) + d141 * t12_tmp * 0.0017587418349192239) + d140 *
    t25 * 0.0011854468639373871) + d141 * t13_tmp * 0.00059693993396417282) -
    d38 * t12_tmp * t22 * 0.0017587418349192239) - d142 * t13_tmp *
    0.00059693993396417282) + d143 * t11_tmp * 0.13542482002433209) - d144 *
    t11_tmp * 0.13542482002433209) + d198 * 0.33125228086274061) - d199 *
    0.33125228086274061) - d200 * 0.33125228086274061) - d196 *
    0.33125228086274061) - d145 * t11_tmp * 0.13542482002433209) + d48 * t15 *
    t10_tmp * 0.13542482002433209) + d48 * t18 * t10_tmp * 0.13542482002433209)
    - d145 * t10_tmp * 0.33125228086274061) - j_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000471111038810923) + j_Bstack_hat_idx_1_tmp * t13_tmp *
    0.0062474344427746742) - d40 * t11_tmp * t15 * t12_tmp *
    0.0062474344427746742) + d202 * t7_tmp * t18 * t12_tmp * 0.01249486888554935)
    - d39 * t7_tmp * t11_tmp * t15 * t13_tmp * 0.000471111038810923) + d201 *
    t6_tmp * t7_tmp * t18 * t13_tmp * 0.000942222077621846) - Bstack_hat_idx_21 *
    t12_tmp * 0.01249486888554935) - 0.0825 * t2_tmp * t5_tmp * t7_tmp * t11_tmp
    * t18 * t12_tmp * 0.0062474344427746742) - Bstack_hat_idx_22 * t12_tmp *
    0.01249486888554935) - d203 * t12_tmp * 0.000471111038810923) -
    Bstack_hat_idx_21 * t13_tmp * 0.000942222077621846) - d146 * t13_tmp *
    0.000471111038810923) - d147 * t12_tmp * 0.0062474344427746742) + d148 *
    t12_tmp * 0.01249486888554935) - d222 * t9_tmp * t13_tmp *
    0.000942222077621846) + d223 * 0.01249486888554935) - d210 * t12_tmp *
    0.01249486888554935) - d213 * t12_tmp * 0.000471111038810923) + d203 *
    t13_tmp * 0.0062474344427746742) - d50 * t12_tmp * t22 *
    0.000471111038810923) + d216 * t12_tmp * 0.000471111038810923) - d147 *
    t13_tmp * 0.000471111038810923) - d153 * t12_tmp * 0.0062474344427746742) +
    d148 * t13_tmp * 0.000942222077621846) + d206 * t13_tmp *
    0.000942222077621846) - d210 * t13_tmp * 0.000942222077621846) + d213 *
    t13_tmp * 0.0062474344427746742) + d50 * t22 * t13_tmp *
    0.0062474344427746742) - d155 * t12_tmp * 0.0062474344427746742) - d216 *
    t13_tmp * 0.0062474344427746742) + d215 * t12_tmp * t22 *
    0.000471111038810923) - d218 * t12_tmp * 0.000471111038810923) - d153 *
    t13_tmp * 0.000471111038810923) + d157 * t12_tmp * 0.0062474344427746742) -
    d219 * t12_tmp * 0.01249486888554935) - d155 * t13_tmp *
    0.000471111038810923) - -0.0825 * t2_tmp * t7_tmp * t11 * t11_tmp * t18 *
    t12_tmp * 0.0062474344427746742) - d215 * t22 * t13_tmp *
    0.0062474344427746742) + -0.0825 * t3_tmp * t5_tmp * t10 * t9_tmp * t10_tmp *
    t12_tmp * 0.0062474344427746742) + d218 * t13_tmp * 0.0062474344427746742) +
    d205 * t15 * t10_tmp * t12_tmp * 0.000471111038810923) + d221 * t20 *
    t12_tmp * 0.000471111038810923) + d220 * t20 * t12_tmp *
    0.000471111038810923) + d157 * t13_tmp * 0.000471111038810923) - d224 *
    t12_tmp * 0.000942222077621846) + d217 * t12_tmp * 0.000471111038810923) +
    d227 * t12_tmp * 0.000471111038810923) - d229 * 0.01249486888554935) - d219 *
    t13_tmp * 0.000942222077621846) + d230 * t12_tmp * 0.000471111038810923) -
    k_Bstack_hat_idx_1_tmp * t13_tmp * 0.000471111038810923) + d156 * t18 *
    t12_tmp * 0.0062474344427746742) + Bstack_hat_idx_24 * t13_tmp *
    0.000471111038810923) - d105 * t20 * t12_tmp * 0.000471111038810923) - d204 *
    t10 * t15 * t10_tmp * t13_tmp * 0.0062474344427746742) - d15 * t7_tmp *
    t9_tmp * t20 * t13_tmp * 0.0062474344427746742) + d221 * t12_tmp * t22 *
    0.000471111038810923) - 0.0825 * t3_tmp * t10 * t11 * t8_tmp * t20 * t13_tmp
    * 0.0062474344427746742) + d220 * t12_tmp * t22 * 0.000471111038810923) +
    d231 * t12_tmp * 0.000471111038810923) + d224 * t13_tmp *
    0.01249486888554935) - d104 * t12_tmp * t22 * 0.000942222077621846) - d217 *
    t13_tmp * 0.0062474344427746742) - d227 * t13_tmp * 0.0062474344427746742) -
    d232 * t12_tmp * 0.000471111038810923) - d233 * t12_tmp *
    0.000471111038810923) - d228 * t13_tmp * 0.000942222077621846) - d230 *
    t13_tmp * 0.0062474344427746742) + d_Bstack_hat_idx_1_tmp * t13_tmp *
    0.000471111038810923) + -0.0825 * t3_tmp * t5_tmp * t8_tmp * t16 * t20 *
    t13_tmp * 0.0062474344427746742) - d105 * t12_tmp * t22 *
    0.000471111038810923) - d221 * t22 * t13_tmp * 0.0062474344427746742) - d220
    * t22 * t13_tmp * 0.0062474344427746742) + d163 * t12_tmp *
    0.0062474344427746742) - d231 * t13_tmp * 0.0062474344427746742) + d56 *
    t12_tmp * t22 * 0.000471111038810923) + d104 * t22 * t13_tmp *
    0.01249486888554935) + d232 * t13_tmp * 0.0062474344427746742) + d233 *
    t13_tmp * 0.0062474344427746742) + d105 * t22 * t13_tmp *
    0.0062474344427746742) - d164 * t12_tmp * 0.0062474344427746742) - d234 *
    t12_tmp * 0.000471111038810923) + d235 * t12_tmp * t22 * 0.01249486888554935)
    + d163 * t13_tmp * 0.000471111038810923) - d56 * t22 * t13_tmp *
    0.0062474344427746742) + d165 * t12_tmp * 0.0062474344427746742) - d236 *
    t12_tmp * 0.000471111038810923) - d164 * t13_tmp * 0.000471111038810923) +
    d234 * t13_tmp * 0.0062474344427746742) + d235 * t22 * t13_tmp *
    0.000942222077621846) + d165 * t13_tmp * 0.000471111038810923) + d236 *
    t13_tmp * 0.0062474344427746742) - d106 * t12_tmp * t22 *
    0.000471111038810923) - d237 * t12_tmp * 0.000471111038810923) +
    Bstack_hat_idx_23 * t12_tmp * 0.000471111038810923) + d106 * t22 * t13_tmp *
    0.0062474344427746742) - d166 * t12_tmp * 0.0062474344427746742) + d237 *
    t13_tmp * 0.0062474344427746742) - d107 * t12_tmp * t22 *
    0.000471111038810923) - Bstack_hat_idx_23 * t13_tmp * 0.0062474344427746742)
    - d166 * t13_tmp * 0.000471111038810923) + d107 * t22 * t13_tmp *
    0.0062474344427746742) - d75 * t9_tmp * t10_tmp * t12_tmp *
    0.0062474344427746742) - d73 * t16 * t9_tmp * t10_tmp * t13_tmp *
    0.000471111038810923) + d272 * 0.02006356734599796) +
    Bstack_hat_idx_1_tmp_tmp_tmp * 0.15405567959822861) + d274 *
    0.33125228086274061) + d273 * 0.33125228086274061) - d240 * t15 * t10_tmp *
    0.13542482002433209) - d247 * 0.33125228086274061) - d240 * t18 * t10_tmp *
    0.13542482002433209) - d242 * 0.33125228086274061) + d241 * t15 * t10_tmp *
    0.13542482002433209) - d167 * t12_tmp * 0.0062474344427746742) - d243 *
    t12_tmp * 0.000471111038810923) + d241 * t18 * t10_tmp * 0.13542482002433209)
    + d168 * t12_tmp * 0.0062474344427746742) - d167 * t13_tmp *
    0.000471111038810923) + d243 * t13_tmp * 0.0062474344427746742) - d108 *
    t12_tmp * t22 * 0.000471111038810923) + d169 * t12_tmp * 0.01249486888554935)
    + d168 * t13_tmp * 0.000471111038810923) - d244 * t12_tmp *
    0.000471111038810923) + d159 * t12_tmp * 0.0062474344427746742) + d108 * t22
    * t13_tmp * 0.0062474344427746742) - d170 * t12_tmp * 0.0062474344427746742)
    + d169 * t13_tmp * 0.000942222077621846) + d162 * t12_tmp *
    0.01249486888554935) + d245 * t12_tmp * 0.000471111038810923) + d244 *
    t13_tmp * 0.0062474344427746742) - d109 * t12_tmp * t22 *
    0.000471111038810923) - d246 * t12_tmp * 0.000471111038810923) + d159 *
    t13_tmp * 0.000471111038810923) - d170 * t13_tmp * 0.000471111038810923) +
    d162 * t13_tmp * 0.000942222077621846) - d245 * t13_tmp *
    0.0062474344427746742) + d110 * t12_tmp * t22 * 0.000471111038810923) + d109
    * t22 * t13_tmp * 0.0062474344427746742) - d171 * t12_tmp *
    0.0062474344427746742) + d246 * t13_tmp * 0.0062474344427746742) - d60 *
    t12_tmp * t22 * 0.000471111038810923) - d172 * t12_tmp *
    0.0062474344427746742) - b_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000471111038810923) - d110 * t22 * t13_tmp * 0.0062474344427746742) - d171
    * t13_tmp * 0.000471111038810923) + d60 * t22 * t13_tmp *
    0.0062474344427746742) - d173 * t12_tmp * 0.0062474344427746742) - d172 *
    t13_tmp * 0.000471111038810923) + d174 * t12_tmp * 0.0062474344427746742) +
    b_Bstack_hat_idx_1_tmp * t13_tmp * 0.0062474344427746742) - d111 * t12_tmp *
    t22 * 0.000471111038810923) - d80 * t9_tmp * t10_tmp * t13_tmp *
    0.000471111038810923) + d81 * t13 * t10_tmp * t13_tmp * 0.000471111038810923)
    + d63 * t10 * t8_tmp * t22 * t13_tmp * 0.0062474344427746742) - d63 * t10 *
    t9_tmp * t10_tmp * t12_tmp * 0.0062474344427746742) + 0.384 * t2_tmp *
    t7_tmp * t11 * t9_tmp * t20 * t12_tmp * 0.000471111038810923) - 0.384 *
    t3_tmp * t6_tmp * t10 * t9_tmp * t10_tmp * t13_tmp * 0.000471111038810923) +
    d248 * t12_tmp * 0.000471111038810923) - d65 * t20 * t13_tmp *
    0.0062474344427746742) + d65 * t12_tmp * t22 * 0.000471111038810923) - d249 *
    t12_tmp * 0.000471111038810923) - d248 * t13_tmp * 0.0062474344427746742) +
    d112 * t12_tmp * t22 * 0.000471111038810923) - d65 * t22 * t13_tmp *
    0.0062474344427746742) + d249 * t13_tmp * 0.0062474344427746742) - d62 *
    t12_tmp * t22 * 0.000471111038810923) - d112 * t22 * t13_tmp *
    0.0062474344427746742) + d175 * t12_tmp * 0.0062474344427746742) + d62 * t22
    * t13_tmp * 0.0062474344427746742) + d175 * t13_tmp * 0.000471111038810923)
    - d253 * 2.4873130689434881E-5) + d252 * 0.01073500939031497) - d254 *
    0.01073500939031497) - d177 * 0.0016408606364898271) + d255 *
    0.0016408606364898271) - d256 * 2.4873130689434881E-5) - d180 *
    0.01073500939031497) + d182 * 0.0016408606364898271) + d258 *
    2.4873130689434881E-5) + l_Bstack_hat_idx_1_tmp * 0.01073500939031497) +
    d181 * t12_tmp * 0.0035174836698384491) - Bstack_hat_idx_1_tmp *
    0.01073500939031497) + d181 * t13_tmp * 0.0011938798679283461) + smax *
    0.01073500939031497) + d250 * t12_tmp * 0.0011938798679283461) + d113 *
    t12_tmp * t13_tmp * 0.001765933827532306) - d184 * t25 *
    0.001765933827532306) - d250 * t13_tmp * 0.0035174836698384491) + d251 *
    t12_tmp * 0.0035174836698384491) + d92 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d122 * 0.01073500939031497) + d251 * t13_tmp *
    0.0011938798679283461) - s * t25 * 0.001765933827532306) - d98 * t12_tmp *
    t13_tmp * 0.0023708937278747728) + d259 * t25 * 0.001765933827532306) + d20 *
    t12_tmp * t22 * t13_tmp * 0.0023708937278747728) - d260 * t25 *
    0.001765933827532306) + d188 * t24 * 0.0023708937278747728) +
    c_Bstack_hat_idx_1_tmp * t12_tmp * 0.0035174836698384491) + d100 * t12_tmp *
    t13_tmp * 0.0023708937278747728) - d103 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d91 * t9_tmp * t10_tmp * t25 *
    0.0023708937278747728) + d10 * t8_tmp * t11_tmp * t12_tmp * t13_tmp *
    0.001765933827532306) - d11 * t8_tmp * t11_tmp * t10_tmp * t25 *
    0.001765933827532306) + d2 * t10 * t8_tmp * t9_tmp * t20 * t25 *
    0.001765933827532306) + d6 * t7_tmp * t11_tmp * t18 * t10_tmp * t13_tmp *
    0.0011938798679283461) + t2_tmp * t4_tmp * t6_tmp * t15 * t10_tmp * t12_tmp *
    t13_tmp * 0.001765933827532306) + d189 * t25 * 0.001765933827532306) - d194 *
    t12_tmp * t13_tmp * 0.001765933827532306) - d190 * t25 *
    0.001765933827532306) - d195 * t12_tmp * t13_tmp * 0.001765933827532306) -
    d126 * t12_tmp * t13_tmp * 0.001765933827532306) - d123 * t12_tmp * t13_tmp *
    0.0023708937278747728) + d25 * t12_tmp * t22 * t13_tmp *
    0.0023708937278747728) - d26 * t12_tmp * t13_tmp * 0.001765933827532306) -
    d191 * t25 * 0.001765933827532306) + d131 * t12_tmp * t13_tmp *
    0.001765933827532306) + d132 * t12_tmp * t13_tmp * 0.001765933827532306) -
    d137 * t12_tmp * t13_tmp * 0.0023708937278747728) + d138 * t12_tmp * t13_tmp
    * 0.001765933827532306) + d197 * t25 * 0.001765933827532306) - d140 *
    t12_tmp * t13_tmp * 0.001765933827532306) - d267 * 0.33125228086274061) -
    d263 * 0.33125228086274061) + d262 * t15 * t10_tmp * 0.13542482002433209) +
    d262 * t18 * t10_tmp * 0.13542482002433209) + d198 * t12_tmp *
    0.01249486888554935) - d199 * t12_tmp * 0.01249486888554935) + d198 *
    t13_tmp * 0.000942222077621846) - d200 * t12_tmp * 0.01249486888554935) -
    d199 * t13_tmp * 0.000942222077621846) - d196 * t12_tmp *
    0.01249486888554935) - d200 * t13_tmp * 0.000942222077621846) - d264 *
    t12_tmp * 0.000942222077621846) - d196 * t13_tmp * 0.000942222077621846) +
    d264 * t13_tmp * 0.01249486888554935) - d149 * t12_tmp * t22 *
    0.000942222077621846) + d265 * t12_tmp * 0.000942222077621846) - d266 *
    t12_tmp * 0.01249486888554935) + d149 * t22 * t13_tmp * 0.01249486888554935)
    - d265 * t13_tmp * 0.01249486888554935) + d119 * t12_tmp * t22 *
    0.000942222077621846) + d268 * t12_tmp * t22 * 0.01249486888554935) - d266 *
    t13_tmp * 0.000942222077621846) - d119 * t22 * t13_tmp * 0.01249486888554935)
    - b_Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935) + d268 * t22 *
    t13_tmp * 0.000942222077621846) - b_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) + d150 * t20 * t12_tmp * 0.000942222077621846) - d209 *
    t15 * t12_tmp * t22 * 0.01249486888554935) - d208 * t8_tmp * t9_tmp *
    t10_tmp * t12_tmp * 0.000942222077621846) + d222 * t9_tmp * t12_tmp * t22 *
    0.01249486888554935) - d226 * t8_tmp * t11_tmp * t10_tmp * t12_tmp *
    0.01249486888554935) - d55 * t13 * t9_tmp * t20 * t13_tmp *
    0.01249486888554935) + d54 * t7_tmp * t13 * t9_tmp * t12_tmp * t22 *
    0.000942222077621846) - d207 * t7_tmp * t11 * t15 * t22 * t13_tmp *
    0.000942222077621846) + d158 * t4_tmp * t7_tmp * t8_tmp * t9_tmp * t10_tmp *
    t13_tmp * 0.01249486888554935) + Bstack_hat_idx_22 * t22 * t13_tmp *
    0.000942222077621846) - 0.088 * t2_tmp * t7_tmp * t11 * t8_tmp * t11_tmp *
    t10_tmp * t13_tmp * 0.000942222077621846) + d225 * t12_tmp *
    0.01249486888554935) - d223 * t22 * 0.01249486888554935) - d150 * t22 *
    t13_tmp * 0.01249486888554935) + d225 * t13_tmp * 0.000942222077621846) -
    d206 * t22 * t13_tmp * 0.000942222077621846) - d212 * t12_tmp *
    0.01249486888554935) - d212 * t13_tmp * 0.000942222077621846) + d229 * t22 *
    0.01249486888554935) + d228 * t22 * t13_tmp * 0.000942222077621846) + d269 *
    t12_tmp * 0.01249486888554935) + d269 * t13_tmp * 0.000942222077621846) -
    d272 * t11_tmp * 0.13542482002433209) - d275 * 0.33125228086274061) + d274 *
    t12_tmp * 0.01249486888554935) + d274 * t13_tmp * 0.000942222077621846) +
    d273 * t12_tmp * 0.01249486888554935) + d273 * t13_tmp *
    0.000942222077621846) - d247 * t12_tmp * 0.01249486888554935) - d247 *
    t13_tmp * 0.000942222077621846) - d242 * t12_tmp * 0.01249486888554935) -
    d242 * t13_tmp * 0.000942222077621846) - d276 * 0.015652650497503411) - d252
    * t12_tmp * 0.0035174836698384491) - d252 * t13_tmp * 0.0011938798679283461)
    + d176 * t12_tmp * t22 * 0.0035174836698384491) - d253 * t24 *
    0.0023708937278747728) + d253 * t25 * 0.0023708937278747728) - d177 *
    t12_tmp * 0.0011938798679283461) + d254 * t13_tmp * 0.0011938798679283461) +
    d255 * t12_tmp * 0.0011938798679283461) + d177 * t13_tmp *
    0.0035174836698384491) - d255 * t13_tmp * 0.0035174836698384491) + d180 *
    t12_tmp * 0.0035174836698384491) + d182 * t12_tmp * 0.0011938798679283461) +
    d180 * t13_tmp * 0.0011938798679283461) - d182 * t13_tmp *
    0.0035174836698384491) - d256 * t24 * 0.0023708937278747728) + d256 * t25 *
    0.0023708937278747728) - l_Bstack_hat_idx_1_tmp * t12_tmp *
    0.0035174836698384491) + Bstack_hat_idx_1_tmp * t12_tmp *
    0.0035174836698384491) - d257 * t15 * t10_tmp * t13_tmp *
    0.0011938798679283461) + d97 * t9_tmp * t10_tmp * t13_tmp *
    0.0011938798679283461) - smax * t12_tmp * 0.0035174836698384491) + d21 *
    t8_tmp * t9_tmp * t10_tmp * t24 * 0.0023708937278747728) - d7 * t11 * t8_tmp
    * t9_tmp * t10_tmp * t25 * 0.0023708937278747728) - d19 * t7_tmp * t15 * t20
    * t12_tmp * t13_tmp * 0.0023708937278747728) - d2 * t10 * t8_tmp * t11_tmp *
    t9_tmp * t10_tmp * t13_tmp * 0.0011938798679283461) - s * t12_tmp * t13_tmp *
    0.0023708937278747728) + t3_tmp * t5_tmp * t8_tmp * t11_tmp * t16 * t9_tmp *
    t10_tmp * t12_tmp * 0.0035174836698384491) + d259 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d260 * t12_tmp * t13_tmp * 0.0023708937278747728) +
    d122 * t13_tmp * 0.0011938798679283461) + d188 * t12_tmp * t13_tmp *
    0.003531867655064613) - d192 * t12_tmp * t13_tmp * 0.0023708937278747728) +
    d193 * t12_tmp * t13_tmp * 0.0023708937278747728) + d189 * t12_tmp * t13_tmp
    * 0.0023708937278747728) - d190 * t12_tmp * t13_tmp * 0.0023708937278747728)
    - d191 * t12_tmp * t13_tmp * 0.0023708937278747728) + d197 * t12_tmp *
    t13_tmp * 0.0023708937278747728) - d267 * t12_tmp * 0.01249486888554935) -
    d267 * t13_tmp * 0.000942222077621846) - d263 * t12_tmp *
    0.01249486888554935) + e_Bstack_hat_idx_1_tmp * t12_tmp *
                       0.000942222077621846) - d263 * t13_tmp *
                      0.000942222077621846) - e_Bstack_hat_idx_1_tmp * t13_tmp *
                     0.01249486888554935) + f_Bstack_hat_idx_1_tmp * t12_tmp *
                    0.000942222077621846) - f_Bstack_hat_idx_1_tmp * t13_tmp *
                   0.01249486888554935) - g_Bstack_hat_idx_1_tmp * t12_tmp *
                  0.000942222077621846) + g_Bstack_hat_idx_1_tmp * t13_tmp *
                 0.01249486888554935) - d275 * t12_tmp * 0.01249486888554935) -
               d275 * t13_tmp * 0.000942222077621846) + h_Bstack_hat_idx_1_tmp *
              t12_tmp * 0.000942222077621846) - h_Bstack_hat_idx_1_tmp * t13_tmp
             * 0.01249486888554935) + Bstack_hat_idx_1_tmp_tmp_tmp * t12_tmp *
            t22 * 0.000942222077621846) - Bstack_hat_idx_1_tmp_tmp_tmp * t22 *
           t13_tmp * 0.01249486888554935) - d276 * t25 * 0.003531867655064613) -
         d253 * t12_tmp * t13_tmp * 0.003531867655064613) - d256 * t12_tmp *
        t13_tmp * 0.003531867655064613) + d258 * t12_tmp * t13_tmp *
       0.003531867655064613) - i_Bstack_hat_idx_1_tmp * t12_tmp *
      0.0249897377710987) - i_Bstack_hat_idx_1_tmp * t13_tmp *
     0.0018844441552436919) - d276 * t12_tmp * t13_tmp * 0.0047417874557495474;
  d = t2_tmp * t13;
  d1 = t2_tmp * t11;
  d5 = -0.0825 * t2_tmp * t11;
  d2 *= t7_tmp;
  d7 = d6 * t11;
  d8 = d3 * t7_tmp;
  d9 = d6 * t13;
  d10 = d * t15;
  d11 = d * t18;
  d12 = d1 * t22;
  d13 = d39 * t8_tmp;
  d14 = -0.0825 * t3_tmp * t6_tmp * t7_tmp;
  d16 = d5 * t8_tmp;
  d17 = 0.316 * t3_tmp * t5_tmp;
  d18 = d17 * t4_tmp;
  d20 = d2 * t8_tmp;
  d21 = d19 * t8_tmp;
  d22 = d19 * t9_tmp;
  d23 = d7 * t8_tmp;
  d24 = d2 * t9_tmp;
  d25 = d6 * t8_tmp * t13;
  d26 = d8 * t15;
  d27 = d7 * t9_tmp;
  d28 = d8 * t18;
  d29 = t2_tmp * t8_tmp * t13;
  d30 = d1 * t11_tmp * t10_tmp;
  d31 = d10 * t20;
  d32 = d47 * t8_tmp;
  d33 = d39 * t9_tmp;
  d5 *= t9_tmp;
  d34 = 0.316 * t3_tmp * t4_tmp;
  d35 = d34 * t6_tmp;
  d36 = d14 * t8_tmp;
  d37 = d47 * t9_tmp;
  d38 = t3_tmp * t7_tmp;
  d40 = d13 * t10_tmp;
  d41 = d14 * t9_tmp;
  d42 = d15 * t11_tmp;
  d43 = d42 * t15;
  d46 = d238 * t7_tmp;
  d48 = 0.316 * t3_tmp * t7_tmp;
  d49 = d160 * t11;
  d50 = d48 * t11;
  d51 = 0.384 * t2_tmp * t13;
  d53 = d51 * t11_tmp;
  d55 = d8 * t11_tmp;
  d56 = 0.088 * t2_tmp * t13;
  d57 = d18 * t8_tmp;
  d59 = d160 * t8_tmp * t13;
  d60 = d49 * t8_tmp;
  d61 = d46 * t9_tmp;
  d62 = d48 * t13;
  d63 = d50 * t9_tmp;
  d64 = d62 * t9_tmp;
  d65 = d53 * t15;
  d53 *= t18;
  d66 = d88 * t15;
  d67 = d88 * t18;
  d68 = d20 * t11_tmp;
  d69 = d21 * t20;
  d70 = d88 * t22;
  d71 = d20 * t10_tmp;
  d72 = d8 * t8_tmp;
  d73 = d72 * t9_tmp;
  d74 = d19 * t11_tmp * t9_tmp;
  d75 = d55 * t15;
  d76 = d21 * t22;
  d77 = d22 * t10_tmp;
  d78 = d23 * t20;
  d55 *= t18;
  d79 = d7 * t11_tmp * t9_tmp;
  d80 = d24 * t20;
  d81 = d23 * t22;
  d82 = d25 * t20;
  d83 = d9 * t11_tmp * t9_tmp;
  d84 = d18 * t9_tmp;
  d46 *= t8_tmp;
  d85 = d239 * t9_tmp;
  d86 = d50 * t8_tmp;
  d48 = d48 * t8_tmp * t13;
  d49 *= t9_tmp;
  d89 = d160 * t13 * t9_tmp;
  d90 = d26 * t10_tmp;
  d91 = d24 * t22;
  d92 = d27 * t10_tmp;
  d93 = d25 * t22;
  d94 = d45 * t11_tmp;
  d95 = d118 * t11_tmp;
  d96 = d54 * t11;
  d97 = d96 * t11_tmp;
  d98 = d54 * t13;
  d99 = d98 * t11_tmp;
  d100 = 0.0825 * t2_tmp * t6_tmp * t11_tmp * t18;
  d101 = d33 * t20;
  d102 = -0.0825 * t2_tmp * t11 * t8_tmp * t10_tmp;
  d103 = d5 * t20;
  d104 = Bstack_hat_idx_3_tmp * t8_tmp;
  d105 = d94 * t15;
  d106 = d95 * t15;
  d94 *= t18;
  d107 = d32 * t10_tmp;
  d95 *= t18;
  d108 = d99 * t15;
  d109 = d97 * t18;
  d99 *= t18;
  d110 = d41 * t10_tmp;
  d111 = Bstack_hat_idx_3_tmp * t9_tmp;
  d112 = d56 * t15;
  d113 = d61 * t10_tmp;
  d114 = d59 * t10_tmp;
  d115 = d63 * t10_tmp;
  d116 = d64 * t10_tmp;
  d119 = d88 * t8_tmp;
  d120 = d119 * t9_tmp;
  d121 = d88 * t11_tmp;
  d122 = d121 * t10_tmp;
  d123 = d66 * t20;
  d124 = d21 * t11_tmp * t10_tmp;
  d125 = d23 * t11_tmp * t10_tmp;
  d126 = d2 * t11_tmp * t9_tmp * t10_tmp;
  d127 = d25 * t11_tmp * t10_tmp;
  d128 = d73 * t20;
  d129 = d29 * t11_tmp * t9_tmp;
  d130 = t3_tmp * t4_tmp * t13 * t9_tmp * t10_tmp;
  d131 = t3_tmp * t6_tmp * t7_tmp * t18 * t10_tmp;
  d132 = d * t11_tmp * t15 * t10_tmp;
  d29 *= t9_tmp;
  d133 = d29 * t10_tmp;
  d134 = Bstack_hat_idx_18 * t18;
  d135 = Bstack_hat_idx_18 * t20;
  d136 = d204 * t7_tmp;
  d137 = d136 * t8_tmp * t11_tmp;
  d138 = d207 * t11;
  d139 = d138 * t11_tmp * t9_tmp;
  d140 = d207 * t13 * t11_tmp * t9_tmp;
  d141 = d211 * t7_tmp;
  d142 = d141 * t15 * t10_tmp;
  d143 = d141 * t18 * t10_tmp;
  d144 = 0.088 * t2_tmp * t8_tmp * t13 * t9_tmp * t10_tmp;
  d145 = d271 * t11_tmp;
  d146 = 0.316 * t3_tmp * t5_tmp * t4_tmp * t8_tmp * t10_tmp;
  d147 = 0.316 * t3_tmp * t4_tmp * t6_tmp * t11_tmp;
  d148 = d147 * t15;
  d149 = d239 * t8_tmp * t10_tmp;
  d147 *= t18;
  d150 = d84 * t20;
  d141 = d141 * t8_tmp * t9_tmp;
  d151 = d145 * t15;
  d145 *= t18;
  d152 = d46 * t20;
  Bstack_hat_idx_1_tmp = d48 * t20;
  d153 = d49 * t20;
  d154 = d89 * t20;
  d119 = d119 * t11_tmp * t9_tmp;
  d121 = d121 * t15 * t10_tmp;
  d155 = d120 * t10_tmp;
  d72 = d72 * t11_tmp * t9_tmp * t10_tmp;
  c_Bstack_hat_idx_3_tmp = d202 * t8_tmp * t11_tmp * t10_tmp;
  d_Bstack_hat_idx_3_tmp = d138 * t8_tmp * t11_tmp * t10_tmp;
  b_Bstack_hat_idx_3_tmp = d136 * t11_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_3_tmp = d207 * t8_tmp * t13 * t11_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = Bstack_hat_idx_18 * t8_tmp * t9_tmp * t10_tmp;
  f_Bstack_hat_idx_3_tmp = 0.088 * t2_tmp * t11 * t20;
  f_Bstack_hat_idx_1_tmp = d56 * t18;
  h_Bstack_hat_idx_1_tmp = d239 * t8_tmp;
  i_Bstack_hat_idx_1_tmp = d97 * t15;
  smax = d202 * t11_tmp * t9_tmp;
  s = d60 * t10_tmp;
  l_Bstack_hat_idx_1_tmp = d28 * t10_tmp;
  Bstack_hat_idx_3 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((t2_tmp * 0.1169633856586688 + d6 * 0.22781531224653659) - d38 *
    0.012234928566235041) + d1 * 0.01807861861545219) + d * 0.53245576672167294)
    - d39 * 0.97726851144741667) - d15 * 3.4355396338718371) + d19 *
    0.30034486460496579) + d2 * 0.002736425713896764) - d7 * 0.15017243230248289)
    - d8 * 0.0047707392479584537) + d9 * 0.15017243230248289) + d10 *
    0.0321778928866176) + d1 * t20 * 0.0012722430112630651) + d11 *
    0.025052011110203509) - d12 * 0.0065540822374886409) + d45 *
    1.717769816935919) - d47 * 0.48863425572370828) - d13 * 0.02006356734599796)
    - d33 * 0.15405567959822861) - d16 * 0.02006356734599796) - d5 *
    0.15405567959822861) - d18 * 0.48863425572370828) - d35 * 1.717769816935919)
    - d88 * 0.51437714810622071) - d21 * 0.0122815866196153) + d20 *
    0.0077038208929667978) - d22 * 0.0154076417859336) + d23 *
    0.00614079330980765) - d24 * 0.00614079330980765) - d25 *
    0.00614079330980765) - d26 * 0.003731166785767855) + d27 *
    0.0077038208929667978) + d28 * 0.003731166785767855) - d9 * t9_tmp *
    0.0077038208929667978) + d29 * 0.0074623335715357092) + d30 *
    0.01073500939031497) - d31 * 0.0065540822374886409) + d10 * t22 *
    0.0012722430112630651) - d11 * t24 * 0.001765933827532306) - d12 * t25 *
    0.001765933827532306) - d32 * 0.01003178367299898) + d13 * t11_tmp *
    0.13542482002433209) - d36 * 0.077027839799114317) - d37 *
    0.077027839799114317) + d40 * 0.33125228086274061) + d41 *
    0.01003178367299898) - d43 * 0.33125228086274061) + d16 * t11_tmp *
    0.13542482002433209) - d42 * t18 * 0.33125228086274061) + d15 * t15 *
    t10_tmp * 0.13542482002433209) + d102 * 0.33125228086274061) + d15 * t18 *
    t10_tmp * 0.13542482002433209) + f_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + f_Bstack_hat_idx_1_tmp * t12_tmp *
    0.01249486888554935) + f_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) + f_Bstack_hat_idx_1_tmp * t13_tmp *
    0.000942222077621846) - d57 * 0.01003178367299898) + h_Bstack_hat_idx_1_tmp *
    0.02006356734599796) - d84 * 0.077027839799114317) - d46 *
    0.077027839799114317) + d85 * 0.15405567959822861) - d60 *
    0.01003178367299898) - d86 * 0.077027839799114317) + d61 *
    0.01003178367299898) + d59 * 0.01003178367299898) - d48 *
    0.077027839799114317) - d49 * 0.077027839799114317) + d63 *
    0.01003178367299898) + d89 * 0.077027839799114317) + d64 *
    0.01003178367299898) + d65 * 0.33125228086274061) + d53 *
    0.33125228086274061) - d51 * t15 * t10_tmp * 0.13542482002433209) - d51 *
    t18 * t10_tmp * 0.13542482002433209) - d66 * 0.0321778928866176) - d67 *
    0.025052011110203509) + d88 * t20 * 0.0012722430112630651) + d68 *
    1.243656534471744E-5) - d70 * 0.0065540822374886409) - d74 *
    2.4873130689434881E-5) + d69 * 0.01073500939031497) - d71 *
    0.00082043031824491353) - d76 * 0.01073500939031497) + d73 *
    0.0071258817764140933) + d75 * 0.00082043031824491353) + d77 *
    0.0016408606364898271) + d79 * 1.243656534471744E-5) - d78 *
    0.005367504695157484) - d55 * 0.00082043031824491353) - d83 *
    1.243656534471744E-5) + d80 * 0.005367504695157484) + d81 *
    0.005367504695157484) + d82 * 0.005367504695157484) + d90 *
    1.243656534471744E-5) - d91 * 0.005367504695157484) - d92 *
    0.00082043031824491353) - d93 * 0.005367504695157484) -
    l_Bstack_hat_idx_1_tmp * 1.243656534471744E-5) - d129 *
    0.0016408606364898271) + d9 * t9_tmp * t10_tmp * 0.00082043031824491353) -
    d133 * 2.4873130689434881E-5) - d132 * 0.01073500939031497) - d30 * t12_tmp *
    0.0035174836698384491) - d30 * t13_tmp * 0.0011938798679283461) - d31 * t25 *
    0.001765933827532306) + d11 * t12_tmp * t13_tmp * 0.0023708937278747728) -
    d1 * t12_tmp * t22 * t13_tmp * 0.0023708937278747728) - d104 *
    0.02006356734599796) - d111 * 0.15405567959822861) + d105 *
    0.16562614043137031) + d32 * t11_tmp * 0.06771241001216606) - d106 *
    0.33125228086274061) + d94 * 0.16562614043137031) - d45 * t15 * t10_tmp *
    0.06771241001216606) + d107 * 0.16562614043137031) - d95 *
    0.33125228086274061) + d118 * t15 * t10_tmp * 0.13542482002433209) +
    i_Bstack_hat_idx_1_tmp * 0.16562614043137031) - d45 * t18 * t10_tmp *
    0.06771241001216606) - d108 * 0.16562614043137031) - d14 * t11_tmp * t9_tmp *
    0.06771241001216606) + d118 * t18 * t10_tmp * 0.13542482002433209) + d109 *
    0.16562614043137031) - d96 * t15 * t10_tmp * 0.06771241001216606) - d99 *
    0.16562614043137031) + d98 * t15 * t10_tmp * 0.06771241001216606) - d110 *
    0.16562614043137031) - d96 * t18 * t10_tmp * 0.06771241001216606) + d40 *
    t12_tmp * 0.01249486888554935) - d43 * t12_tmp * 0.01249486888554935) + d98 *
    t18 * t10_tmp * 0.06771241001216606) + d40 * t13_tmp * 0.000942222077621846)
    - d43 * t13_tmp * 0.000942222077621846) - d100 * t12_tmp *
    0.01249486888554935) - d101 * t12_tmp * 0.000942222077621846) - d100 *
    t13_tmp * 0.000942222077621846) + d102 * t12_tmp * 0.01249486888554935) +
    d101 * t13_tmp * 0.01249486888554935) - d33 * t12_tmp * t22 *
    0.000942222077621846) + d102 * t13_tmp * 0.000942222077621846) + d33 * t22 *
    t13_tmp * 0.01249486888554935) - d103 * t12_tmp * 0.000942222077621846) +
    d103 * t13_tmp * 0.01249486888554935) - d5 * t12_tmp * t22 *
    0.000942222077621846) + d5 * t22 * t13_tmp * 0.01249486888554935) + d112 *
    t12_tmp * t22 * 0.01249486888554935) + d112 * t22 * t13_tmp *
    0.000942222077621846) + d57 * t11_tmp * 0.06771241001216606) -
    h_Bstack_hat_idx_1_tmp * t11_tmp * 0.13542482002433209) + d18 * t8_tmp *
    t10_tmp * 0.16562614043137031) - d148 * 0.16562614043137031) - d149 *
    0.33125228086274061) + 0.384 * t3_tmp * t4_tmp * t11 * t8_tmp * t11_tmp *
    0.06771241001216606) - d147 * 0.16562614043137031) - 0.384 * t3_tmp * t5_tmp
    * t7_tmp * t11_tmp * t9_tmp * 0.06771241001216606) - d59 * t11_tmp *
    0.06771241001216606) + d35 * t15 * t10_tmp * 0.06771241001216606) + s *
    0.16562614043137031) + d35 * t18 * t10_tmp * 0.06771241001216606) - d50 *
    t11_tmp * t9_tmp * 0.06771241001216606) - d113 * 0.16562614043137031) - d114
    * 0.16562614043137031) - d62 * t11_tmp * t9_tmp * 0.06771241001216606) -
    d115 * 0.16562614043137031) - d116 * 0.16562614043137031) + d65 * t12_tmp *
    0.01249486888554935) + d65 * t13_tmp * 0.000942222077621846) + d53 * t12_tmp
    * 0.01249486888554935) + d53 * t13_tmp * 0.000942222077621846) - d120 *
    0.0074623335715357092) + d122 * 0.01073500939031497) + d123 *
    0.0065540822374886409) - d66 * t22 * 0.0012722430112630651) - d124 *
    0.015652650497503411) + d67 * t24 * 0.001765933827532306) + d125 *
    0.0078263252487517053) + d68 * t24 * 0.0011854468639373871) - d126 *
    0.0078263252487517053) - d127 * 0.0078263252487517053) - d69 * t12_tmp *
    0.0035174836698384491) - d68 * t25 * 0.0011854468639373871) - d70 * t25 *
    0.001765933827532306) - d71 * t12_tmp * 0.00059693993396417282) - d128 *
    0.0065540822374886409) - d69 * t13_tmp * 0.0011938798679283461) + d21 *
    t12_tmp * t22 * 0.0035174836698384491) - d74 * t24 * 0.0023708937278747728)
    + d75 * t12_tmp * 0.00059693993396417282) + d74 * t25 *
    0.0023708937278747728) + d71 * t13_tmp * 0.0017587418349192239) + d73 * t22 *
    0.0012722430112630651) + d76 * t13_tmp * 0.0011938798679283461) + d77 *
    t12_tmp * 0.0011938798679283461) - d75 * t13_tmp * 0.0017587418349192239) +
    d78 * t12_tmp * 0.0017587418349192239) + d73 * t24 * 0.001765933827532306) -
    d55 * t12_tmp * 0.00059693993396417282) - d77 * t13_tmp *
    0.0035174836698384491) - d80 * t12_tmp * 0.0017587418349192239) + d78 *
    t13_tmp * 0.00059693993396417282) - d23 * t12_tmp * t22 *
    0.0017587418349192239) + d79 * t24 * 0.0011854468639373871) - d6 * t8_tmp *
    t13 * t20 * t12_tmp * 0.0017587418349192239) + d3 * t7_tmp * t11_tmp * t18 *
    t13_tmp * 0.0017587418349192239) - d79 * t25 * 0.0011854468639373871) - d80 *
    t13_tmp * 0.00059693993396417282) + d24 * t12_tmp * t22 *
    0.0017587418349192239) - d81 * t13_tmp * 0.00059693993396417282) - d92 *
    t12_tmp * 0.00059693993396417282) - d82 * t13_tmp * 0.00059693993396417282)
    + d25 * t12_tmp * t22 * 0.0017587418349192239) - d83 * t24 *
    0.0011854468639373871) + d83 * t25 * 0.0011854468639373871) + d90 * t24 *
    0.0011854468639373871) - d129 * t12_tmp * 0.0011938798679283461) + d91 *
    t13_tmp * 0.00059693993396417282) + d92 * t13_tmp * 0.0017587418349192239) +
    d93 * t13_tmp * 0.00059693993396417282) + d130 * t12_tmp *
    0.00059693993396417282) - d90 * t25 * 0.0011854468639373871) + d129 *
    t13_tmp * 0.0035174836698384491) - d130 * t13_tmp * 0.0017587418349192239) -
    d131 * t24 * 0.0011854468639373871) + d131 * t25 * 0.0011854468639373871) +
    d132 * t12_tmp * 0.0035174836698384491) + d132 * t13_tmp *
    0.0011938798679283461) - d133 * t24 * 0.0023708937278747728) + d133 * t25 *
    0.0023708937278747728) - d31 * t12_tmp * t13_tmp * 0.0023708937278747728) +
    d104 * t11_tmp * 0.13542482002433209) + d104 * t10_tmp * 0.33125228086274061)
    + d105 * t12_tmp * 0.0062474344427746742) - d134 * t12_tmp *
    0.01249486888554935) + d105 * t13_tmp * 0.000471111038810923) - d106 *
    t12_tmp * 0.01249486888554935) - d134 * t13_tmp * 0.000942222077621846) +
    d135 * t12_tmp * 0.01249486888554935) + d94 * t12_tmp *
    0.0062474344427746742) - d137 * t12_tmp * 0.000471111038810923) - d106 *
    t13_tmp * 0.000942222077621846) + d135 * t13_tmp * 0.000942222077621846) +
    d94 * t13_tmp * 0.000471111038810923) + d107 * t12_tmp *
    0.0062474344427746742) - d95 * t12_tmp * 0.01249486888554935) + d137 *
    t13_tmp * 0.0062474344427746742) + smax * t12_tmp * 0.000942222077621846) +
    d107 * t13_tmp * 0.000471111038810923) - d95 * t13_tmp *
    0.000942222077621846) + i_Bstack_hat_idx_1_tmp * t12_tmp *
    0.0062474344427746742) - smax * t13_tmp * 0.01249486888554935) + d96 *
    t11_tmp * t15 * t13_tmp * 0.000471111038810923) - d54 * t13 * t11_tmp * t15 *
    t12_tmp * 0.0062474344427746742) - d141 * t12_tmp * 0.01249486888554935) +
    -0.0825 * t3_tmp * t4_tmp * t11 * t11_tmp * t18 * t12_tmp *
    0.0062474344427746742) - -0.0825 * t3_tmp * t6_tmp * t7_tmp * t8_tmp * t20 *
    t12_tmp * 0.000471111038810923) - 0.0825 * t3_tmp * t4_tmp * t6_tmp * t9_tmp
    * t20 * t12_tmp * 0.000471111038810923) - d108 * t13_tmp *
    0.000471111038810923) - d139 * t12_tmp * 0.000471111038810923) - d141 *
    t13_tmp * 0.000942222077621846) + d109 * t13_tmp * 0.000471111038810923) -
    d99 * t12_tmp * 0.0062474344427746742) + d36 * t20 * t13_tmp *
    0.0062474344427746742) - d36 * t12_tmp * t22 * 0.000471111038810923) + d37 *
    t20 * t13_tmp * 0.0062474344427746742) - d37 * t12_tmp * t22 *
    0.000471111038810923) + d139 * t13_tmp * 0.0062474344427746742) + d140 *
    t12_tmp * 0.000471111038810923) - d99 * t13_tmp * 0.000471111038810923) +
    d36 * t22 * t13_tmp * 0.0062474344427746742) - d110 * t12_tmp *
    0.0062474344427746742) - d142 * t12_tmp * 0.000471111038810923) + d37 * t22 *
    t13_tmp * 0.0062474344427746742) - d140 * t13_tmp * 0.0062474344427746742) -
    d110 * t13_tmp * 0.000471111038810923) + d142 * t13_tmp *
    0.0062474344427746742) + d143 * t12_tmp * 0.000471111038810923) - d143 *
    t13_tmp * 0.0062474344427746742) + d144 * t12_tmp * 0.000942222077621846) -
    d144 * t13_tmp * 0.01249486888554935) - d151 * 0.33125228086274061) - d145 *
    0.33125228086274061) + d271 * t15 * t10_tmp * 0.13542482002433209) + d271 *
    t18 * t10_tmp * 0.13542482002433209) + d146 * t12_tmp *
    0.0062474344427746742) - d148 * t12_tmp * 0.0062474344427746742) + d146 *
    t13_tmp * 0.000471111038810923) - d148 * t13_tmp * 0.000471111038810923) -
    d149 * t12_tmp * 0.01249486888554935) - d147 * t12_tmp *
    0.0062474344427746742) - d149 * t13_tmp * 0.000942222077621846) - d150 *
    t12_tmp * 0.000471111038810923) - d147 * t13_tmp * 0.000471111038810923) -
    d152 * t12_tmp * 0.000471111038810923) + d150 * t13_tmp *
    0.0062474344427746742) - d84 * t12_tmp * t22 * 0.000471111038810923) + d152 *
    t13_tmp * 0.0062474344427746742) - d46 * t12_tmp * t22 *
    0.000471111038810923) + s * t12_tmp * 0.0062474344427746742) + d85 * t20 *
    t12_tmp * 0.000942222077621846) + d84 * t22 * t13_tmp *
    0.0062474344427746742) - d86 * t20 * t12_tmp * 0.000471111038810923) + d238 *
    t7_tmp * t8_tmp * t22 * t13_tmp * 0.0062474344427746742) - d238 * t7_tmp *
    t9_tmp * t10_tmp * t12_tmp * 0.0062474344427746742) + 0.384 * t3_tmp *
    t4_tmp * t11 * t8_tmp * t10_tmp * t13_tmp * 0.000471111038810923) - 0.384 *
    t3_tmp * t4_tmp * t8_tmp * t13 * t10_tmp * t12_tmp * 0.0062474344427746742)
    - 0.384 * t2_tmp * t5_tmp * t6_tmp * t9_tmp * t20 * t13_tmp *
    0.01249486888554935) + d85 * t12_tmp * t22 * 0.000942222077621846) + 0.316 *
    t3_tmp * t7_tmp * t11 * t8_tmp * t20 * t13_tmp * 0.0062474344427746742) -
    d86 * t12_tmp * t22 * 0.000471111038810923) - Bstack_hat_idx_1_tmp * t12_tmp
    * 0.000471111038810923) - d113 * t13_tmp * 0.000471111038810923) - d114 *
    t13_tmp * 0.000471111038810923) - d85 * t22 * t13_tmp * 0.01249486888554935)
    + d86 * t22 * t13_tmp * 0.0062474344427746742) - d115 * t12_tmp *
    0.0062474344427746742) + Bstack_hat_idx_1_tmp * t13_tmp *
    0.0062474344427746742) - d48 * t12_tmp * t22 * 0.000471111038810923) - d153 *
    t12_tmp * 0.000471111038810923) - d115 * t13_tmp * 0.000471111038810923) +
    d48 * t22 * t13_tmp * 0.0062474344427746742) - d116 * t12_tmp *
    0.0062474344427746742) + d153 * t13_tmp * 0.0062474344427746742) - d49 *
    t12_tmp * t22 * 0.000471111038810923) + d154 * t12_tmp *
    0.000471111038810923) - d116 * t13_tmp * 0.000471111038810923) + d49 * t22 *
    t13_tmp * 0.0062474344427746742) - d154 * t13_tmp * 0.0062474344427746742) +
    d89 * t12_tmp * t22 * 0.000471111038810923) - d89 * t22 * t13_tmp *
    0.0062474344427746742) + d119 * 0.0016408606364898271) + d155 *
    2.4873130689434881E-5) + d121 * 0.01073500939031497) - d122 * t12_tmp *
    0.0035174836698384491) - d122 * t13_tmp * 0.0011938798679283461) + d123 *
    t25 * 0.001765933827532306) - d72 * 0.01073500939031497) - d67 * t12_tmp *
    t13_tmp * 0.0023708937278747728) - d124 * t25 * 0.003531867655064613) + d68 *
    t12_tmp * t13_tmp * 0.001765933827532306) - d88 * t12_tmp * t22 * t13_tmp *
    0.0023708937278747728) - d74 * t12_tmp * t13_tmp * 0.003531867655064613) +
    d125 * t25 * 0.001765933827532306) - d126 * t25 * 0.001765933827532306) -
    d127 * t25 * 0.001765933827532306) - d73 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d128 * t25 * 0.001765933827532306) + d79 * t12_tmp *
    t13_tmp * 0.001765933827532306) - d83 * t12_tmp * t13_tmp *
    0.001765933827532306) + d90 * t12_tmp * t13_tmp * 0.001765933827532306) -
    l_Bstack_hat_idx_1_tmp * t12_tmp * t13_tmp * 0.001765933827532306) - d133 *
    t12_tmp * t13_tmp * 0.003531867655064613) + d261 * t6_tmp * t8_tmp * t10_tmp
    * t12_tmp * 0.01249486888554935) + d52 * t4_tmp * t6_tmp * t8_tmp * t10_tmp *
    t13_tmp * 0.000942222077621846) - d52 * t4_tmp * t6_tmp * t9_tmp * t20 *
    t12_tmp * 0.000942222077621846) + -0.0825 * t3_tmp * t5_tmp * t4_tmp *
    t6_tmp * t9_tmp * t20 * t13_tmp * 0.01249486888554935) - -0.0825 * t3_tmp *
    t5_tmp * t4_tmp * t6_tmp * t9_tmp * t12_tmp * t22 * 0.000942222077621846) -
    0.088 * t3_tmp * t5_tmp * t4_tmp * t6_tmp * t15 * t12_tmp * t22 *
    0.01249486888554935) - c_Bstack_hat_idx_3_tmp * t12_tmp * 0.0249897377710987)
    + d111 * t22 * t13_tmp * 0.01249486888554935) - Bstack_hat_idx_18 * t15 *
    t22 * t13_tmp * 0.000942222077621846) - c_Bstack_hat_idx_3_tmp * t13_tmp *
    0.0018844441552436919) + d_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) - b_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + d_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) - Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935)
    - b_Bstack_hat_idx_3_tmp * t13_tmp * 0.000942222077621846) -
    Bstack_hat_idx_3_tmp * t13_tmp * 0.000942222077621846) + 0.088 * t3_tmp *
    t6_tmp * t7_tmp * t8_tmp * t9_tmp * t12_tmp * t22 * 0.01249486888554935) +
    d141 * t22 * t13_tmp * 0.000942222077621846) - d151 * t12_tmp *
    0.01249486888554935) - d151 * t13_tmp * 0.000942222077621846) - d145 *
                      t12_tmp * 0.01249486888554935) - d145 * t13_tmp *
                     0.000942222077621846) + d119 * t12_tmp *
                    0.0011938798679283461) - d119 * t13_tmp *
                   0.0035174836698384491) - d121 * t12_tmp *
                  0.0035174836698384491) - d121 * t13_tmp *
                 0.0011938798679283461) + d155 * t24 * 0.0023708937278747728) -
               d155 * t25 * 0.0023708937278747728) + d123 * t12_tmp * t13_tmp *
              0.0023708937278747728) + d72 * t12_tmp * 0.0035174836698384491) -
            d124 * t12_tmp * t13_tmp * 0.0047417874557495474) + d72 * t13_tmp *
           0.0011938798679283461) + d125 * t12_tmp * t13_tmp *
          0.0023708937278747728) - d126 * t12_tmp * t13_tmp *
         0.0023708937278747728) - d127 * t12_tmp * t13_tmp *
        0.0023708937278747728) - d128 * t12_tmp * t13_tmp *
       0.0023708937278747728) - e_Bstack_hat_idx_3_tmp * t12_tmp *
      0.000942222077621846) + e_Bstack_hat_idx_3_tmp * t13_tmp *
     0.01249486888554935) + d155 * t12_tmp * t13_tmp * 0.003531867655064613;
  d = t5_tmp * t4_tmp;
  d1 = t4_tmp * t6_tmp;
  d2 = t7_tmp * t11;
  d3 = t7_tmp * t13;
  d5 = 0.0825 * t6_tmp * t7_tmp;
  d7 = -0.0825 * t4_tmp * t6_tmp;
  d8 = 0.316 * t5_tmp * t7_tmp;
  d9 = 0.384 * t5_tmp * t4_tmp;
  d10 = t5_tmp * t6_tmp;
  d11 = d10 * t7_tmp;
  d12 = d * t8_tmp;
  d13 = d * t9_tmp;
  d14 = d1 * t15;
  d15 = d1 * t18;
  d16 = d2 * t8_tmp;
  d18 = t7_tmp * t8_tmp;
  d19 = d18 * t13;
  d20 = d2 * t9_tmp;
  d21 = d3 * t9_tmp;
  d22 = 0.0825 * t5_tmp * t7_tmp;
  d23 = d5 * t8_tmp;
  d24 = d7 * t9_tmp;
  d25 = d8 * t8_tmp;
  d26 = 0.316 * t6_tmp * t7_tmp;
  d27 = 0.384 * t7_tmp * t8_tmp;
  d28 = d7 * t8_tmp;
  d29 = d5 * t9_tmp;
  d30 = d9 * t8_tmp;
  d31 = 0.316 * t4_tmp * t11;
  d32 = d31 * t8_tmp;
  d33 = d9 * t9_tmp;
  d35 = d8 * t9_tmp;
  d36 = 0.384 * t7_tmp * t11;
  d37 = d1 * t11_tmp;
  d39 = -0.0825 * t5_tmp * t6_tmp;
  d40 = d39 * t7_tmp;
  d41 = d22 * t11_tmp;
  d42 = -0.0825 * t7_tmp * t11;
  d43 = d42 * t11_tmp;
  d45 = -0.0825 * t7_tmp * t13;
  d46 = d45 * t11_tmp;
  d47 = d11 * t15;
  d48 = d12 * t10_tmp;
  d49 = d1 * t8_tmp;
  d50 = d49 * t9_tmp;
  d51 = d11 * t18;
  d53 = d37 * t15;
  d37 *= t18;
  d55 = d13 * t20;
  d56 = d11 * t22;
  d57 = d14 * t10_tmp;
  d59 = d13 * t22;
  d60 = d16 * t20;
  d61 = d15 * t10_tmp;
  d62 = d2 * t11_tmp * t9_tmp;
  d63 = d19 * t20;
  d64 = d16 * t22;
  d65 = d20 * t10_tmp;
  d66 = d3 * t11_tmp * t9_tmp;
  d67 = d19 * t22;
  d68 = d41 * t15;
  d41 *= t18;
  d69 = d23 * t10_tmp;
  d70 = d43 * t15;
  d71 = d24 * t10_tmp;
  d72 = d46 * t15;
  d43 *= t18;
  d46 *= t18;
  d73 = d25 * t10_tmp;
  d74 = d40 * t8_tmp;
  d40 *= t9_tmp;
  d75 = d26 * t11_tmp;
  d76 = d36 * t8_tmp;
  d77 = d75 * t18;
  d78 = 0.316 * t4_tmp * t13;
  d79 = d12 * t11_tmp;
  d80 = d78 * t9_tmp * t10_tmp;
  d81 = d27 * t13;
  d82 = d81 * t10_tmp;
  d83 = d11 * t8_tmp;
  d84 = d83 * t9_tmp;
  d85 = d11 * t11_tmp;
  d86 = d85 * t10_tmp;
  d88 = d47 * t20;
  d89 = d * t11_tmp * t9_tmp * t10_tmp;
  d90 = d50 * t20;
  d91 = d16 * t11_tmp * t10_tmp;
  d92 = d19 * t11_tmp * t10_tmp;
  d93 = 0.088 * t5_tmp * t6_tmp;
  d94 = d93 * t7_tmp;
  d95 = d94 * t18;
  d96 = d94 * t20;
  d97 = 0.088 * t4_tmp * t6_tmp;
  d98 = d97 * t8_tmp * t9_tmp;
  d99 = d28 * t20;
  d100 = d97 * t15 * t10_tmp;
  d101 = d29 * t20;
  d102 = d97 * t18 * t10_tmp;
  d103 = 0.088 * t7_tmp * t11;
  d104 = d103 * t11_tmp * t9_tmp;
  d105 = 0.088 * t7_tmp * t13 * t11_tmp * t9_tmp;
  d106 = d98 * t12_tmp;
  d107 = 0.384 * t5_tmp * t6_tmp;
  d108 = d107 * t7_tmp;
  d109 = d108 * t11_tmp;
  d110 = d109 * t15;
  d109 *= t18;
  d111 = d33 * t10_tmp;
  d112 = d35 * t20;
  d113 = 0.316 * t4_tmp * t8_tmp * t13;
  d114 = d113 * t20;
  d115 = d31 * t9_tmp * t10_tmp;
  d116 = d76 * t10_tmp;
  d36 *= t9_tmp;
  d118 = d36 * t20;
  d119 = 0.384 * t7_tmp * t13 * t9_tmp;
  d120 = d119 * t20;
  d83 = d83 * t11_tmp * t9_tmp;
  d85 = d85 * t15 * t10_tmp;
  d121 = d84 * t10_tmp;
  d49 = d49 * t11_tmp * t9_tmp * t10_tmp;
  k_Bstack_hat_idx_1_tmp = d40 * t20;
  Bstack_hat_idx_24 = d94 * t15;
  Bstack_hat_idx_4_tmp_tmp_tmp = 0.088 * t5_tmp * t4_tmp;
  d_Bstack_hat_idx_1_tmp = Bstack_hat_idx_4_tmp_tmp_tmp * t11_tmp * t9_tmp *
    t10_tmp;
  d_Bstack_hat_idx_3_tmp = d103 * t8_tmp * t11_tmp * t10_tmp;
  c_Bstack_hat_idx_3_tmp = 0.088 * t7_tmp * t8_tmp * t13 * t11_tmp * t10_tmp;
  s = d94 * t8_tmp * t9_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = d21 * t10_tmp;
  f_Bstack_hat_idx_3_tmp = Bstack_hat_idx_4_tmp_tmp_tmp * t8_tmp * t11_tmp;
  smax = d75 * t15;
  Bstack_hat_idx_4 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((t4_tmp * -0.012234928566235041 -
    t7_tmp * 0.22781531224653659) + d * 0.002736425713896764) - d1 *
    0.0047707392479584537) + d2 * 0.15017243230248289) - d3 *
    0.15017243230248289) - d22 * 1.717769816935919) + d5 * 0.48863425572370828)
    + d8 * 0.48863425572370828) + d26 * 1.717769816935919) + 0.316 * t4_tmp *
    t9_tmp * 0.01003178367299898) - d27 * 0.01003178367299898) + d11 *
    0.51437714810622071) + d12 * 0.0077038208929667978) - d13 *
    0.00614079330980765) - d14 * 0.003731166785767855) + d15 *
    0.003731166785767855) - d16 * 0.00614079330980765) + d19 *
    0.00614079330980765) - d20 * 0.0077038208929667978) + d21 *
    0.0077038208929667978) - d28 * 0.077027839799114317) + d23 *
    0.01003178367299898) + d24 * 0.01003178367299898) + d29 *
    0.077027839799114317) - d30 * 0.077027839799114317) + d25 *
    0.01003178367299898) - d32 * 0.077027839799114317) + d33 *
    0.01003178367299898) + d35 * 0.077027839799114317) - d113 *
    0.077027839799114317) + d76 * 0.02006356734599796) + 0.384 * t7_tmp * t11 *
    t9_tmp * 0.077027839799114317) - d119 * 0.077027839799114317) + t5_tmp *
    t4_tmp * t8_tmp * t11_tmp * 1.243656534471744E-5) + d47 * 0.0321778928866176)
    + d51 * 0.025052011110203509) - d48 * 0.00082043031824491353) - d11 * t20 *
    0.0012722430112630651) + d50 * 0.0071258817764140933) + d53 *
    0.00082043031824491353) + d56 * 0.0065540822374886409) - d37 *
    0.00082043031824491353) + d55 * 0.005367504695157484) + d57 *
    1.243656534471744E-5) - d59 * 0.005367504695157484) - d61 *
    1.243656534471744E-5) - d62 * 1.243656534471744E-5) + d60 *
    0.005367504695157484) + d66 * 1.243656534471744E-5) - d64 *
    0.005367504695157484) - d63 * 0.005367504695157484) + d65 *
    0.00082043031824491353) + d67 * 0.005367504695157484) -
    e_Bstack_hat_idx_3_tmp * 0.00082043031824491353) + d74 * 0.02006356734599796)
    + d40 * 0.15405567959822861) - d68 * 0.16562614043137031) - d23 * t11_tmp *
    0.06771241001216606) - d41 * 0.16562614043137031) - d7 * t11_tmp * t9_tmp *
    0.06771241001216606) + d22 * t15 * t10_tmp * 0.06771241001216606) - d69 *
    0.16562614043137031) - d70 * 0.16562614043137031) + d22 * t18 * t10_tmp *
    0.06771241001216606) - d71 * 0.16562614043137031) + d72 *
    0.16562614043137031) - d43 * 0.16562614043137031) + d42 * t15 * t10_tmp *
    0.06771241001216606) + d46 * 0.16562614043137031) - d45 * t15 * t10_tmp *
    0.06771241001216606) + d42 * t18 * t10_tmp * 0.06771241001216606) - d45 *
    t18 * t10_tmp * 0.06771241001216606) - d25 * t11_tmp * 0.06771241001216606)
    - d9 * t11_tmp * t9_tmp * 0.06771241001216606) - d73 * 0.16562614043137031)
    + smax * 0.16562614043137031) - d31 * t11_tmp * t9_tmp * 0.06771241001216606)
    - d76 * t11_tmp * 0.06771241001216606) + d77 * 0.16562614043137031) - d111 *
    0.16562614043137031) - d78 * t11_tmp * t9_tmp * 0.06771241001216606) + d81 *
    t11_tmp * 0.06771241001216606) - d26 * t15 * t10_tmp * 0.06771241001216606)
    - d115 * 0.16562614043137031) - 0.384 * t7_tmp * t11 * t8_tmp * t10_tmp *
    0.16562614043137031) - d26 * t18 * t10_tmp * 0.06771241001216606) - d80 *
    0.16562614043137031) + d82 * 0.16562614043137031) + d84 *
    0.0074623335715357092) - d86 * 0.01073500939031497) - d88 *
    0.0065540822374886409) + d47 * t22 * 0.0012722430112630651) + d79 * t24 *
    0.0011854468639373871) - d89 * 0.0078263252487517053) - d79 * t25 *
    0.0011854468639373871) - d48 * t12_tmp * 0.00059693993396417282) - d90 *
    0.0065540822374886409) - d51 * t24 * 0.001765933827532306) + d53 * t12_tmp *
    0.00059693993396417282) + d48 * t13_tmp * 0.0017587418349192239) + d50 * t22
    * 0.0012722430112630651) - d91 * 0.0078263252487517053) - d53 * t13_tmp *
    0.0017587418349192239) + d50 * t24 * 0.001765933827532306) - d37 * t12_tmp *
    0.00059693993396417282) + d92 * 0.0078263252487517053) - d55 * t12_tmp *
    0.0017587418349192239) + d56 * t25 * 0.001765933827532306) + d37 * t13_tmp *
    0.0017587418349192239) - d55 * t13_tmp * 0.00059693993396417282) + d13 *
    t12_tmp * t22 * 0.0017587418349192239) + d57 * t24 * 0.0011854468639373871)
    + d59 * t13_tmp * 0.00059693993396417282) - d57 * t25 *
    0.0011854468639373871) - d60 * t12_tmp * 0.0017587418349192239) - d61 * t24 *
    0.0011854468639373871) - d60 * t13_tmp * 0.00059693993396417282) + d16 *
    t12_tmp * t22 * 0.0017587418349192239) - d62 * t24 * 0.0011854468639373871)
    + d63 * t12_tmp * 0.0017587418349192239) + d61 * t25 * 0.0011854468639373871)
    + d62 * t25 * 0.0011854468639373871) + d64 * t13_tmp *
    0.00059693993396417282) + d65 * t12_tmp * 0.00059693993396417282) + d63 *
    t13_tmp * 0.00059693993396417282) - d19 * t12_tmp * t22 *
    0.0017587418349192239) + d66 * t24 * 0.0011854468639373871) - d66 * t25 *
    0.0011854468639373871) - d65 * t13_tmp * 0.0017587418349192239) - d67 *
    t13_tmp * 0.00059693993396417282) - e_Bstack_hat_idx_3_tmp * t12_tmp *
    0.00059693993396417282) + e_Bstack_hat_idx_3_tmp * t13_tmp *
    0.0017587418349192239) - d39 * t7_tmp * t8_tmp * t11_tmp *
    0.13542482002433209) - d39 * t7_tmp * t8_tmp * t10_tmp * 0.33125228086274061)
    - f_Bstack_hat_idx_3_tmp * t12_tmp * 0.000471111038810923) +
    f_Bstack_hat_idx_3_tmp * t13_tmp * 0.0062474344427746742) - 0.0825 * t5_tmp *
    t7_tmp * t11_tmp * t15 * t12_tmp * 0.0062474344427746742) + d95 * t12_tmp *
    0.01249486888554935) - d68 * t13_tmp * 0.000471111038810923) + d95 * t13_tmp
    * 0.000942222077621846) - d96 * t12_tmp * 0.01249486888554935) - d41 *
    t12_tmp * 0.0062474344427746742) - d106 * 0.01249486888554935) - d99 *
    t12_tmp * 0.000471111038810923) - d96 * t13_tmp * 0.000942222077621846) -
    d41 * t13_tmp * 0.000471111038810923) - d69 * t12_tmp *
    0.0062474344427746742) - d98 * t13_tmp * 0.000942222077621846) + d99 *
    t13_tmp * 0.0062474344427746742) - d28 * t12_tmp * t22 *
    0.000471111038810923) - d69 * t13_tmp * 0.000471111038810923) - d70 *
    t12_tmp * 0.0062474344427746742) + d28 * t22 * t13_tmp *
    0.0062474344427746742) - d71 * t12_tmp * 0.0062474344427746742) - d100 *
    t12_tmp * 0.000471111038810923) - d70 * t13_tmp * 0.000471111038810923) +
    d72 * t12_tmp * 0.0062474344427746742) - d71 * t13_tmp *
    0.000471111038810923) - d43 * t12_tmp * 0.0062474344427746742) + d100 *
    t13_tmp * 0.0062474344427746742) + d101 * t12_tmp * 0.000471111038810923) +
    d72 * t13_tmp * 0.000471111038810923) + d102 * t12_tmp *
    0.000471111038810923) + d104 * t12_tmp * 0.000471111038810923) - d43 *
    t13_tmp * 0.000471111038810923) + d46 * t12_tmp * 0.0062474344427746742) -
    d101 * t13_tmp * 0.0062474344427746742) + d29 * t12_tmp * t22 *
    0.000471111038810923) - d102 * t13_tmp * 0.0062474344427746742) - d104 *
    t13_tmp * 0.0062474344427746742) - d105 * t12_tmp * 0.000471111038810923) +
    d46 * t13_tmp * 0.000471111038810923) - d29 * t22 * t13_tmp *
    0.0062474344427746742) + d105 * t13_tmp * 0.0062474344427746742) + d110 *
    0.33125228086274061) + d109 * 0.33125228086274061) - d108 * t15 * t10_tmp *
    0.13542482002433209) - d108 * t18 * t10_tmp * 0.13542482002433209) - d73 *
    t12_tmp * 0.0062474344427746742) - d30 * t20 * t12_tmp *
    0.000471111038810923) + smax * t12_tmp * 0.0062474344427746742) - d73 *
    t13_tmp * 0.000471111038810923) + d9 * t8_tmp * t20 * t13_tmp *
    0.0062474344427746742) - d30 * t12_tmp * t22 * 0.000471111038810923) + 0.316
    * t6_tmp * t7_tmp * t11_tmp * t15 * t13_tmp * 0.000471111038810923) - 0.316 *
    t4_tmp * t11 * t8_tmp * t20 * t12_tmp * 0.000471111038810923) + d77 *
    t12_tmp * 0.0062474344427746742) + d30 * t22 * t13_tmp *
    0.0062474344427746742) - d111 * t12_tmp * 0.0062474344427746742) + d112 *
    t12_tmp * 0.000471111038810923) + d32 * t20 * t13_tmp *
    0.0062474344427746742) - d32 * t12_tmp * t22 * 0.000471111038810923) - d114 *
    t12_tmp * 0.000471111038810923) + d77 * t13_tmp * 0.000471111038810923) -
    d111 * t13_tmp * 0.000471111038810923) - d112 * t13_tmp *
    0.0062474344427746742) + d35 * t12_tmp * t22 * 0.000471111038810923) + d32 *
    t22 * t13_tmp * 0.0062474344427746742) - d115 * t12_tmp *
    0.0062474344427746742) + d114 * t13_tmp * 0.0062474344427746742) - d113 *
    t12_tmp * t22 * 0.000471111038810923) - d116 * t12_tmp *
    0.0062474344427746742) - d35 * t22 * t13_tmp * 0.0062474344427746742) - d115
    * t13_tmp * 0.000471111038810923) + d113 * t22 * t13_tmp *
    0.0062474344427746742) - d80 * t12_tmp * 0.0062474344427746742) - d116 *
    t13_tmp * 0.000471111038810923) + d82 * t12_tmp * 0.0062474344427746742) -
    d80 * t13_tmp * 0.000471111038810923) + d82 * t13_tmp * 0.000471111038810923)
    + d118 * t12_tmp * 0.000471111038810923) - d118 * t13_tmp *
    0.0062474344427746742) + d36 * t12_tmp * t22 * 0.000471111038810923) - d120 *
    t12_tmp * 0.000471111038810923) - d36 * t22 * t13_tmp *
    0.0062474344427746742) + d120 * t13_tmp * 0.0062474344427746742) - d119 *
    t12_tmp * t22 * 0.000471111038810923) + d119 * t22 * t13_tmp *
    0.0062474344427746742) - d83 * 0.0016408606364898271) - d121 *
    2.4873130689434881E-5) - d85 * 0.01073500939031497) + d86 * t12_tmp *
    0.0035174836698384491) - d49 * 0.01073500939031497) + d86 * t13_tmp *
    0.0011938798679283461) + d79 * t12_tmp * t13_tmp * 0.001765933827532306) -
    d88 * t25 * 0.001765933827532306) + d51 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d89 * t25 * 0.001765933827532306) - d50 * t12_tmp *
    t13_tmp * 0.0023708937278747728) + d11 * t12_tmp * t22 * t13_tmp *
    0.0023708937278747728) - d90 * t25 * 0.001765933827532306) - d91 * t25 *
    0.001765933827532306) + d57 * t12_tmp * t13_tmp * 0.001765933827532306) +
    d18 * t13 * t11_tmp * t10_tmp * t25 * 0.001765933827532306) - d1 * t18 *
    t10_tmp * t12_tmp * t13_tmp * 0.001765933827532306) - t7_tmp * t11 * t11_tmp
    * t9_tmp * t12_tmp * t13_tmp * 0.001765933827532306) + d66 * t12_tmp *
    t13_tmp * 0.001765933827532306) - -0.0825 * t5_tmp * t6_tmp * t7_tmp *
    t8_tmp * t10_tmp * t12_tmp * 0.01249486888554935) - d74 * t10_tmp * t13_tmp *
    0.000942222077621846) + k_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000942222077621846) - k_Bstack_hat_idx_1_tmp * t13_tmp *
    0.01249486888554935) + d40 * t12_tmp * t22 * 0.000942222077621846) +
    Bstack_hat_idx_24 * t12_tmp * t22 * 0.01249486888554935) - d40 * t22 *
    t13_tmp * 0.01249486888554935) - d_Bstack_hat_idx_1_tmp * t12_tmp *
    0.01249486888554935) + Bstack_hat_idx_24 * t22 * t13_tmp *
    0.000942222077621846) - d_Bstack_hat_idx_1_tmp * t13_tmp *
    0.000942222077621846) + d106 * t22 * 0.01249486888554935) -
    d_Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935) + d98 * t22 *
    t13_tmp * 0.000942222077621846) - d_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) + c_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + c_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) + d110 * t12_tmp * 0.01249486888554935) + d110 *
                      t13_tmp * 0.000942222077621846) + d109 * t12_tmp *
                     0.01249486888554935) + d109 * t13_tmp *
                    0.000942222077621846) - d83 * t12_tmp *
                   0.0011938798679283461) + d83 * t13_tmp *
                  0.0035174836698384491) + d85 * t12_tmp * 0.0035174836698384491)
                + d85 * t13_tmp * 0.0011938798679283461) - d121 * t24 *
               0.0023708937278747728) + d121 * t25 * 0.0023708937278747728) +
             d49 * t12_tmp * 0.0035174836698384491) + d49 * t13_tmp *
            0.0011938798679283461) - d88 * t12_tmp * t13_tmp *
           0.0023708937278747728) - d89 * t12_tmp * t13_tmp *
          0.0023708937278747728) - d90 * t12_tmp * t13_tmp *
         0.0023708937278747728) - d91 * t12_tmp * t13_tmp *
        0.0023708937278747728) + d92 * t12_tmp * t13_tmp * 0.0023708937278747728)
      + s * t12_tmp * 0.000942222077621846) - s * t13_tmp * 0.01249486888554935)
    - d121 * t12_tmp * t13_tmp * 0.003531867655064613;
  d2 = t2_tmp * t6_tmp;
  d3 = d6 * t6_tmp;
  d5 = d4 * t8_tmp;
  d7 = d4 * t9_tmp;
  d8 = d2 * t11_tmp;
  d9 = d2 * t15;
  d11 = -0.0825 * t2_tmp * t6_tmp;
  d12 = -0.0825 * t3_tmp * t7_tmp;
  d13 = 0.088 * t3_tmp * t7_tmp;
  d14 = 0.384 * t3_tmp * t7_tmp;
  d15 = d38 * t15;
  d16 = d38 * t20;
  d18 = d44 * t7_tmp;
  d19 = 0.0825 * t3_tmp * t6_tmp * t7_tmp;
  d20 = d12 * t8_tmp;
  d21 = d11 * t8_tmp;
  d22 = d11 * t9_tmp;
  d23 = d12 * t9_tmp;
  d17 *= t7_tmp;
  d24 = 0.316 * t3_tmp * t6_tmp * t7_tmp;
  d25 = d58 * t8_tmp;
  d26 = d58 * t9_tmp;
  d27 = d14 * t11_tmp;
  d28 = d87 * t11_tmp;
  d29 = d3 * t8_tmp;
  d30 = d87 * t15;
  d31 = d3 * t9_tmp;
  d32 = d38 * t8_tmp;
  d33 = d5 * t11_tmp;
  d35 = d87 * t10_tmp;
  d36 = d5 * t10_tmp;
  d37 = d2 * t8_tmp;
  d40 = d37 * t9_tmp;
  d41 = d8 * t15;
  d42 = d32 * t9_tmp;
  d43 = d38 * t11_tmp;
  d44 = d7 * t20;
  d45 = d43 * t10_tmp;
  d46 = d9 * t10_tmp;
  d47 = d15 * t20;
  d48 = d2 * t10_tmp;
  d49 = d18 * t8_tmp;
  d50 = d18 * t9_tmp;
  d51 = d19 * t11_tmp;
  d53 = d261 * t9_tmp;
  d55 = d20 * t10_tmp;
  d56 = 0.088 * t2_tmp * t6_tmp;
  d57 = d160 * t6_tmp;
  d59 = d24 * t8_tmp;
  d60 = d17 * t11_tmp;
  d61 = d57 * t8_tmp;
  d62 = d57 * t9_tmp;
  d63 = d24 * t9_tmp;
  d64 = d26 * t10_tmp;
  d65 = d87 * t8_tmp;
  d66 = d65 * t9_tmp;
  d67 = d28 * t15;
  d68 = d29 * t11_tmp;
  d69 = d29 * t10_tmp;
  d70 = d30 * t10_tmp;
  d71 = d31 * t20;
  d72 = d32 * t11_tmp;
  d73 = d72 * t9_tmp;
  d74 = d43 * t15 * t10_tmp;
  d75 = d4 * t11_tmp;
  d76 = d75 * t9_tmp * t10_tmp;
  d77 = d40 * t20;
  d78 = d42 * t10_tmp;
  d79 = d201 * t8_tmp * t11_tmp;
  d80 = Bstack_hat_idx_19 * t10_tmp;
  d81 = d22 * t10_tmp;
  d82 = d56 * t15 * t10_tmp;
  d83 = d13 * t15 * t20;
  d84 = d59 * t10_tmp;
  d85 = d62 * t10_tmp;
  d86 = d66 * t20;
  d88 = d3 * t11_tmp;
  d89 = d88 * t9_tmp * t10_tmp;
  d90 = d37 * t11_tmp;
  d91 = d90 * t9_tmp * t10_tmp;
  smax = d53 * t10_tmp;
  s = Bstack_hat_idx_19 * t15 * t10_tmp;
  Bstack_hat_idx_6_tmp_tmp = d201 * t11_tmp;
  f_Bstack_hat_idx_3_tmp = Bstack_hat_idx_6_tmp_tmp * t9_tmp * t10_tmp;
  b_Bstack_hat_idx_6_tmp_tmp = d56 * t8_tmp;
  d_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_6_tmp_tmp * t9_tmp * t20;
  c_Bstack_hat_idx_6_tmp_tmp = d13 * t8_tmp;
  c_Bstack_hat_idx_3_tmp = c_Bstack_hat_idx_6_tmp_tmp * t9_tmp * t10_tmp;
  d_Bstack_hat_idx_6_tmp_tmp = Bstack_hat_idx_19 * t8_tmp;
  k_Bstack_hat_idx_1_tmp = d_Bstack_hat_idx_6_tmp_tmp * t9_tmp * t20;
  Bstack_hat_idx_6_tmp = d207 * t6_tmp;
  Bstack_hat_idx_24 = Bstack_hat_idx_6_tmp * t11_tmp * t9_tmp * t10_tmp;
  e_Bstack_hat_idx_6_tmp_tmp = d65 * t11_tmp;
  d_Bstack_hat_idx_1_tmp = e_Bstack_hat_idx_6_tmp_tmp * t9_tmp * t10_tmp;
  l_Bstack_hat_idx_1_tmp = d261 * t8_tmp;
  i_Bstack_hat_idx_1_tmp = 0.0825 * t3_tmp * t5_tmp * t7_tmp * t8_tmp * t10_tmp;
  Bstack_hat_idx_6 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((d4 * -0.002736425713896764 +
    d2 * 0.0010395724621905991) - d38 * 0.67044200553529587) - d87 *
    0.0010395724621905991) - d3 * 0.002736425713896764) - d5 *
    0.0077038208929667978) + d7 * 0.011508298004965129) + d8 *
    0.00082043031824491353) + d9 * 0.0074623335715357092) + d15 *
    0.01016405861520946) + d48 * 0.0011978834292821041) + d16 *
    0.0078263252487517053) + 0.0825 * t3_tmp * t5_tmp * t7_tmp *
    0.48863425572370828) + d19 * 1.717769816935919) + d21 * 0.077027839799114317)
    + d20 * 0.02006356734599796) - d22 * 0.01003178367299898) + d23 *
    0.15405567959822861) - d13 * t12_tmp * 0.01249486888554935) - d13 * t13_tmp *
    0.000942222077621846) - d17 * 1.717769816935919) + d24 * 0.48863425572370828)
    + d25 * 0.077027839799114317) - d26 * 0.01003178367299898) - d27 *
    0.33125228086274061) + d14 * t10_tmp * 0.13542482002433209) - d28 *
    0.00082043031824491353) - d30 * 0.0074623335715357092) - d29 *
    0.0077038208929667978) - d33 * 0.0011978834292821041) - d35 *
    0.0011978834292821041) + d31 * 0.011508298004965129) + d36 *
    0.00082043031824491353) - d40 * 0.01016405861520946) - d41 *
    0.0016408606364898271) + d42 * 0.0074623335715357092) - d44 *
    0.01073500939031497) - d46 * 0.0023957668585642081) - d7 * t12_tmp *
    0.0017587418349192239) + d8 * t12_tmp * 0.00059693993396417282) + d45 *
    0.01073500939031497) - d7 * t13_tmp * 0.00059693993396417282) - d8 * t13_tmp
    * 0.0017587418349192239) - d47 * 0.0078263252487517053) - d15 * t25 *
    0.001765933827532306) - d48 * t25 * 0.0023708937278747728) + d16 * t25 *
    0.001765933827532306) - l_Bstack_hat_idx_1_tmp * 0.077027839799114317) + d49
    * 0.01003178367299898) + d53 * 0.01003178367299898) + d50 *
    0.077027839799114317) + d51 * 0.16562614043137031) - d19 * t10_tmp *
    0.06771241001216606) - d20 * t11_tmp * 0.13542482002433209) + d11 * t11_tmp *
    t9_tmp * 0.06771241001216606) + d21 * t12_tmp * 0.000471111038810923) - d55 *
    0.33125228086274061) - d21 * t13_tmp * 0.0062474344427746742) + d81 *
    0.16562614043137031) + d23 * t12_tmp * 0.000942222077621846) - d23 * t13_tmp
    * 0.01249486888554935) - d56 * t10_tmp * t12_tmp * 0.000471111038810923) +
    0.088 * t2_tmp * t6_tmp * t10_tmp * t13_tmp * 0.0062474344427746742) + d13 *
    t20 * t12_tmp * 0.01249486888554935) + 0.088 * t3_tmp * t7_tmp * t20 *
    t13_tmp * 0.000942222077621846) - d60 * 0.16562614043137031) + d61 *
    0.077027839799114317) + d59 * 0.01003178367299898) + d17 * t10_tmp *
    0.06771241001216606) - d62 * 0.01003178367299898) + d63 *
    0.077027839799114317) + d58 * t11_tmp * t9_tmp * 0.06771241001216606) + d25 *
    t12_tmp * 0.000471111038810923) - d25 * t13_tmp * 0.0062474344427746742) +
    d64 * 0.16562614043137031) - d27 * t12_tmp * 0.01249486888554935) - d27 *
    t13_tmp * 0.000942222077621846) + d66 * 0.01016405861520946) + d67 *
    0.0016408606364898271) - d68 * 0.0011978834292821041) + d70 *
    0.0023957668585642081) + d69 * 0.00082043031824491353) - d28 * t12_tmp *
    0.00059693993396417282) + d28 * t13_tmp * 0.0017587418349192239) - d71 *
    0.01073500939031497) - d31 * t12_tmp * 0.0017587418349192239) - d73 *
    0.0016408606364898271) + d76 * 0.0078263252487517053) - d31 * t13_tmp *
    0.00059693993396417282) + d33 * t25 * 0.0023708937278747728) + d35 * t25 *
    0.0023708937278747728) + d36 * t12_tmp * 0.00059693993396417282) + d77 *
    0.0078263252487517053) - d41 * t12_tmp * 0.0011938798679283461) - d78 *
    0.0023957668585642081) - d74 * 0.01073500939031497) - d36 * t13_tmp *
    0.0017587418349192239) + d41 * t13_tmp * 0.0035174836698384491) + d40 * t25 *
    0.001765933827532306) + d44 * t12_tmp * 0.0035174836698384491) - d45 *
    t12_tmp * 0.0035174836698384491) + d44 * t13_tmp * 0.0011938798679283461) -
    d45 * t13_tmp * 0.0011938798679283461) + d46 * t25 * 0.0047417874557495474)
    - d15 * t12_tmp * t13_tmp * 0.0023708937278747728) - d47 * t25 *
    0.001765933827532306) + d48 * t12_tmp * t13_tmp * 0.001765933827532306) +
    d16 * t12_tmp * t13_tmp * 0.0023708937278747728) - d49 * t11_tmp *
    0.06771241001216606) - d261 * t11_tmp * t9_tmp * 0.06771241001216606) - d49 *
    t10_tmp * 0.16562614043137031) - l_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000471111038810923) + d52 * t4_tmp * t8_tmp * t13_tmp *
    0.0062474344427746742) - d52 * t4_tmp * t9_tmp * t10_tmp *
    0.16562614043137031) + 0.0825 * t3_tmp * t5_tmp * t7_tmp * t9_tmp * t12_tmp *
    0.000471111038810923) + 0.0825 * t3_tmp * t6_tmp * t7_tmp * t11_tmp *
    t12_tmp * 0.0062474344427746742) - d50 * t13_tmp * 0.0062474344427746742) +
    d51 * t13_tmp * 0.000471111038810923) + d79 * t12_tmp * 0.000471111038810923)
    + d80 * t12_tmp * 0.000471111038810923) - d79 * t13_tmp *
    0.0062474344427746742) - d80 * t13_tmp * 0.0062474344427746742) - d55 *
    t12_tmp * 0.01249486888554935) - d55 * t13_tmp * 0.000942222077621846) + d81
    * t12_tmp * 0.0062474344427746742) + d82 * t12_tmp * 0.000942222077621846) +
    d81 * t13_tmp * 0.000471111038810923) - d82 * t13_tmp * 0.01249486888554935)
    - d83 * t12_tmp * 0.01249486888554935) - d83 * t13_tmp *
    0.000942222077621846) - d59 * t11_tmp * 0.06771241001216606) + d57 * t11_tmp
    * t9_tmp * 0.06771241001216606) - d84 * 0.16562614043137031) - d60 * t12_tmp
    * 0.0062474344427746742) + d61 * t12_tmp * 0.000471111038810923) - d60 *
    t13_tmp * 0.000471111038810923) - d61 * t13_tmp * 0.0062474344427746742) +
    d85 * 0.16562614043137031) + d63 * t12_tmp * 0.000471111038810923) - d63 *
    t13_tmp * 0.0062474344427746742) + d64 * t12_tmp * 0.0062474344427746742) +
    d64 * t13_tmp * 0.000471111038810923) - d86 * 0.0078263252487517053) + d67 *
    t12_tmp * 0.0011938798679283461) - d67 * t13_tmp * 0.0035174836698384491) +
    d89 * 0.0078263252487517053) - d66 * t25 * 0.001765933827532306) + d68 * t25
    * 0.0023708937278747728) + d69 * t12_tmp * 0.00059693993396417282) - d69 *
    t13_tmp * 0.0017587418349192239) + d91 * 0.01073500939031497) - d70 * t25 *
    0.0047417874557495474) + d71 * t12_tmp * 0.0035174836698384491) - d73 *
    t12_tmp * 0.0011938798679283461) - d33 * t12_tmp * t13_tmp *
    0.001765933827532306) - d35 * t12_tmp * t13_tmp * 0.001765933827532306) +
    d71 * t13_tmp * 0.0011938798679283461) + d73 * t13_tmp *
    0.0035174836698384491) + d74 * t12_tmp * 0.0035174836698384491) + d76 * t25 *
    0.001765933827532306) + d40 * t12_tmp * t13_tmp * 0.0023708937278747728) +
    d74 * t13_tmp * 0.0011938798679283461) + d37 * t9_tmp * t20 * t25 *
    0.001765933827532306) + d38 * t8_tmp * t9_tmp * t10_tmp * t25 *
    0.0047417874557495474) - d2 * t15 * t10_tmp * t12_tmp * t13_tmp *
    0.003531867655064613) - t3_tmp * t7_tmp * t15 * t20 * t12_tmp * t13_tmp *
    0.0023708937278747728) + d158 * t4_tmp * t6_tmp * t8_tmp * t11_tmp * t12_tmp
    * 0.000471111038810923) - i_Bstack_hat_idx_1_tmp * t12_tmp *
    0.0062474344427746742) - Bstack_hat_idx_6_tmp * t8_tmp * t11_tmp * t13_tmp *
    0.0062474344427746742) - i_Bstack_hat_idx_1_tmp * t13_tmp *
    0.000471111038810923) - smax * t12_tmp * 0.0062474344427746742) - s *
    t12_tmp * 0.000942222077621846) - smax * t13_tmp * 0.000471111038810923) + s
    * t13_tmp * 0.01249486888554935) + f_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + f_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) + d_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + c_Bstack_hat_idx_3_tmp * t12_tmp *
    0.000942222077621846) + d_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) - c_Bstack_hat_idx_3_tmp * t13_tmp *
    0.01249486888554935) - d84 * t12_tmp * 0.0062474344427746742) - d84 *
    t13_tmp * 0.000471111038810923) + d85 * t12_tmp * 0.0062474344427746742) +
                       d85 * t13_tmp * 0.000471111038810923) -
                      d_Bstack_hat_idx_1_tmp * 0.01073500939031497) - d66 *
                     t12_tmp * t13_tmp * 0.0023708937278747728) - d68 * t12_tmp *
                    t13_tmp * 0.001765933827532306) - d86 * t25 *
                   0.001765933827532306) + d70 * t12_tmp * t13_tmp *
                  0.003531867655064613) + d89 * t25 * 0.001765933827532306) -
                d91 * t12_tmp * 0.0035174836698384491) - d91 * t13_tmp *
               0.0011938798679283461) + d76 * t12_tmp * t13_tmp *
              0.0023708937278747728) + d77 * t12_tmp * t13_tmp *
             0.0023708937278747728) - d78 * t12_tmp * t13_tmp *
            0.003531867655064613) - k_Bstack_hat_idx_1_tmp * t12_tmp *
           0.01249486888554935) - k_Bstack_hat_idx_1_tmp * t13_tmp *
          0.000942222077621846) + Bstack_hat_idx_24 * t12_tmp *
         0.01249486888554935) + Bstack_hat_idx_24 * t13_tmp *
        0.000942222077621846) + d_Bstack_hat_idx_1_tmp * t12_tmp *
       0.0035174836698384491) + d_Bstack_hat_idx_1_tmp * t13_tmp *
      0.0011938798679283461) - d86 * t12_tmp * t13_tmp * 0.0023708937278747728)
    + d89 * t12_tmp * t13_tmp * 0.0023708937278747728;
  d5 = t5_tmp * t7_tmp;
  d7 = t6_tmp * t7_tmp;
  d9 = t4_tmp * t15;
  d11 = t4_tmp * t20;
  d15 = 0.0825 * t5_tmp * t4_tmp;
  d16 = 0.0825 * t4_tmp * t6_tmp;
  d20 = -0.0825 * t5_tmp * t7_tmp;
  d21 = -0.0825 * t4_tmp * t8_tmp;
  d22 = -0.0825 * t4_tmp * t9_tmp;
  d23 = 0.088 * t4_tmp * t20;
  d25 = 0.316 * t5_tmp * t4_tmp;
  d26 = 0.316 * t4_tmp * t6_tmp;
  d29 = 0.384 * t4_tmp * t11_tmp;
  d30 = d5 * t11_tmp;
  d31 = d7 * t8_tmp;
  d33 = d5 * t15;
  d35 = t4_tmp * t8_tmp;
  d36 = d35 * t9_tmp;
  d40 = t4_tmp * t11_tmp;
  d41 = d7 * t9_tmp;
  d42 = d5 * t10_tmp;
  d44 = d40 * t10_tmp;
  d45 = d9 * t20;
  d46 = d15 * t8_tmp;
  d47 = d20 * t8_tmp;
  d48 = d15 * t9_tmp;
  d49 = d16 * t11_tmp;
  d50 = d20 * t9_tmp;
  d52 = d21 * t10_tmp;
  d53 = d25 * t11_tmp;
  d55 = d26 * t8_tmp;
  d57 = d26 * t9_tmp;
  d58 = 0.384 * t6_tmp * t7_tmp;
  d59 = d58 * t8_tmp;
  d61 = 0.088 * t5_tmp * t7_tmp;
  d62 = d61 * t10_tmp;
  d63 = 0.088 * t4_tmp * t15 * t20;
  d64 = d30 * t15;
  d66 = d31 * t10_tmp;
  d67 = d35 * t11_tmp;
  d68 = d67 * t9_tmp;
  d69 = d33 * t10_tmp;
  d70 = d40 * t15 * t10_tmp;
  d71 = d41 * t20;
  d73 = d36 * t10_tmp;
  d74 = d46 * t10_tmp;
  d76 = d50 * t10_tmp;
  d77 = d55 * t10_tmp;
  d78 = d31 * t11_tmp;
  d79 = d58 * t9_tmp;
  d80 = d79 * t10_tmp;
  d81 = d5 * t8_tmp;
  d82 = d81 * t9_tmp;
  d83 = d82 * t20;
  d84 = d7 * t11_tmp;
  Bstack_hat_idx_7_tmp_tmp = 0.088 * t6_tmp * t7_tmp;
  smax = Bstack_hat_idx_7_tmp_tmp * t8_tmp * t11_tmp;
  s = d61 * t15 * t10_tmp;
  f_Bstack_hat_idx_1_tmp = 0.088 * t4_tmp * t8_tmp;
  Bstack_hat_idx_24 = f_Bstack_hat_idx_1_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_26 = d61 * t8_tmp;
  d_Bstack_hat_idx_1_tmp = Bstack_hat_idx_26 * t9_tmp * t20;
  b_Bstack_hat_idx_3_tmp = Bstack_hat_idx_7_tmp_tmp * t11_tmp;
  l_Bstack_hat_idx_1_tmp = b_Bstack_hat_idx_3_tmp * t9_tmp * t10_tmp;
  b_Bstack_hat_idx_7_tmp_tmp = d81 * t11_tmp;
  i_Bstack_hat_idx_1_tmp = b_Bstack_hat_idx_7_tmp_tmp * t9_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = d84 * t9_tmp * t10_tmp;
  Bstack_hat_idx_7 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t4_tmp *
    -0.67044200553529587 + d5 * 0.0010395724621905991) + d7 *
    0.002736425713896764) + d9 * 0.01016405861520946) + d11 *
    0.0078263252487517053) + d15 * 0.48863425572370828) + d16 *
    1.717769816935919) + d21 * 0.02006356734599796) + d22 * 0.15405567959822861)
    - 0.088 * t4_tmp * t12_tmp * 0.01249486888554935) - 0.088 * t4_tmp * t13_tmp
    * 0.000942222077621846) - d25 * 1.717769816935919) + d26 *
    0.48863425572370828) - d29 * 0.33125228086274061) + 0.384 * t4_tmp * t10_tmp
    * 0.13542482002433209) + d30 * 0.00082043031824491353) + d33 *
    0.0074623335715357092) + d31 * 0.0077038208929667978) + d42 *
    0.0011978834292821041) - d41 * 0.011508298004965129) + d36 *
    0.0074623335715357092) + d44 * 0.01073500939031497) - d45 *
    0.0078263252487517053) - d9 * t25 * 0.001765933827532306) + d11 * t25 *
    0.001765933827532306) + d46 * 0.01003178367299898) + d47 *
    0.077027839799114317) + d48 * 0.077027839799114317) + d49 *
    0.16562614043137031) - d50 * 0.01003178367299898) - d16 * t10_tmp *
    0.06771241001216606) - d21 * t11_tmp * 0.13542482002433209) - d52 *
    0.33125228086274061) + d22 * t12_tmp * 0.000942222077621846) - d22 * t13_tmp
    * 0.01249486888554935) + d23 * t12_tmp * 0.01249486888554935) + d23 *
    t13_tmp * 0.000942222077621846) - d53 * 0.16562614043137031) + d55 *
    0.01003178367299898) + d25 * t10_tmp * 0.06771241001216606) + d57 *
    0.077027839799114317) - d59 * 0.077027839799114317) + d79 *
    0.01003178367299898) - d29 * t12_tmp * 0.01249486888554935) - d29 * t13_tmp *
    0.000942222077621846) - d82 * 0.01016405861520946) - d64 *
    0.0016408606364898271) + d78 * 0.0011978834292821041) - d69 *
    0.0023957668585642081) - d66 * 0.00082043031824491353) + d30 * t12_tmp *
    0.00059693993396417282) - d68 * 0.0016408606364898271) - d30 * t13_tmp *
    0.0017587418349192239) - d73 * 0.0023957668585642081) - d70 *
    0.01073500939031497) + d71 * 0.01073500939031497) + d41 * t12_tmp *
    0.0017587418349192239) + d41 * t13_tmp * 0.00059693993396417282) - d42 * t25
    * 0.0023708937278747728) - d44 * t12_tmp * 0.0035174836698384491) - d44 *
    t13_tmp * 0.0011938798679283461) - d9 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d45 * t25 * 0.001765933827532306) + d11 * t12_tmp *
    t13_tmp * 0.0023708937278747728) - d46 * t11_tmp * 0.06771241001216606) -
    d74 * 0.16562614043137031) + d20 * t11_tmp * t9_tmp * 0.06771241001216606) +
    d47 * t12_tmp * 0.000471111038810923) + d48 * t12_tmp * 0.000471111038810923)
    + d49 * t12_tmp * 0.0062474344427746742) - d47 * t13_tmp *
    0.0062474344427746742) - d48 * t13_tmp * 0.0062474344427746742) + d49 *
    t13_tmp * 0.000471111038810923) + d76 * 0.16562614043137031) - d62 * t12_tmp
    * 0.000471111038810923) - d52 * t12_tmp * 0.01249486888554935) + d62 *
    t13_tmp * 0.0062474344427746742) - d52 * t13_tmp * 0.000942222077621846) -
    d63 * t12_tmp * 0.01249486888554935) - d63 * t13_tmp * 0.000942222077621846)
    - d55 * t11_tmp * 0.06771241001216606) - d77 * 0.16562614043137031) - d53 *
    t12_tmp * 0.0062474344427746742) - d53 * t13_tmp * 0.000471111038810923) -
    d58 * t11_tmp * t9_tmp * 0.06771241001216606) + d57 * t12_tmp *
    0.000471111038810923) - d59 * t12_tmp * 0.000471111038810923) - d57 *
    t13_tmp * 0.0062474344427746742) + d59 * t13_tmp * 0.0062474344427746742) -
    d80 * 0.16562614043137031) + d83 * 0.0078263252487517053) - d64 * t12_tmp *
    0.0011938798679283461) + d64 * t13_tmp * 0.0035174836698384491) -
    e_Bstack_hat_idx_3_tmp * 0.0078263252487517053) + d81 * t9_tmp * t25 *
    0.001765933827532306) - d7 * t8_tmp * t11_tmp * t25 * 0.0023708937278747728)
    - d7 * t8_tmp * t10_tmp * t12_tmp * 0.00059693993396417282) - t4_tmp *
    t8_tmp * t11_tmp * t9_tmp * t12_tmp * 0.0011938798679283461) + d66 * t13_tmp
    * 0.0017587418349192239) + d68 * t13_tmp * 0.0035174836698384491) + d69 *
    t25 * 0.0047417874557495474) + d70 * t12_tmp * 0.0035174836698384491) - d71 *
    t12_tmp * 0.0035174836698384491) + d42 * t12_tmp * t13_tmp *
    0.001765933827532306) + d70 * t13_tmp * 0.0011938798679283461) - d71 *
    t13_tmp * 0.0011938798679283461) + d73 * t25 * 0.0047417874557495474) - d45 *
    t12_tmp * t13_tmp * 0.0023708937278747728) - d74 * t12_tmp *
    0.0062474344427746742) - d74 * t13_tmp * 0.000471111038810923) - smax *
    t12_tmp * 0.000471111038810923) + smax * t13_tmp * 0.0062474344427746742) +
    d76 * t12_tmp * 0.0062474344427746742) + s * t12_tmp * 0.000942222077621846)
    + d76 * t13_tmp * 0.000471111038810923) - s * t13_tmp * 0.01249486888554935)
    + Bstack_hat_idx_24 * t12_tmp * 0.000942222077621846) - Bstack_hat_idx_24 *
                       t13_tmp * 0.01249486888554935) - d77 * t12_tmp *
                      0.0062474344427746742) - d77 * t13_tmp *
                     0.000471111038810923) - d80 * t12_tmp *
                    0.0062474344427746742) - d80 * t13_tmp *
                   0.000471111038810923) + i_Bstack_hat_idx_1_tmp *
                  0.01073500939031497) + d82 * t12_tmp * t13_tmp *
                 0.0023708937278747728) + d78 * t12_tmp * t13_tmp *
                0.001765933827532306) + d83 * t25 * 0.001765933827532306) - d69 *
              t12_tmp * t13_tmp * 0.003531867655064613) - e_Bstack_hat_idx_3_tmp
             * t25 * 0.001765933827532306) - d73 * t12_tmp * t13_tmp *
            0.003531867655064613) + d_Bstack_hat_idx_1_tmp * t12_tmp *
           0.01249486888554935) + d_Bstack_hat_idx_1_tmp * t13_tmp *
          0.000942222077621846) - l_Bstack_hat_idx_1_tmp * t12_tmp *
         0.01249486888554935) - l_Bstack_hat_idx_1_tmp * t13_tmp *
        0.000942222077621846) - i_Bstack_hat_idx_1_tmp * t12_tmp *
       0.0035174836698384491) - i_Bstack_hat_idx_1_tmp * t13_tmp *
      0.0011938798679283461) + d83 * t12_tmp * t13_tmp * 0.0023708937278747728)
    - e_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp * 0.0023708937278747728;
  d9 = t5_tmp * t8_tmp;
  d11 = t6_tmp * t11_tmp;
  d20 = t5_tmp * t9_tmp;
  d21 = t6_tmp * t15;
  d22 = t6_tmp * t10_tmp;
  d23 = -0.0825 * t6_tmp * t9_tmp;
  d31 = 0.384 * t5_tmp * t8_tmp;
  d33 = 0.384 * t5_tmp * t9_tmp;
  d36 = d9 * t11_tmp;
  d41 = d9 * t10_tmp;
  d42 = t6_tmp * t8_tmp;
  d44 = d42 * t9_tmp;
  d45 = d11 * t15;
  d46 = d20 * t20;
  d47 = d21 * t10_tmp;
  smax = 0.088 * t6_tmp * t10_tmp;
  s = 0.088 * t5_tmp * t8_tmp * t11_tmp;
  Bstack_hat_idx_24 = d23 * t10_tmp;
  d_Bstack_hat_idx_1_tmp = 0.088 * t6_tmp * t15 * t10_tmp;
  l_Bstack_hat_idx_1_tmp = d33 * t10_tmp;
  Bstack_hat_idx_8_tmp_tmp = t5_tmp * t11_tmp;
  i_Bstack_hat_idx_1_tmp = Bstack_hat_idx_8_tmp_tmp * t9_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = d44 * t20;
  b_Bstack_hat_idx_8_tmp_tmp = 0.088 * t5_tmp * t11_tmp;
  f_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_8_tmp_tmp * t9_tmp * t10_tmp;
  h_Bstack_hat_idx_1_tmp = 0.088 * t6_tmp * t8_tmp;
  d_Bstack_hat_idx_3_tmp = h_Bstack_hat_idx_1_tmp * t9_tmp * t20;
  c_Bstack_hat_idx_8_tmp_tmp = d42 * t11_tmp;
  c_Bstack_hat_idx_3_tmp = c_Bstack_hat_idx_8_tmp_tmp * t9_tmp * t10_tmp;
  k_Bstack_hat_idx_1_tmp = -0.0825 * t6_tmp * t8_tmp;
  Bstack_hat_idx_8 =
    ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t5_tmp *
    -0.002736425713896764 + t6_tmp * 0.0010395724621905991) - d9 *
    0.0077038208929667978) + d20 * 0.011508298004965129) + d11 *
    0.00082043031824491353) + d21 * 0.0074623335715357092) + d22 *
    0.0011978834292821041) + k_Bstack_hat_idx_1_tmp * 0.077027839799114317) -
    d23 * 0.01003178367299898) + d31 * 0.077027839799114317) - d33 *
    0.01003178367299898) - d36 * 0.0011978834292821041) + d41 *
    0.00082043031824491353) - d44 * 0.01016405861520946) - d45 *
    0.0016408606364898271) - d46 * 0.01073500939031497) - d47 *
    0.0023957668585642081) - d20 * t12_tmp * 0.0017587418349192239) + d11 *
    t12_tmp * 0.00059693993396417282) - d20 * t13_tmp * 0.00059693993396417282)
    - d11 * t13_tmp * 0.0017587418349192239) - d22 * t25 * 0.0023708937278747728)
    + -0.0825 * t6_tmp * t11_tmp * t9_tmp * 0.06771241001216606) +
    k_Bstack_hat_idx_1_tmp * t12_tmp * 0.000471111038810923) -
    k_Bstack_hat_idx_1_tmp * t13_tmp * 0.0062474344427746742) +
    Bstack_hat_idx_24 * 0.16562614043137031) - smax * t12_tmp *
    0.000471111038810923) + smax * t13_tmp * 0.0062474344427746742) + 0.384 *
    t5_tmp * t11_tmp * t9_tmp * 0.06771241001216606) + d31 * t12_tmp *
    0.000471111038810923) - d31 * t13_tmp * 0.0062474344427746742) +
    l_Bstack_hat_idx_1_tmp * 0.16562614043137031) + i_Bstack_hat_idx_1_tmp *
    0.0078263252487517053) + d36 * t25 * 0.0023708937278747728) + d41 * t12_tmp *
    0.00059693993396417282) + e_Bstack_hat_idx_3_tmp * 0.0078263252487517053) -
    d45 * t12_tmp * 0.0011938798679283461) - d41 * t13_tmp *
    0.0017587418349192239) + d45 * t13_tmp * 0.0035174836698384491) + d44 * t25 *
    0.001765933827532306) + d46 * t12_tmp * 0.0035174836698384491) + d46 *
    t13_tmp * 0.0011938798679283461) + d47 * t25 * 0.0047417874557495474) + d22 *
    t12_tmp * t13_tmp * 0.001765933827532306) + s * t12_tmp *
    0.000471111038810923) - s * t13_tmp * 0.0062474344427746742) +
                       Bstack_hat_idx_24 * t12_tmp * 0.0062474344427746742) +
                      d_Bstack_hat_idx_1_tmp * t12_tmp * 0.000942222077621846) +
                     Bstack_hat_idx_24 * t13_tmp * 0.000471111038810923) -
                    d_Bstack_hat_idx_1_tmp * t13_tmp * 0.01249486888554935) +
                   l_Bstack_hat_idx_1_tmp * t12_tmp * 0.0062474344427746742) +
                  l_Bstack_hat_idx_1_tmp * t13_tmp * 0.000471111038810923) +
                 c_Bstack_hat_idx_3_tmp * 0.01073500939031497) - d36 * t12_tmp *
                t13_tmp * 0.001765933827532306) + i_Bstack_hat_idx_1_tmp * t25 *
               0.001765933827532306) + d44 * t12_tmp * t13_tmp *
              0.0023708937278747728) + e_Bstack_hat_idx_3_tmp * t25 *
             0.001765933827532306) - d47 * t12_tmp * t13_tmp *
            0.003531867655064613) + f_Bstack_hat_idx_3_tmp * t12_tmp *
           0.01249486888554935) + f_Bstack_hat_idx_3_tmp * t13_tmp *
          0.000942222077621846) + d_Bstack_hat_idx_3_tmp * t12_tmp *
         0.01249486888554935) + d_Bstack_hat_idx_3_tmp * t13_tmp *
        0.000942222077621846) - c_Bstack_hat_idx_3_tmp * t12_tmp *
       0.0035174836698384491) - c_Bstack_hat_idx_3_tmp * t13_tmp *
      0.0011938798679283461) + i_Bstack_hat_idx_1_tmp * t12_tmp * t13_tmp *
     0.0023708937278747728) + e_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp *
    0.0023708937278747728;
  d9 = 0.0825 * t2_tmp * t9_tmp;
  d20 = 0.0825 * t2_tmp * t8_tmp;
  d21 = d4 * t20;
  d22 = d2 * t9_tmp;
  d23 = d38 * t9_tmp;
  d31 = 0.384 * t2_tmp * t6_tmp;
  d33 = d54 * t6_tmp;
  d36 = d117 * t8_tmp;
  d38 = d117 * t9_tmp;
  d41 = d201 * t20;
  d44 = d20 * t10_tmp;
  d45 = d34 * t8_tmp;
  d46 = d31 * t8_tmp;
  d47 = d34 * t9_tmp;
  d48 = d14 * t9_tmp;
  d50 = d31 * t9_tmp;
  d52 = d87 * t9_tmp;
  d53 = d75 * t10_tmp;
  d54 = d3 * t20;
  d55 = d37 * t20;
  d57 = d32 * t10_tmp;
  d8 *= t9_tmp;
  d58 = d22 * t10_tmp;
  d59 = d23 * t20;
  d62 = d33 * t8_tmp;
  d63 = d19 * t8_tmp;
  d19 *= t9_tmp;
  d64 = d33 * t9_tmp;
  d66 = d36 * t10_tmp;
  d68 = d270 * t8_tmp;
  d69 = d17 * t8_tmp;
  d70 = d17 * t9_tmp;
  d14 *= t8_tmp;
  d71 = d270 * t9_tmp;
  d73 = d46 * t10_tmp;
  d74 = Bstack_hat_idx_6_tmp * t20;
  d76 = c_Bstack_hat_idx_6_tmp_tmp * t11_tmp;
  d77 = d56 * t11_tmp * t9_tmp;
  d78 = d48 * t10_tmp;
  d79 = d65 * t20;
  d28 *= t9_tmp;
  d80 = d52 * t10_tmp;
  d82 = d88 * t10_tmp;
  d83 = d90 * t10_tmp;
  d43 *= t9_tmp;
  d85 = d43 * t10_tmp;
  d86 = d62 * t10_tmp;
  d87 = d19 * t10_tmp;
  d89 = d68 * t10_tmp;
  smax = Bstack_hat_idx_19 * t11_tmp * t9_tmp;
  Bstack_hat_idx_10_tmp_tmp = b_Bstack_hat_idx_6_tmp_tmp * t11_tmp;
  s = Bstack_hat_idx_10_tmp_tmp * t10_tmp;
  b_Bstack_hat_idx_10_tmp_tmp = d13 * t11_tmp * t9_tmp;
  e_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_10_tmp_tmp * t10_tmp;
  f_Bstack_hat_idx_3_tmp = d70 * t10_tmp;
  d_Bstack_hat_idx_3_tmp = e_Bstack_hat_idx_6_tmp_tmp * t10_tmp;
  c_Bstack_hat_idx_10_tmp_tmp = d_Bstack_hat_idx_6_tmp_tmp * t11_tmp;
  c_Bstack_hat_idx_3_tmp = c_Bstack_hat_idx_10_tmp_tmp * t10_tmp;
  k_Bstack_hat_idx_1_tmp = 0.316 * t3_tmp * t4_tmp * t8_tmp * t10_tmp;
  Bstack_hat_idx_10 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d4
    * 0.01152453637796355 - d20 * 0.01003178367299898) - d9 *
    0.077027839799114317) + d3 * 0.01152453637796355) - d37 *
    0.011508298004965129) + d32 * 0.0077038208929667978) + d21 *
    0.0078263252487517053) - d22 * 0.0077038208929667978) - d23 *
    0.011508298004965129) - d4 * t25 * 0.001765933827532306) - d36 *
    0.01003178367299898) - -0.0825 * t2_tmp * t5_tmp * t9_tmp *
    0.077027839799114317) + d20 * t11_tmp * 0.06771241001216606) + 0.0825 *
    t2_tmp * t8_tmp * t10_tmp * 0.16562614043137031) - d9 * t12_tmp *
    0.000471111038810923) + d9 * t13_tmp * 0.0062474344427746742) - d45 *
    0.01003178367299898) + d46 * 0.01003178367299898) - d47 *
    0.077027839799114317) - d14 * 0.077027839799114317) + d50 *
    0.077027839799114317) + d48 * 0.01003178367299898) + d65 *
    0.011508298004965129) + d52 * 0.0077038208929667978) + d54 *
    0.0078263252487517053) + d72 * 0.0011978834292821041) + d53 *
    0.01073500939031497) - d8 * 0.0011978834292821041) + d55 *
    0.01073500939031497) - d3 * t25 * 0.001765933827532306) + d37 * t12_tmp *
    0.0017587418349192239) - d57 * 0.00082043031824491353) + d37 * t13_tmp *
    0.00059693993396417282) + d58 * 0.00082043031824491353) + d59 *
    0.01073500939031497) + d23 * t12_tmp * 0.0017587418349192239) - d4 * t12_tmp
    * t13_tmp * 0.0023708937278747728) + d21 * t25 * 0.001765933827532306) + d23
    * t13_tmp * 0.00059693993396417282) - d62 * 0.01003178367299898) + d63 *
    0.077027839799114317) + d36 * t11_tmp * 0.06771241001216606) - d64 *
    0.077027839799114317) - d19 * 0.01003178367299898) + d66 *
    0.16562614043137031) - d38 * t12_tmp * 0.000471111038810923) + d38 * t13_tmp
    * 0.0062474344427746742) + d41 * t12_tmp * 0.01249486888554935) + d41 *
    t13_tmp * 0.000942222077621846) + d44 * t12_tmp * 0.0062474344427746742) +
    d44 * t13_tmp * 0.000471111038810923) - d68 * 0.01003178367299898) - d69 *
    0.077027839799114317) - d71 * 0.077027839799114317) + d70 *
    0.01003178367299898) + d45 * t11_tmp * 0.06771241001216606) - d46 * t11_tmp *
    0.06771241001216606) + d45 * t10_tmp * 0.16562614043137031) - d73 *
    0.16562614043137031) - d27 * t9_tmp * 0.06771241001216606) - d47 * t12_tmp *
    0.000471111038810923) - d14 * t12_tmp * 0.000471111038810923) + d47 *
    t13_tmp * 0.0062474344427746742) + 0.384 * t3_tmp * t7_tmp * t8_tmp *
    t13_tmp * 0.0062474344427746742) + 0.384 * t2_tmp * t6_tmp * t9_tmp *
    t12_tmp * 0.000471111038810923) - d78 * 0.16562614043137031) - d50 * t13_tmp
    * 0.0062474344427746742) + d28 * 0.0011978834292821041) - d79 *
    0.01073500939031497) - d65 * t12_tmp * 0.0017587418349192239) - d65 *
    t13_tmp * 0.00059693993396417282) - d80 * 0.00082043031824491353) + d82 *
    0.01073500939031497) - d83 * 0.0078263252487517053) - d53 * t12_tmp *
    0.0035174836698384491) - d3 * t12_tmp * t13_tmp * 0.0023708937278747728) +
    d54 * t25 * 0.001765933827532306) - d85 * 0.0078263252487517053) - d53 *
    t13_tmp * 0.0011938798679283461) - d55 * t12_tmp * 0.0035174836698384491) -
    d72 * t25 * 0.0023708937278747728) - d57 * t12_tmp * 0.00059693993396417282)
    - d55 * t13_tmp * 0.0011938798679283461) + d8 * t25 * 0.0023708937278747728)
    + d57 * t13_tmp * 0.0017587418349192239) + d58 * t12_tmp *
    0.00059693993396417282) - d58 * t13_tmp * 0.0017587418349192239) - d59 *
    t12_tmp * 0.0035174836698384491) + d21 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d59 * t13_tmp * 0.0011938798679283461) + d62 *
    t11_tmp * 0.06771241001216606) + d86 * 0.16562614043137031) + d51 * t9_tmp *
    0.06771241001216606) + d63 * t12_tmp * 0.000471111038810923) - d63 * t13_tmp
    * 0.0062474344427746742) + d87 * 0.16562614043137031) - d64 * t12_tmp *
    0.000471111038810923) + d64 * t13_tmp * 0.0062474344427746742) + d66 *
    t12_tmp * 0.0062474344427746742) + d74 * t12_tmp * 0.01249486888554935) +
    d66 * t13_tmp * 0.000471111038810923) - d76 * t12_tmp * 0.000471111038810923)
    + d74 * t13_tmp * 0.000942222077621846) + d76 * t13_tmp *
    0.0062474344427746742) + d77 * t12_tmp * 0.000471111038810923) - d77 *
    t13_tmp * 0.0062474344427746742) + d68 * t11_tmp * 0.06771241001216606) +
    d89 * 0.16562614043137031) - d60 * t9_tmp * 0.06771241001216606) - d69 *
    t12_tmp * 0.000471111038810923) + d69 * t13_tmp * 0.0062474344427746742) -
    d17 * t9_tmp * t10_tmp * 0.16562614043137031) - d238 * t4_tmp * t9_tmp *
    t12_tmp * 0.000471111038810923) + d238 * t4_tmp * t9_tmp * t13_tmp *
    0.0062474344427746742) + k_Bstack_hat_idx_1_tmp * t12_tmp *
    0.0062474344427746742) + k_Bstack_hat_idx_1_tmp * t13_tmp *
    0.000471111038810923) - 0.384 * t2_tmp * t6_tmp * t8_tmp * t10_tmp * t12_tmp
    * 0.0062474344427746742) - d73 * t13_tmp * 0.000471111038810923) - d78 *
    t12_tmp * 0.0062474344427746742) - d78 * t13_tmp * 0.000471111038810923) +
    d_Bstack_hat_idx_3_tmp * 0.0078263252487517053) + d79 * t12_tmp *
    0.0035174836698384491) + d79 * t13_tmp * 0.0011938798679283461) - d28 * t25 *
    0.0023708937278747728) - d80 * t12_tmp * 0.00059693993396417282) - d82 *
    t12_tmp * 0.0035174836698384491) + d80 * t13_tmp * 0.0017587418349192239) -
    d82 * t13_tmp * 0.0011938798679283461) - d83 * t25 * 0.001765933827532306) +
    d54 * t12_tmp * t13_tmp * 0.0023708937278747728) + d72 * t12_tmp * t13_tmp *
    0.001765933827532306) - d8 * t12_tmp * t13_tmp * 0.001765933827532306) - d85
    * t25 * 0.001765933827532306) - smax * t12_tmp * 0.000471111038810923) + d86
                       * t12_tmp * 0.0062474344427746742) + smax * t13_tmp *
                      0.0062474344427746742) + d86 * t13_tmp *
                     0.000471111038810923) + d87 * t12_tmp *
                    0.0062474344427746742) + d87 * t13_tmp *
                   0.000471111038810923) - s * t12_tmp * 0.01249486888554935) -
                 s * t13_tmp * 0.000942222077621846) - e_Bstack_hat_idx_3_tmp *
                t12_tmp * 0.01249486888554935) - e_Bstack_hat_idx_3_tmp *
               t13_tmp * 0.000942222077621846) + d89 * t12_tmp *
              0.0062474344427746742) + d89 * t13_tmp * 0.000471111038810923) -
            f_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) -
           f_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) +
          d_Bstack_hat_idx_3_tmp * t25 * 0.001765933827532306) + d28 * t12_tmp *
         t13_tmp * 0.001765933827532306) - d83 * t12_tmp * t13_tmp *
        0.0023708937278747728) - d85 * t12_tmp * t13_tmp * 0.0023708937278747728)
      + c_Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935) +
     c_Bstack_hat_idx_3_tmp * t13_tmp * 0.000942222077621846) +
    d_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp * 0.0023708937278747728;
  d8 = t4_tmp * t9_tmp;
  d17 = 0.384 * t4_tmp * t8_tmp;
  d21 = -0.0825 * t6_tmp * t7_tmp;
  d27 = 0.384 * t5_tmp * t7_tmp;
  d28 = 0.316 * t7_tmp * t8_tmp;
  d41 = 0.316 * t7_tmp * t9_tmp;
  d5 *= t9_tmp;
  d44 = d35 * t10_tmp;
  d51 = d7 * t20;
  d53 = d8 * t20;
  d54 = d21 * t8_tmp;
  d55 = d16 * t8_tmp;
  d16 *= t9_tmp;
  d57 = d21 * t9_tmp;
  d58 = d25 * t8_tmp;
  d25 *= t9_tmp;
  d59 = d27 * t8_tmp;
  d60 = d27 * t9_tmp;
  d66 = d28 * t10_tmp;
  d72 = 0.384 * t4_tmp * t9_tmp;
  d73 = d72 * t10_tmp;
  d74 = d81 * t20;
  d30 *= t9_tmp;
  d76 = d5 * t10_tmp;
  d77 = d84 * t10_tmp;
  d40 *= t9_tmp;
  d78 = d40 * t10_tmp;
  d79 = d54 * t10_tmp;
  d80 = d16 * t10_tmp;
  smax = d61 * t11_tmp * t9_tmp;
  Bstack_hat_idx_11_tmp_tmp = 0.088 * t4_tmp * t11_tmp * t9_tmp;
  s = Bstack_hat_idx_11_tmp_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = d25 * t10_tmp;
  f_Bstack_hat_idx_3_tmp = d59 * t10_tmp;
  d_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_7_tmp_tmp * t10_tmp;
  b_Bstack_hat_idx_11_tmp_tmp = Bstack_hat_idx_26 * t11_tmp;
  c_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_11_tmp_tmp * t10_tmp;
  k_Bstack_hat_idx_1_tmp = f_Bstack_hat_idx_1_tmp * t11_tmp;
  Bstack_hat_idx_11 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((d7 * -0.01152453637796355 + d35 * 0.0077038208929667978)
    - d8 * 0.011508298004965129) - d17 * 0.077027839799114317) + d28 *
    0.01003178367299898) + d72 * 0.01003178367299898) + d41 *
    0.077027839799114317) - d81 * 0.011508298004965129) - d5 *
    0.0077038208929667978) + d67 * 0.0011978834292821041) - d44 *
    0.00082043031824491353) - d51 * 0.0078263252487517053) + d7 * t25 *
    0.001765933827532306) + d53 * 0.01073500939031497) + d8 * t12_tmp *
    0.0017587418349192239) + d8 * t13_tmp * 0.00059693993396417282) + d55 *
    0.077027839799114317) + d54 * 0.01003178367299898) - d16 *
    0.01003178367299898) + d57 * 0.077027839799114317) - d58 *
    0.077027839799114317) + d25 * 0.01003178367299898) + d59 *
    0.01003178367299898) + d60 * 0.077027839799114317) - d28 * t11_tmp *
    0.06771241001216606) - d29 * t9_tmp * 0.06771241001216606) - d66 *
    0.16562614043137031) - d17 * t12_tmp * 0.000471111038810923) + d17 * t13_tmp
    * 0.0062474344427746742) - d73 * 0.16562614043137031) + d41 * t12_tmp *
    0.000471111038810923) - d41 * t13_tmp * 0.0062474344427746742) - d30 *
    0.0011978834292821041) + d74 * 0.01073500939031497) + d81 * t12_tmp *
    0.0017587418349192239) + d81 * t13_tmp * 0.00059693993396417282) + d76 *
    0.00082043031824491353) - d77 * 0.01073500939031497) - d78 *
    0.0078263252487517053) - d67 * t25 * 0.0023708937278747728) - d44 * t12_tmp *
    0.00059693993396417282) + d44 * t13_tmp * 0.0017587418349192239) + d7 *
    t12_tmp * t13_tmp * 0.0023708937278747728) - d51 * t25 *
    0.001765933827532306) - d53 * t12_tmp * 0.0035174836698384491) - d53 *
    t13_tmp * 0.0011938798679283461) - d54 * t11_tmp * 0.06771241001216606) +
    d49 * t9_tmp * 0.06771241001216606) + d55 * t12_tmp * 0.000471111038810923)
    - d55 * t13_tmp * 0.0062474344427746742) - d79 * 0.16562614043137031) + d80 *
    0.16562614043137031) + d57 * t12_tmp * 0.000471111038810923) -
    k_Bstack_hat_idx_1_tmp * t12_tmp * 0.000471111038810923) - d57 * t13_tmp *
    0.0062474344427746742) + k_Bstack_hat_idx_1_tmp * t13_tmp *
    0.0062474344427746742) - Bstack_hat_idx_7_tmp_tmp * t20 * t12_tmp *
    0.01249486888554935) - 0.088 * t6_tmp * t7_tmp * t20 * t13_tmp *
    0.000942222077621846) - 0.316 * t5_tmp * t4_tmp * t11_tmp * t9_tmp *
    0.06771241001216606) - 0.384 * t5_tmp * t7_tmp * t8_tmp * t11_tmp *
    0.06771241001216606) - d58 * t12_tmp * 0.000471111038810923) + d58 * t13_tmp
    * 0.0062474344427746742) - e_Bstack_hat_idx_3_tmp * 0.16562614043137031) -
    f_Bstack_hat_idx_3_tmp * 0.16562614043137031) + d60 * t12_tmp *
    0.000471111038810923) - d60 * t13_tmp * 0.0062474344427746742) - d66 *
    t12_tmp * 0.0062474344427746742) - d66 * t13_tmp * 0.000471111038810923) -
    d73 * t12_tmp * 0.0062474344427746742) - d73 * t13_tmp *
    0.000471111038810923) - d_Bstack_hat_idx_3_tmp * 0.0078263252487517053) -
    d74 * t12_tmp * 0.0035174836698384491) - d74 * t13_tmp *
    0.0011938798679283461) + d30 * t25 * 0.0023708937278747728) + d76 * t12_tmp *
    0.00059693993396417282) + d77 * t12_tmp * 0.0035174836698384491) - d76 *
    t13_tmp * 0.0017587418349192239) + d77 * t13_tmp * 0.0011938798679283461) +
    d67 * t12_tmp * t13_tmp * 0.001765933827532306) - d78 * t25 *
                       0.001765933827532306) - d51 * t12_tmp * t13_tmp *
                      0.0023708937278747728) + smax * t12_tmp *
                     0.000471111038810923) - d79 * t12_tmp *
                    0.0062474344427746742) + d80 * t12_tmp *
                   0.0062474344427746742) - smax * t13_tmp *
                  0.0062474344427746742) - d79 * t13_tmp * 0.000471111038810923)
                + d80 * t13_tmp * 0.000471111038810923) - s * t12_tmp *
               0.01249486888554935) - s * t13_tmp * 0.000942222077621846) -
             e_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) -
            f_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) -
           e_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) -
          f_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) -
         d_Bstack_hat_idx_3_tmp * t25 * 0.001765933827532306) - d30 * t12_tmp *
        t13_tmp * 0.001765933827532306) - d78 * t12_tmp * t13_tmp *
       0.0023708937278747728) - c_Bstack_hat_idx_3_tmp * t12_tmp *
      0.01249486888554935) - c_Bstack_hat_idx_3_tmp * t13_tmp *
     0.000942222077621846) - d_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp *
    0.0023708937278747728;
  d29 = t6_tmp * t9_tmp;
  d30 = t5_tmp * t20;
  d44 = -0.0825 * t5_tmp * t8_tmp;
  d49 = -0.0825 * t5_tmp * t9_tmp;
  Bstack_hat_idx_24 = 0.088 * t5_tmp * t20;
  d_Bstack_hat_idx_1_tmp = 0.0825 * t8_tmp * t10_tmp;
  Bstack_hat_idx_12_tmp = 0.384 * t6_tmp * t8_tmp;
  Bstack_hat_idx_18 = 0.384 * t6_tmp * t9_tmp;
  l_Bstack_hat_idx_1_tmp = Bstack_hat_idx_8_tmp_tmp * t10_tmp;
  i_Bstack_hat_idx_1_tmp = d42 * t20;
  smax = d11 * t9_tmp;
  s = d29 * t10_tmp;
  e_Bstack_hat_idx_3_tmp = d44 * t10_tmp;
  f_Bstack_hat_idx_3_tmp = 0.088 * t6_tmp * t11_tmp * t9_tmp;
  d_Bstack_hat_idx_3_tmp = Bstack_hat_idx_12_tmp * t10_tmp;
  c_Bstack_hat_idx_3_tmp = c_Bstack_hat_idx_8_tmp_tmp * t10_tmp;
  Bstack_hat_idx_25 = h_Bstack_hat_idx_1_tmp * t11_tmp;
  k_Bstack_hat_idx_1_tmp = Bstack_hat_idx_25 * t10_tmp;
  Bstack_hat_idx_12 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((t5_tmp *
    0.01152453637796355 - 0.0825 * t8_tmp * 0.01003178367299898) - 0.0825 *
    t9_tmp * 0.077027839799114317) - d42 * 0.011508298004965129) + d30 *
    0.0078263252487517053) - d29 * 0.0077038208929667978) - t5_tmp * t25 *
    0.001765933827532306) - d44 * 0.01003178367299898) - d49 *
    0.077027839799114317) + 0.0825 * t8_tmp * t11_tmp * 0.06771241001216606) +
    d_Bstack_hat_idx_1_tmp * 0.16562614043137031) - 0.0825 * t9_tmp * t12_tmp *
    0.000471111038810923) + 0.0825 * t9_tmp * t13_tmp * 0.0062474344427746742) +
    Bstack_hat_idx_12_tmp * 0.01003178367299898) + Bstack_hat_idx_18 *
    0.077027839799114317) + l_Bstack_hat_idx_1_tmp * 0.01073500939031497) - smax
    * 0.0011978834292821041) + i_Bstack_hat_idx_1_tmp * 0.01073500939031497) +
    d42 * t12_tmp * 0.0017587418349192239) + d42 * t13_tmp *
    0.00059693993396417282) + s * 0.00082043031824491353) - t5_tmp * t12_tmp *
    t13_tmp * 0.0023708937278747728) + d30 * t25 * 0.001765933827532306) + d44 *
    t11_tmp * 0.06771241001216606) + e_Bstack_hat_idx_3_tmp *
    0.16562614043137031) - d49 * t12_tmp * 0.000471111038810923) + d49 * t13_tmp
    * 0.0062474344427746742) + Bstack_hat_idx_24 * t12_tmp * 0.01249486888554935)
    + Bstack_hat_idx_24 * t13_tmp * 0.000942222077621846) +
    d_Bstack_hat_idx_1_tmp * t12_tmp * 0.0062474344427746742) +
    d_Bstack_hat_idx_1_tmp * t13_tmp * 0.000471111038810923) -
    Bstack_hat_idx_12_tmp * t11_tmp * 0.06771241001216606) -
    d_Bstack_hat_idx_3_tmp * 0.16562614043137031) + Bstack_hat_idx_18 * t12_tmp *
    0.000471111038810923) - Bstack_hat_idx_18 * t13_tmp * 0.0062474344427746742)
                       - c_Bstack_hat_idx_3_tmp * 0.0078263252487517053) -
                      l_Bstack_hat_idx_1_tmp * t12_tmp * 0.0035174836698384491)
                     - l_Bstack_hat_idx_1_tmp * t13_tmp * 0.0011938798679283461)
                    - i_Bstack_hat_idx_1_tmp * t12_tmp * 0.0035174836698384491)
                   - i_Bstack_hat_idx_1_tmp * t13_tmp * 0.0011938798679283461) +
                  smax * t25 * 0.0023708937278747728) + s * t12_tmp *
                 0.00059693993396417282) - s * t13_tmp * 0.0017587418349192239)
               + d30 * t12_tmp * t13_tmp * 0.0023708937278747728) +
              e_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) +
             e_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) +
            f_Bstack_hat_idx_3_tmp * t12_tmp * 0.000471111038810923) -
           f_Bstack_hat_idx_3_tmp * t13_tmp * 0.0062474344427746742) -
          d_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) -
         d_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) -
        c_Bstack_hat_idx_3_tmp * t25 * 0.001765933827532306) - smax * t12_tmp *
       t13_tmp * 0.001765933827532306) - k_Bstack_hat_idx_1_tmp * t12_tmp *
      0.01249486888554935) - k_Bstack_hat_idx_1_tmp * t13_tmp *
     0.000942222077621846) - c_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp *
    0.0023708937278747728;
  Bstack_hat_idx_13_tmp = t8_tmp * t11_tmp;
  smax = t8_tmp * t10_tmp;
  s = t9_tmp * t20;
  e_Bstack_hat_idx_3_tmp = 0.088 * t8_tmp * t11_tmp;
  f_Bstack_hat_idx_3_tmp = 0.384 * t9_tmp * t10_tmp;
  Bstack_hat_idx_13_tmp_tmp = t11_tmp * t9_tmp;
  d_Bstack_hat_idx_3_tmp = Bstack_hat_idx_13_tmp_tmp * t10_tmp;
  b_Bstack_hat_idx_13_tmp_tmp = 0.088 * t11_tmp * t9_tmp;
  c_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_13_tmp_tmp * t10_tmp;
  Bstack_hat_idx_13 = ((((((((((((((((((((((((((t8_tmp * -0.0077038208929667978
    + t9_tmp * 0.011508298004965129) + 0.384 * t8_tmp * 0.077027839799114317) -
    0.384 * t9_tmp * 0.01003178367299898) - Bstack_hat_idx_13_tmp *
    0.0011978834292821041) + smax * 0.00082043031824491353) - s *
    0.01073500939031497) - t9_tmp * t12_tmp * 0.0017587418349192239) - t9_tmp *
    t13_tmp * 0.00059693993396417282) + 0.384 * t11_tmp * t9_tmp *
    0.06771241001216606) + 0.384 * t8_tmp * t12_tmp * 0.000471111038810923) -
    0.384 * t8_tmp * t13_tmp * 0.0062474344427746742) + f_Bstack_hat_idx_3_tmp *
    0.16562614043137031) + d_Bstack_hat_idx_3_tmp * 0.0078263252487517053) +
    Bstack_hat_idx_13_tmp * t25 * 0.0023708937278747728) + smax * t12_tmp *
    0.00059693993396417282) - smax * t13_tmp * 0.0017587418349192239) + s *
    t12_tmp * 0.0035174836698384491) + s * t13_tmp * 0.0011938798679283461) +
    e_Bstack_hat_idx_3_tmp * t12_tmp * 0.000471111038810923) -
    e_Bstack_hat_idx_3_tmp * t13_tmp * 0.0062474344427746742) +
    f_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) +
    f_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) -
    Bstack_hat_idx_13_tmp * t12_tmp * t13_tmp * 0.001765933827532306) +
    d_Bstack_hat_idx_3_tmp * t25 * 0.001765933827532306) +
                        c_Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935)
                       + c_Bstack_hat_idx_3_tmp * t13_tmp * 0.000942222077621846)
    + d_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp * 0.0023708937278747728;
  d4 *= t10_tmp;
  d11 = d12 * t11_tmp;
  d12 *= t10_tmp;
  d30 = 0.0825 * t2_tmp * t11_tmp * t9_tmp;
  d9 *= t10_tmp;
  d51 = d56 * t9_tmp;
  d3 *= t10_tmp;
  d37 *= t10_tmp;
  d23 *= t10_tmp;
  d53 = d18 * t10_tmp;
  d56 = d117 * t11_tmp * t9_tmp;
  d66 = d24 * t10_tmp;
  d34 = d34 * t11_tmp * t9_tmp;
  d67 = d14 * t11_tmp;
  d31 = d31 * t11_tmp * t9_tmp;
  d65 *= t10_tmp;
  d73 = d75 * t12_tmp;
  d18 *= t11_tmp;
  d38 *= t10_tmp;
  d24 *= t11_tmp;
  d47 *= t10_tmp;
  d14 *= t10_tmp;
  d50 *= t10_tmp;
  d74 = d32 * t12_tmp;
  d76 = d22 * t12_tmp;
  k_Bstack_hat_idx_1_tmp = b_Bstack_hat_idx_6_tmp_tmp * t10_tmp;
  d_Bstack_hat_idx_3_tmp = d13 * t9_tmp * t10_tmp;
  c_Bstack_hat_idx_3_tmp = d63 * t11_tmp;
  s = d_Bstack_hat_idx_6_tmp_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = -0.0825 * t3_tmp * t4_tmp * t6_tmp * t11_tmp * t9_tmp;
  f_Bstack_hat_idx_3_tmp = d69 * t11_tmp;
  smax = d270 * t11_tmp * t9_tmp;
  g_Bstack_hat_idx_1_tmp = d65 * t12_tmp;
  e_Bstack_hat_idx_1_tmp = d69 * t10_tmp;
  Bstack_hat_idx_1_tmp_tmp_tmp = d71 * t10_tmp;
  Bstack_hat_idx_1_tmp = d63 * t10_tmp;
  Bstack_hat_idx_21 = d52 * t12_tmp;
  j_Bstack_hat_idx_1_tmp = d88 * t12_tmp;
  Bstack_hat_idx_15 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((d75 * -0.0011978834292821041 - d32 *
    0.0232860772826712) + d4 * 0.00082043031824491353) + d22 *
    0.0232860772826712) - d11 * 0.06771241001216606) - d12 * 0.16562614043137031)
    - d30 * 0.16562614043137031) + d9 * 0.06771241001216606) - d52 *
    0.0232860772826712) - d88 * 0.0011978834292821041) - d2 * t8_tmp * t11_tmp *
    0.00082043031824491353) + d6 * t6_tmp * t10_tmp * 0.00082043031824491353) -
    d37 * 0.0011978834292821041) - d43 * 0.00082043031824491353) + d75 * t25 *
    0.0023708937278747728) + d4 * t12_tmp * 0.00059693993396417282) - d23 *
    0.0011978834292821041) - d4 * t13_tmp * 0.0017587418349192239) - d32 * t25 *
    0.001765933827532306) + d22 * t25 * 0.001765933827532306) - d18 *
    0.06771241001216606) - d53 * 0.16562614043137031) - d56 *
    0.16562614043137031) + d38 * 0.06771241001216606) + Bstack_hat_idx_6_tmp_tmp
    * t12_tmp * 0.000471111038810923) - Bstack_hat_idx_6_tmp_tmp * t13_tmp *
    0.0062474344427746742) - c_Bstack_hat_idx_6_tmp_tmp * t12_tmp *
    0.01249486888554935) - c_Bstack_hat_idx_6_tmp_tmp * t13_tmp *
    0.000942222077621846) + d51 * t12_tmp * 0.01249486888554935) - d12 * t12_tmp
    * 0.0062474344427746742) + d51 * t13_tmp * 0.000942222077621846) - d30 *
    t12_tmp * 0.0062474344427746742) - d12 * t13_tmp * 0.000471111038810923) -
    d30 * t13_tmp * 0.000471111038810923) - d24 * 0.06771241001216606) - d66 *
    0.16562614043137031) - d34 * 0.16562614043137031) - d67 *
    0.16562614043137031) + d31 * 0.16562614043137031) + d47 *
    0.06771241001216606) + d14 * 0.06771241001216606) - d50 *
    0.06771241001216606) + e_Bstack_hat_idx_6_tmp_tmp * 0.00082043031824491353)
    + d65 * 0.0011978834292821041) - d52 * t25 * 0.001765933827532306) + d88 *
    t25 * 0.0023708937278747728) - d90 * t12_tmp * 0.00059693993396417282) + d3 *
    t12_tmp * 0.00059693993396417282) + d90 * t13_tmp * 0.0017587418349192239) -
    d3 * t13_tmp * 0.0017587418349192239) - d43 * t12_tmp *
    0.00059693993396417282) - d73 * t13_tmp * 0.001765933827532306) + d37 * t25 *
    0.0023708937278747728) + d43 * t13_tmp * 0.0017587418349192239) - d74 *
    t13_tmp * 0.0023708937278747728) + d76 * t13_tmp * 0.0023708937278747728) +
    d23 * t25 * 0.0023708937278747728) + c_Bstack_hat_idx_3_tmp *
    0.16562614043137031) - d33 * t11_tmp * t9_tmp * 0.16562614043137031) -
    Bstack_hat_idx_1_tmp * 0.06771241001216606) + d64 * t10_tmp *
    0.06771241001216606) - Bstack_hat_idx_19 * t9_tmp * t12_tmp *
    0.01249486888554935) + d207 * t6_tmp * t11_tmp * t12_tmp *
    0.000471111038810923) - 0.0825 * t3_tmp * t5_tmp * t7_tmp * t10_tmp *
    t12_tmp * 0.0062474344427746742) - d158 * t5_tmp * t4_tmp * t9_tmp * t13_tmp
    * 0.000942222077621846) - 0.088 * t3_tmp * t4_tmp * t6_tmp * t11_tmp *
    t13_tmp * 0.0062474344427746742) - d53 * t13_tmp * 0.000471111038810923) -
    d56 * t12_tmp * 0.0062474344427746742) - d56 * t13_tmp *
    0.000471111038810923) + k_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000471111038810923) - k_Bstack_hat_idx_1_tmp * t13_tmp *
    0.0062474344427746742) + d_Bstack_hat_idx_3_tmp * t12_tmp *
    0.000471111038810923) - d_Bstack_hat_idx_3_tmp * t13_tmp *
    0.0062474344427746742) - f_Bstack_hat_idx_3_tmp * 0.16562614043137031) -
    smax * 0.16562614043137031) + e_Bstack_hat_idx_1_tmp * 0.06771241001216606)
    + Bstack_hat_idx_1_tmp_tmp_tmp * 0.06771241001216606) - d66 * t12_tmp *
    0.0062474344427746742) - d34 * t12_tmp * 0.0062474344427746742) - d67 *
    t12_tmp * 0.0062474344427746742) - d66 * t13_tmp * 0.000471111038810923) -
    d34 * t13_tmp * 0.000471111038810923) - d67 * t13_tmp * 0.000471111038810923)
                       + d31 * t12_tmp * 0.0062474344427746742) + d31 * t13_tmp *
                      0.000471111038810923) + e_Bstack_hat_idx_6_tmp_tmp *
                     t12_tmp * 0.00059693993396417282) -
                    e_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0017587418349192239)
                   - d65 * t25 * 0.0023708937278747728) - Bstack_hat_idx_21 *
                  t13_tmp * 0.0023708937278747728) - j_Bstack_hat_idx_1_tmp *
                 t13_tmp * 0.001765933827532306) - d37 * t12_tmp * t13_tmp *
                0.001765933827532306) - d23 * t12_tmp * t13_tmp *
               0.001765933827532306) + c_Bstack_hat_idx_3_tmp * t12_tmp *
              0.0062474344427746742) + c_Bstack_hat_idx_3_tmp * t13_tmp *
             0.000471111038810923) - s * t12_tmp * 0.000471111038810923) -
           e_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) + s *
          t13_tmp * 0.0062474344427746742) - e_Bstack_hat_idx_3_tmp * t13_tmp *
         0.000471111038810923) - f_Bstack_hat_idx_3_tmp * t12_tmp *
        0.0062474344427746742) - f_Bstack_hat_idx_3_tmp * t13_tmp *
       0.000471111038810923) - smax * t12_tmp * 0.0062474344427746742) - smax *
     t13_tmp * 0.000471111038810923) + g_Bstack_hat_idx_1_tmp * t13_tmp *
    0.001765933827532306;
  d6 = -0.0825 * t4_tmp * t10_tmp;
  d7 *= t10_tmp;
  d8 *= t10_tmp;
  d12 = d15 * t10_tmp;
  d13 = d26 * t10_tmp;
  d30 = d17 * t11_tmp;
  d31 = 0.316 * t7_tmp * t11_tmp * t9_tmp;
  d33 = -0.0825 * t4_tmp * t11_tmp;
  d15 *= t11_tmp;
  d26 *= t11_tmp;
  d17 *= t10_tmp;
  d34 = d41 * t10_tmp;
  d37 = d81 * t10_tmp;
  d_Bstack_hat_idx_3_tmp = d61 * t9_tmp;
  c_Bstack_hat_idx_3_tmp = 0.088 * t4_tmp * t9_tmp * t10_tmp;
  k_Bstack_hat_idx_1_tmp = d55 * t11_tmp;
  f_Bstack_hat_idx_3_tmp = d21 * t11_tmp * t9_tmp;
  s = Bstack_hat_idx_26 * t10_tmp;
  e_Bstack_hat_idx_3_tmp = d58 * t11_tmp;
  smax = d27 * t11_tmp * t9_tmp;
  c_Bstack_hat_idx_6_tmp_tmp = d35 * t12_tmp;
  Bstack_hat_idx_23 = d5 * t12_tmp;
  b_Bstack_hat_idx_1_tmp = d84 * t12_tmp;
  c_Bstack_hat_idx_1_tmp = d8 * t12_tmp;
  Bstack_hat_idx_22 = d37 * t12_tmp;
  Bstack_hat_idx_6_tmp_tmp = d55 * t10_tmp;
  Bstack_hat_idx_26 = d57 * t10_tmp;
  d_Bstack_hat_idx_6_tmp_tmp = d58 * t10_tmp;
  b_Bstack_hat_idx_6_tmp_tmp = d60 * t10_tmp;
  Bstack_hat_idx_16 =
    ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d35 *
    -0.0232860772826712 - d33 * 0.06771241001216606) - d6 * 0.16562614043137031)
    + d5 * 0.0232860772826712) + d84 * 0.0011978834292821041) - d7 *
    0.00082043031824491353) - d40 * 0.00082043031824491353) - d8 *
    0.0011978834292821041) - d35 * t25 * 0.001765933827532306) - d15 *
    0.06771241001216606) - d12 * 0.16562614043137031) - f_Bstack_hat_idx_1_tmp *
    t12_tmp * 0.01249486888554935) - f_Bstack_hat_idx_1_tmp * t13_tmp *
    0.000942222077621846) - d6 * t12_tmp * 0.0062474344427746742) - d6 * t13_tmp
    * 0.000471111038810923) - d26 * 0.06771241001216606) - d13 *
    0.16562614043137031) - d30 * 0.16562614043137031) + d17 *
    0.06771241001216606) + d31 * 0.16562614043137031) - d34 *
    0.06771241001216606) - b_Bstack_hat_idx_7_tmp_tmp * 0.00082043031824491353)
    - d37 * 0.0011978834292821041) + d5 * t25 * 0.001765933827532306) - d84 *
    t25 * 0.0023708937278747728) - d7 * t12_tmp * 0.00059693993396417282) - d40 *
    t12_tmp * 0.00059693993396417282) + d7 * t13_tmp * 0.0017587418349192239) +
    t4_tmp * t11_tmp * t9_tmp * t13_tmp * 0.0017587418349192239) -
    c_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0023708937278747728) + d8 * t25 *
    0.0023708937278747728) + k_Bstack_hat_idx_1_tmp * 0.16562614043137031) -
    Bstack_hat_idx_6_tmp_tmp * 0.06771241001216606) + f_Bstack_hat_idx_3_tmp *
    0.16562614043137031) - d12 * t12_tmp * 0.0062474344427746742) - d12 *
    t13_tmp * 0.000471111038810923) - Bstack_hat_idx_26 * 0.06771241001216606) +
    d_Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935) -
    b_Bstack_hat_idx_3_tmp * t12_tmp * 0.000471111038810923) +
    d_Bstack_hat_idx_3_tmp * t13_tmp * 0.000942222077621846) +
    b_Bstack_hat_idx_3_tmp * t13_tmp * 0.0062474344427746742) +
    c_Bstack_hat_idx_3_tmp * t12_tmp * 0.000471111038810923) -
    c_Bstack_hat_idx_3_tmp * t13_tmp * 0.0062474344427746742) -
    e_Bstack_hat_idx_3_tmp * 0.16562614043137031) + d_Bstack_hat_idx_6_tmp_tmp *
    0.06771241001216606) + smax * 0.16562614043137031) -
    b_Bstack_hat_idx_6_tmp_tmp * 0.06771241001216606) - d13 * t12_tmp *
    0.0062474344427746742) - d30 * t12_tmp * 0.0062474344427746742) - d13 *
    t13_tmp * 0.000471111038810923) - d30 * t13_tmp * 0.000471111038810923) +
                      d31 * t12_tmp * 0.0062474344427746742) + d31 * t13_tmp *
                     0.000471111038810923) - b_Bstack_hat_idx_7_tmp_tmp *
                    t12_tmp * 0.00059693993396417282) +
                   b_Bstack_hat_idx_7_tmp_tmp * t13_tmp * 0.0017587418349192239)
                  + d37 * t25 * 0.0023708937278747728) + Bstack_hat_idx_23 *
                 t13_tmp * 0.0023708937278747728) + b_Bstack_hat_idx_1_tmp *
                t13_tmp * 0.001765933827532306) - c_Bstack_hat_idx_1_tmp *
               t13_tmp * 0.001765933827532306) + k_Bstack_hat_idx_1_tmp *
              t12_tmp * 0.0062474344427746742) + k_Bstack_hat_idx_1_tmp *
             t13_tmp * 0.000471111038810923) + s * t12_tmp *
            0.000471111038810923) + f_Bstack_hat_idx_3_tmp * t12_tmp *
           0.0062474344427746742) - s * t13_tmp * 0.0062474344427746742) +
         f_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) -
        e_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) -
       e_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) + smax * t12_tmp
      * 0.0062474344427746742) + smax * t13_tmp * 0.000471111038810923) -
    Bstack_hat_idx_22 * t13_tmp * 0.001765933827532306;
  Bstack_hat_idx_3_tmp = t5_tmp * t10_tmp;
  d_Bstack_hat_idx_3_tmp = 0.088 * t6_tmp * t9_tmp;
  c_Bstack_hat_idx_3_tmp = 0.0825 * t11_tmp * t9_tmp;
  b_Bstack_hat_idx_3_tmp = d42 * t10_tmp;
  f_Bstack_hat_idx_3_tmp = -0.0825 * t5_tmp * t11_tmp * t9_tmp;
  smax = h_Bstack_hat_idx_1_tmp * t10_tmp;
  s = 0.384 * t6_tmp * t11_tmp * t9_tmp;
  l_Bstack_hat_idx_1_tmp = Bstack_hat_idx_8_tmp_tmp * t12_tmp;
  i_Bstack_hat_idx_1_tmp = d29 * t12_tmp;
  h_Bstack_hat_idx_1_tmp = 0.0825 * t9_tmp * t10_tmp;
  f_Bstack_hat_idx_1_tmp = b_Bstack_hat_idx_3_tmp * t12_tmp;
  d_Bstack_hat_idx_1_tmp = d49 * t10_tmp;
  Bstack_hat_idx_24 = Bstack_hat_idx_18 * t10_tmp;
  Bstack_hat_idx_17 = (((((((((((((((((((((((((((((((Bstack_hat_idx_8_tmp_tmp *
    -0.0011978834292821041 + Bstack_hat_idx_3_tmp * 0.00082043031824491353) +
    d29 * 0.0232860772826712) - c_Bstack_hat_idx_3_tmp * 0.16562614043137031) +
    h_Bstack_hat_idx_1_tmp * 0.06771241001216606) - c_Bstack_hat_idx_8_tmp_tmp *
    0.00082043031824491353) - b_Bstack_hat_idx_3_tmp * 0.0011978834292821041) +
    Bstack_hat_idx_8_tmp_tmp * t25 * 0.0023708937278747728) +
    Bstack_hat_idx_3_tmp * t12_tmp * 0.00059693993396417282) -
    Bstack_hat_idx_3_tmp * t13_tmp * 0.0017587418349192239) + d29 * t25 *
    0.001765933827532306) - f_Bstack_hat_idx_3_tmp * 0.16562614043137031) +
    d_Bstack_hat_idx_1_tmp * 0.06771241001216606) + b_Bstack_hat_idx_8_tmp_tmp *
    t12_tmp * 0.000471111038810923) - b_Bstack_hat_idx_8_tmp_tmp * t13_tmp *
    0.0062474344427746742) + d_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + d_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) - c_Bstack_hat_idx_3_tmp * t12_tmp *
    0.0062474344427746742) - c_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000471111038810923) + s * 0.16562614043137031) - Bstack_hat_idx_24 *
    0.06771241001216606) - c_Bstack_hat_idx_8_tmp_tmp * t12_tmp *
    0.00059693993396417282) + c_Bstack_hat_idx_8_tmp_tmp * t13_tmp *
    0.0017587418349192239) - l_Bstack_hat_idx_1_tmp * t13_tmp *
    0.001765933827532306) + b_Bstack_hat_idx_3_tmp * t25 * 0.0023708937278747728)
    + i_Bstack_hat_idx_1_tmp * t13_tmp * 0.0023708937278747728) -
    f_Bstack_hat_idx_3_tmp * t12_tmp * 0.0062474344427746742) -
    f_Bstack_hat_idx_3_tmp * t13_tmp * 0.000471111038810923) + smax * t12_tmp *
    0.000471111038810923) - smax * t13_tmp * 0.0062474344427746742) + s *
                        t12_tmp * 0.0062474344427746742) + s * t13_tmp *
                       0.000471111038810923) - f_Bstack_hat_idx_1_tmp * t13_tmp *
    0.001765933827532306;
  f_Bstack_hat_idx_3_tmp = t9_tmp * t10_tmp;
  smax = 0.088 * t9_tmp * t10_tmp;
  s = 0.384 * t8_tmp * t11_tmp;
  d_Bstack_hat_idx_3_tmp = t8_tmp * t12_tmp;
  c_Bstack_hat_idx_3_tmp = f_Bstack_hat_idx_3_tmp * t12_tmp;
  k_Bstack_hat_idx_1_tmp = 0.384 * t8_tmp * t10_tmp;
  Bstack_hat_idx_18 = (((((((((((((((((((t8_tmp * 0.0232860772826712 + -0.0825 *
    t11_tmp * 0.06771241001216606) + -0.0825 * t10_tmp * 0.16562614043137031) +
    Bstack_hat_idx_13_tmp_tmp * 0.00082043031824491353) + f_Bstack_hat_idx_3_tmp
    * 0.0011978834292821041) + t8_tmp * t25 * 0.001765933827532306) + 0.088 *
    t8_tmp * t12_tmp * 0.01249486888554935) + 0.088 * t8_tmp * t13_tmp *
    0.000942222077621846) + -0.0825 * t10_tmp * t12_tmp * 0.0062474344427746742)
    + -0.0825 * t10_tmp * t13_tmp * 0.000471111038810923) + s *
    0.16562614043137031) - k_Bstack_hat_idx_1_tmp * 0.06771241001216606) +
    Bstack_hat_idx_13_tmp_tmp * t12_tmp * 0.00059693993396417282) -
    Bstack_hat_idx_13_tmp_tmp * t13_tmp * 0.0017587418349192239) +
    d_Bstack_hat_idx_3_tmp * t13_tmp * 0.0023708937278747728) -
    f_Bstack_hat_idx_3_tmp * t25 * 0.0023708937278747728) - smax * t12_tmp *
    0.000471111038810923) + smax * t13_tmp * 0.0062474344427746742) + s *
                        t12_tmp * 0.0062474344427746742) + s * t13_tmp *
                       0.000471111038810923) + c_Bstack_hat_idx_3_tmp * t13_tmp *
    0.001765933827532306;
  e_Bstack_hat_idx_3_tmp = t11_tmp * t12_tmp;
  Bstack_hat_idx_19 = ((((((t11_tmp * -0.0011978834292821041 + t10_tmp *
    0.00082043031824491353) + t11_tmp * t25 * 0.0023708937278747728) + t10_tmp *
    t12_tmp * 0.00059693993396417282) - t10_tmp * t13_tmp *
    0.0017587418349192239) + 0.088 * t11_tmp * t12_tmp * 0.000471111038810923) -
                       0.088 * t11_tmp * t13_tmp * 0.0062474344427746742) -
    e_Bstack_hat_idx_3_tmp * t13_tmp * 0.001765933827532306;
  d6 = d201 * t10_tmp;
  smax = Bstack_hat_idx_6_tmp * t10_tmp;
  s = -0.0825 * t3_tmp * t4_tmp * t6_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_21 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d4 *
    -0.0012722430112630651 - d20 * t12_tmp * 0.0062474344427746742) - d20 *
    t13_tmp * 0.000471111038810923) + d90 * 0.0012722430112630651) - d3 *
    0.0012722430112630651) + d73 * 0.0017587418349192239) + d43 *
    0.0012722430112630651) + d75 * t13_tmp * 0.00059693993396417282) + d74 *
    0.00059693993396417282) - d32 * t13_tmp * 0.0017587418349192239) - d76 *
    0.00059693993396417282) + d22 * t13_tmp * 0.0017587418349192239) - d36 *
    t12_tmp * 0.0062474344427746742) - d36 * t13_tmp * 0.000471111038810923) -
    d11 * t12_tmp * 0.000471111038810923) + d11 * t13_tmp *
    0.0062474344427746742) - d6 * t12_tmp * 0.0062474344427746742) - d6 *
    t13_tmp * 0.000471111038810923) + d9 * t12_tmp * 0.000471111038810923) - d9 *
    t13_tmp * 0.0062474344427746742) - d45 * t12_tmp * 0.0062474344427746742) -
    d45 * t13_tmp * 0.000471111038810923) + d46 * t12_tmp *
    0.0062474344427746742) + d46 * t13_tmp * 0.000471111038810923) + d48 *
    t12_tmp * 0.0062474344427746742) + d48 * t13_tmp * 0.000471111038810923) -
    e_Bstack_hat_idx_6_tmp_tmp * 0.0012722430112630651) + Bstack_hat_idx_21 *
    0.00059693993396417282) + j_Bstack_hat_idx_1_tmp * 0.0017587418349192239) -
    d52 * t13_tmp * 0.0017587418349192239) + d88 * t13_tmp *
    0.00059693993396417282) + d2 * t8_tmp * t10_tmp * t12_tmp *
    0.0017587418349192239) + d2 * t8_tmp * t10_tmp * t13_tmp *
    0.00059693993396417282) + t3_tmp * t7_tmp * t9_tmp * t10_tmp * t12_tmp *
    0.0017587418349192239) + d23 * t13_tmp * 0.00059693993396417282) - -0.0825 *
    t3_tmp * t4_tmp * t6_tmp * t8_tmp * t12_tmp * 0.0062474344427746742) - d18 *
    t12_tmp * 0.000471111038810923) - d62 * t13_tmp * 0.000471111038810923) +
    d18 * t13_tmp * 0.0062474344427746742) - d19 * t12_tmp *
    0.0062474344427746742) - d19 * t13_tmp * 0.000471111038810923) +
    Bstack_hat_idx_10_tmp_tmp * t12_tmp * 0.0062474344427746742) - smax *
    t12_tmp * 0.0062474344427746742) + Bstack_hat_idx_10_tmp_tmp * t13_tmp *
    0.000471111038810923) - smax * t13_tmp * 0.000471111038810923) + d38 *
    t12_tmp * 0.000471111038810923) - d38 * t13_tmp * 0.0062474344427746742) +
    b_Bstack_hat_idx_10_tmp_tmp * t12_tmp * 0.0062474344427746742) +
    b_Bstack_hat_idx_10_tmp_tmp * t13_tmp * 0.000471111038810923) - d68 *
    t12_tmp * 0.0062474344427746742) - d68 * t13_tmp * 0.000471111038810923) +
    d70 * t12_tmp * 0.0062474344427746742) - d24 * t12_tmp *
    0.000471111038810923) + d70 * t13_tmp * 0.000471111038810923) + d24 *
                      t13_tmp * 0.0062474344427746742) + d47 * t12_tmp *
                     0.000471111038810923) + d14 * t12_tmp *
                    0.000471111038810923) - d47 * t13_tmp *
                   0.0062474344427746742) - d14 * t13_tmp *
                  0.0062474344427746742) - d50 * t12_tmp * 0.000471111038810923)
                + d50 * t13_tmp * 0.0062474344427746742) -
               g_Bstack_hat_idx_1_tmp * 0.0017587418349192239) - d65 * t13_tmp *
              0.00059693993396417282) - c_Bstack_hat_idx_10_tmp_tmp * t12_tmp *
             0.0062474344427746742) - c_Bstack_hat_idx_10_tmp_tmp * t13_tmp *
            0.000471111038810923) - Bstack_hat_idx_1_tmp * t12_tmp *
           0.000471111038810923) + Bstack_hat_idx_1_tmp * t13_tmp *
          0.0062474344427746742) + s * t12_tmp * 0.000471111038810923) - s *
        t13_tmp * 0.0062474344427746742) + e_Bstack_hat_idx_1_tmp * t12_tmp *
       0.000471111038810923) - e_Bstack_hat_idx_1_tmp * t13_tmp *
      0.0062474344427746742) + Bstack_hat_idx_1_tmp_tmp_tmp * t12_tmp *
     0.000471111038810923) - Bstack_hat_idx_1_tmp_tmp_tmp * t13_tmp *
    0.0062474344427746742;
  smax = Bstack_hat_idx_7_tmp_tmp * t10_tmp;
  Bstack_hat_idx_22 = (((((((((((((((((((((((((((((((((((((((((((((((d7 *
    0.0012722430112630651 + d40 * 0.0012722430112630651) +
    c_Bstack_hat_idx_6_tmp_tmp * 0.00059693993396417282) - d35 * t13_tmp *
    0.0017587418349192239) - d33 * t12_tmp * 0.000471111038810923) + d33 *
    t13_tmp * 0.0062474344427746742) + d28 * t12_tmp * 0.0062474344427746742) +
    d28 * t13_tmp * 0.000471111038810923) + d72 * t12_tmp *
    0.0062474344427746742) + d72 * t13_tmp * 0.000471111038810923) +
    b_Bstack_hat_idx_7_tmp_tmp * 0.0012722430112630651) - Bstack_hat_idx_23 *
    0.00059693993396417282) - b_Bstack_hat_idx_1_tmp * 0.0017587418349192239) +
    d5 * t13_tmp * 0.0017587418349192239) - d84 * t13_tmp *
    0.00059693993396417282) + c_Bstack_hat_idx_1_tmp * 0.0017587418349192239) +
    d8 * t13_tmp * 0.00059693993396417282) - d15 * t12_tmp *
    0.000471111038810923) + d15 * t13_tmp * 0.0062474344427746742) + d54 *
    t12_tmp * 0.0062474344427746742) - d16 * t12_tmp * 0.0062474344427746742) +
    d54 * t13_tmp * 0.000471111038810923) - d16 * t13_tmp * 0.000471111038810923)
    + smax * t12_tmp * 0.0062474344427746742) + Bstack_hat_idx_11_tmp_tmp *
    t12_tmp * 0.0062474344427746742) + smax * t13_tmp * 0.000471111038810923) +
    Bstack_hat_idx_11_tmp_tmp * t13_tmp * 0.000471111038810923) + d25 * t12_tmp *
    0.0062474344427746742) - d26 * t12_tmp * 0.000471111038810923) + d59 *
    t12_tmp * 0.0062474344427746742) + d25 * t13_tmp * 0.000471111038810923) +
    d26 * t13_tmp * 0.0062474344427746742) + d59 * t13_tmp *
    0.000471111038810923) + d17 * t12_tmp * 0.000471111038810923) - d17 *
    t13_tmp * 0.0062474344427746742) - d34 * t12_tmp * 0.000471111038810923) +
    d34 * t13_tmp * 0.0062474344427746742) + Bstack_hat_idx_22 *
    0.0017587418349192239) + d37 * t13_tmp * 0.00059693993396417282) +
    b_Bstack_hat_idx_11_tmp_tmp * t12_tmp * 0.0062474344427746742) -
    Bstack_hat_idx_6_tmp_tmp * t12_tmp * 0.000471111038810923) +
    b_Bstack_hat_idx_11_tmp_tmp * t13_tmp * 0.000471111038810923) +
    Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0062474344427746742) -
    Bstack_hat_idx_26 * t12_tmp * 0.000471111038810923) + Bstack_hat_idx_26 *
    t13_tmp * 0.0062474344427746742) + d_Bstack_hat_idx_6_tmp_tmp * t12_tmp *
    0.000471111038810923) - d_Bstack_hat_idx_6_tmp_tmp * t13_tmp *
                        0.0062474344427746742) - b_Bstack_hat_idx_6_tmp_tmp *
                       t12_tmp * 0.000471111038810923) +
    b_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0062474344427746742;
  smax = 0.088 * t5_tmp * t10_tmp;
  Bstack_hat_idx_23 = ((((((((((((((((((((((Bstack_hat_idx_3_tmp *
    -0.0012722430112630651 - 0.0825 * t8_tmp * t12_tmp * 0.0062474344427746742)
    - 0.0825 * t8_tmp * t13_tmp * 0.000471111038810923) +
    c_Bstack_hat_idx_8_tmp_tmp * 0.0012722430112630651) + l_Bstack_hat_idx_1_tmp
    * 0.0017587418349192239) + Bstack_hat_idx_8_tmp_tmp * t13_tmp *
    0.00059693993396417282) - i_Bstack_hat_idx_1_tmp * 0.00059693993396417282) +
    d29 * t13_tmp * 0.0017587418349192239) - d44 * t12_tmp *
    0.0062474344427746742) - d44 * t13_tmp * 0.000471111038810923) - smax *
    t12_tmp * 0.0062474344427746742) - smax * t13_tmp * 0.000471111038810923) +
    h_Bstack_hat_idx_1_tmp * t12_tmp * 0.000471111038810923) -
    h_Bstack_hat_idx_1_tmp * t13_tmp * 0.0062474344427746742) +
    Bstack_hat_idx_12_tmp * t12_tmp * 0.0062474344427746742) +
    Bstack_hat_idx_12_tmp * t13_tmp * 0.000471111038810923) +
    f_Bstack_hat_idx_1_tmp * 0.0017587418349192239) + b_Bstack_hat_idx_3_tmp *
    t13_tmp * 0.00059693993396417282) + Bstack_hat_idx_25 * t12_tmp *
    0.0062474344427746742) + Bstack_hat_idx_25 * t13_tmp * 0.000471111038810923)
    + d_Bstack_hat_idx_1_tmp * t12_tmp * 0.000471111038810923) -
                        d_Bstack_hat_idx_1_tmp * t13_tmp * 0.0062474344427746742)
                       - Bstack_hat_idx_24 * t12_tmp * 0.000471111038810923) +
    Bstack_hat_idx_24 * t13_tmp * 0.0062474344427746742;
  Bstack_hat_idx_24 = (((((((((((Bstack_hat_idx_13_tmp_tmp *
    -0.0012722430112630651 - d_Bstack_hat_idx_3_tmp * 0.00059693993396417282) +
    t8_tmp * t13_tmp * 0.0017587418349192239) + -0.0825 * t11_tmp * t12_tmp *
    0.000471111038810923) - -0.0825 * t11_tmp * t13_tmp * 0.0062474344427746742)
    - 0.384 * t9_tmp * t12_tmp * 0.0062474344427746742) - 0.384 * t9_tmp *
    t13_tmp * 0.000471111038810923) - c_Bstack_hat_idx_3_tmp *
    0.0017587418349192239) - f_Bstack_hat_idx_3_tmp * t13_tmp *
    0.00059693993396417282) - b_Bstack_hat_idx_13_tmp_tmp * t12_tmp *
    0.0062474344427746742) - b_Bstack_hat_idx_13_tmp_tmp * t13_tmp *
                        0.000471111038810923) - k_Bstack_hat_idx_1_tmp * t12_tmp
                       * 0.000471111038810923) + k_Bstack_hat_idx_1_tmp *
    t13_tmp * 0.0062474344427746742;
  Bstack_hat_idx_25 = (((t10_tmp * -0.0012722430112630651 +
    e_Bstack_hat_idx_3_tmp * 0.0017587418349192239) + t11_tmp * t13_tmp *
                        0.00059693993396417282) - 0.088 * t10_tmp * t12_tmp *
                       0.0062474344427746742) - 0.088 * t10_tmp * t13_tmp *
    0.000471111038810923;
  Bstack_hat_idx_26 = t12_tmp * -0.00059693993396417282 + t13_tmp *
    0.0017587418349192239;

  /*  author: Claudio Gaz, Marco Cognetti, Alexander Oliva */
  /*  date: September 3, 2019 */
  /*   */
  /*  ------------------------------------------------- */
  /*  Panda Dynamic Model v. 1.0 */
  /*  ------------------------------------------------- */
  /*  C. Gaz, M. Cognetti, A. Oliva, P. Robuffo Giordano, A. De Luca, 'Dynamic */
  /*  Identification of the Franka Emika Panda Robot With Retrieval of Feasible */
  /*  Parameters Using Penalty-Based Optimization'. IEEE RA-L, 2019. */
  /*  */
  /*  the following code has been tested on Matlab 2018b */
  /*  get_FrictionTorque returns the numerical joint friction torque vector  */
  /*  tau_f(qdot), given the current joint velocities */
  for (i = 0; i < 7; i++) {
    d2 = dv[i];
    d3 = dv1[i];
    d4 = dv2[i];
    F[i] = -d2 / (exp(-d3 * d4) + 1.0) + d2 / (exp(-d3 * (x[i + 7] + d4)) + 1.0);
  }

  d2 = t2_tmp * t3_tmp;
  d3 = t4 * t11;
  d4 = t7 * t10;
  d5 = t4 * t13;
  d6 = t7 * t16;
  d7 = 0.0825 * t4 * t5_tmp;
  d8 = -0.0825 * t4 * t11;
  d9 = 0.316 * t5_tmp * t7;
  d11 = 0.316 * t7 * t6_tmp;
  d12 = d2 * t4_tmp;
  d13 = t4 * t5_tmp * t6_tmp;
  d14 = t4_tmp * t7;
  d15 = d4 * t11;
  d16 = d4 * t13;
  d17 = d5 * t15;
  d18 = d5 * t18;
  d19 = d6 * t18;
  d20 = d3 * t22;
  d21 = t7 * t15 * t16;
  d22 = 0.0825 * t5_tmp * t7;
  d23 = 0.0825 * t4 * t6_tmp;
  d24 = d8 * t8_tmp;
  d25 = d22 * t16;
  d26 = -0.0825 * t7 * t8_tmp;
  d27 = d26 * t16;
  d28 = d11 * t10;
  d29 = d11 * t16;
  d30 = d2 * t5_tmp;
  d31 = d30 * t7_tmp;
  d32 = d12 * t11;
  d33 = d2 * t6_tmp * t7_tmp;
  d34 = d12 * t13;
  d35 = d * t7;
  d36 = d35 * t7_tmp;
  d37 = t5_tmp * t7 * t6_tmp;
  d38 = d37 * t10;
  d40 = d14 * t6_tmp;
  d41 = d13 * t8_tmp;
  d42 = d13 * t9_tmp;
  d43 = t4 * t8_tmp * t13;
  d44 = d15 * t15;
  d45 = d43 * t9_tmp;
  d46 = t7 * t8_tmp;
  d47 = d3 * t11_tmp * t10_tmp;
  d48 = d15 * t18;
  d49 = d46 * t16 * t9_tmp;
  d50 = d17 * t20;
  d51 = d16 * t22;
  d52 = 0.0825 * t7 * t6_tmp;
  d53 = d7 * t8_tmp;
  d54 = d7 * t9_tmp;
  d8 *= t9_tmp;
  d55 = -0.0825 * t7 * t16 * t9_tmp;
  d56 = d9 * t10;
  d57 = d9 * t16;
  d58 = d40 * t7_tmp;
  d59 = d19 * t20;
  d60 = 0.0825 * t2_tmp * t3_tmp;
  d61 = d23 * t11_tmp;
  d62 = -0.0825 * t7 * t10;
  d63 = 0.088 * t4 * t11 * t20;
  d64 = 0.088 * t4 * t13;
  d65 = d64 * t18;
  d66 = 0.088 * t7 * t15 * t16;
  d67 = 0.316 * t2_tmp * t3_tmp;
  d68 = 0.384 * t4 * t5_tmp * t6_tmp;
  d69 = 0.384 * t4 * t13;
  d70 = d69 * t11_tmp;
  d71 = 0.384 * t7 * t11_tmp;
  d22 *= t8_tmp;
  d72 = d62 * t8_tmp * t13;
  d73 = d22 * t16;
  d74 = d61 * t15;
  d75 = d24 * t10_tmp;
  d76 = d27 * t10_tmp;
  d77 = d67 * t5_tmp * t4_tmp;
  d78 = d68 * t8_tmp;
  d79 = d28 * t8_tmp;
  d11 = d11 * t8_tmp * t16;
  d80 = d70 * t15;
  d70 *= t18;
  d81 = d71 * t15 * t16;
  d71 = d71 * t16 * t18;
  d82 = d30 * t4_tmp * t6_tmp;
  d83 = d31 * t8_tmp;
  d84 = d32 * t8_tmp;
  d85 = d31 * t9_tmp;
  d86 = d12 * t8_tmp;
  d87 = d86 * t13;
  d88 = d25 * t9_tmp;
  d62 = d62 * t13 * t9_tmp;
  d89 = d67 * t4_tmp * t6_tmp;
  d68 *= t9_tmp;
  d90 = d28 * t9_tmp;
  d91 = d29 * t9_tmp;
  d92 = d33 * t15;
  d94 = d32 * t9_tmp;
  d95 = d33 * t18;
  d96 = d34 * t9_tmp;
  d98 = d60 * t4_tmp * t6_tmp;
  d99 = -0.0825 * t2_tmp * t3_tmp;
  d100 = d99 * t6_tmp;
  d101 = d100 * t7_tmp;
  d102 = -0.0825 * t5_tmp * t4_tmp;
  d103 = d102 * t7 * t7_tmp;
  d104 = 0.0825 * t4_tmp * t7;
  d105 = d104 * t7_tmp;
  d106 = d105 * t11;
  d108 = -0.0825 * t4 * t5_tmp * t6_tmp;
  d109 = d108 * t11_tmp;
  d110 = d41 * t20;
  d111 = d15 * t8_tmp;
  d112 = d13 * t11_tmp * t9_tmp;
  d113 = d41 * t22;
  d114 = d42 * t10_tmp;
  d115 = d111 * t9_tmp;
  d43 = d43 * t11_tmp * t9_tmp;
  d116 = d16 * t11_tmp * t10_tmp;
  d117 = d5 * t11_tmp * t15 * t10_tmp;
  d46 = d46 * t11_tmp * t16 * t9_tmp;
  d118 = d44 * t20;
  d119 = d45 * t10_tmp;
  d120 = d49 * t10_tmp;
  d121 = t7 * t11_tmp * t16 * t18 * t10_tmp;
  d122 = d98 * t8_tmp;
  d123 = d103 * t9_tmp;
  d124 = d105 * t13;
  d125 = d109 * t15;
  d126 = d106 * t9_tmp;
  d127 = d124 * t9_tmp;
  d109 *= t18;
  d128 = d73 * t10_tmp;
  d129 = d101 * t8_tmp;
  d98 *= t9_tmp;
  d130 = d103 * t8_tmp;
  d131 = d106 * t8_tmp;
  d132 = d105 * t8_tmp * t13;
  d133 = d52 * t11_tmp;
  d134 = d133 * t15 * t16;
  d135 = d53 * t10_tmp;
  d136 = 0.088 * t7 * t10;
  d137 = d136 * t11;
  d138 = d137 * t18;
  d139 = d8 * t20;
  d136 = d136 * t13 * t20;
  d64 *= t15;
  d140 = d55 * t20;
  d141 = 0.088 * t7 * t16 * t18;
  d142 = 0.384 * t2_tmp * t3_tmp;
  d143 = d142 * t5_tmp;
  d144 = d143 * t7_tmp;
  d145 = d142 * t4_tmp;
  d146 = d67 * t7_tmp;
  d147 = d145 * t11;
  d148 = d146 * t11;
  d149 = 0.384 * t5_tmp * t7 * t6_tmp;
  d150 = d149 * t10;
  d151 = 0.384 * t4_tmp * t7;
  d152 = d151 * t6_tmp;
  Bstack_hat_idx_1_tmp = d152 * t7_tmp;
  d153 = d77 * t8_tmp;
  d154 = d147 * t8_tmp;
  d155 = d150 * t8_tmp;
  d156 = d148 * t9_tmp;
  d157 = d146 * t13 * t9_tmp;
  d158 = d77 * t9_tmp;
  d159 = d144 * t8_tmp;
  d148 *= t8_tmp;
  d160 = d144 * t9_tmp;
  d161 = d145 * t8_tmp * t13;
  d146 = d146 * t8_tmp * t13;
  d147 *= t9_tmp;
  d162 = d145 * t13;
  d163 = d162 * t9_tmp;
  d164 = Bstack_hat_idx_1_tmp * t8_tmp;
  d150 *= t9_tmp;
  d165 = Bstack_hat_idx_1_tmp * t9_tmp;
  d166 = d78 * t10_tmp;
  d167 = 0.384 * t7 * t10 * t11;
  d168 = d167 * t11_tmp;
  d169 = d33 * t11_tmp;
  d170 = d36 * t11_tmp;
  d171 = d168 * t15;
  d172 = d9 * t11_tmp;
  d173 = d172 * t16 * t18;
  d174 = d11 * t10_tmp;
  d168 *= t18;
  d175 = d82 * t15;
  d176 = d82 * t18;
  d177 = d169 * t15;
  d178 = d83 * t10_tmp;
  d179 = d33 * t8_tmp;
  d180 = d179 * t9_tmp;
  d181 = d84 * t20;
  d169 *= t18;
  d182 = d36 * t8_tmp;
  d183 = d182 * t9_tmp;
  d184 = d85 * t20;
  d185 = d32 * t11_tmp * t9_tmp;
  d186 = d87 * t20;
  d187 = d170 * t15;
  d188 = d84 * t22;
  d189 = d94 * t10_tmp;
  d190 = d34 * t11_tmp * t9_tmp;
  d191 = d92 * t10_tmp;
  d192 = t4_tmp * t7 * t6_tmp * t7_tmp;
  d193 = d192 * t8_tmp;
  d194 = d193 * t11_tmp;
  d195 = d85 * t22;
  d196 = d87 * t22;
  d197 = d83 * t11_tmp;
  d198 = d95 * t10_tmp;
  d170 *= t18;
  d199 = d96 * t10_tmp;
  d200 = d99 * t5_tmp * t4_tmp * t6_tmp;
  d60 = d60 * t5_tmp * t4_tmp;
  d201 = d60 * t11_tmp;
  d192 *= t9_tmp;
  b_Bstack_hat_idx_1_tmp = d192 * t22;
  d111 = d111 * t11_tmp * t9_tmp;
  d202 = d15 * t11_tmp * t15 * t10_tmp;
  d203 = d115 * t10_tmp;
  d204 = d200 * t8_tmp;
  d205 = d201 * t15;
  d201 *= t18;
  d200 *= t9_tmp;
  d206 = d122 * t10_tmp;
  d207 = d99 * t4_tmp;
  d208 = d207 * t11;
  d209 = d208 * t11_tmp;
  d210 = d209 * t15;
  d211 = d207 * t13;
  d212 = d211 * t11_tmp;
  d213 = d212 * t15;
  d214 = -0.0825 * t5_tmp * t7 * t6_tmp * t10;
  d215 = 0.088 * t4 * t5_tmp * t6_tmp;
  d216 = d215 * t11_tmp * t9_tmp;
  d217 = d72 * t10_tmp;
  d133 = d133 * t16 * t18;
  d218 = d88 * t20;
  d219 = d62 * t20;
  d220 = 0.088 * t4 * t8_tmp * t13 * t9_tmp * t10_tmp;
  d221 = d137 * t15;
  c_Bstack_hat_idx_1_tmp = 0.088 * t7 * t8_tmp * t16 * t9_tmp * t10_tmp;
  d222 = d214 * t11_tmp;
  d223 = d222 * t18;
  d224 = d123 * t10_tmp;
  d225 = d126 * t10_tmp;
  d226 = d153 * t10_tmp;
  d227 = d89 * t11_tmp;
  d228 = d227 * t15;
  d229 = 0.316 * t5_tmp * t7 * t10;
  d230 = d229 * t11_tmp;
  d231 = d230 * t15;
  d230 *= t18;
  d232 = 0.316 * t7 * t6_tmp * t10 * t8_tmp * t10_tmp;
  d233 = d68 * t20;
  d172 = d172 * t15 * t16;
  d234 = d90 * t20;
  d235 = d91 * t20;
  d236 = d156 * t10_tmp;
  d237 = d157 * t10_tmp;
  d238 = d155 * t10_tmp;
  d239 = d165 * t10_tmp;
  d240 = d82 * t8_tmp;
  d241 = d240 * t9_tmp;
  d242 = d82 * t11_tmp;
  d243 = d242 * t10_tmp;
  d244 = d175 * t20;
  d245 = t5_tmp * t7 * t6_tmp * t10;
  d246 = d245 * t8_tmp;
  d247 = d246 * t11_tmp * t10_tmp;
  d248 = d183 * t20;
  d249 = d58 * t11_tmp * t9_tmp * t10_tmp;
  d250 = t5_tmp * t4_tmp * t7 * t7_tmp * t18 * t10_tmp;
  d251 = d245 * t9_tmp;
  d252 = d251 * t10_tmp;
  d253 = d192 * t20;
  d254 = 0.088 * t2_tmp * t3_tmp;
  d255 = d254 * t5_tmp;
  d256 = d255 * t4_tmp * t6_tmp;
  d257 = d256 * t18;
  d258 = d256 * t20;
  d255 *= t7_tmp;
  d259 = d255 * t8_tmp * t11_tmp;
  d245 = d245 * t11_tmp * t9_tmp;
  d260 = t4 * t5_tmp * t6_tmp * t8_tmp * t11_tmp * t10_tmp;
  d261 = d204 * t10_tmp;
  Bstack_hat_idx_3_tmp = d254 * t6_tmp * t7_tmp;
  d262 = d254 * t4_tmp;
  d263 = d262 * t11;
  d264 = d262 * t13 * t11_tmp * t9_tmp;
  d265 = -0.0825 * t2_tmp * t3_tmp * t6_tmp * t7_tmp * t9_tmp * t10_tmp;
  d266 = Bstack_hat_idx_3_tmp * t15 * t10_tmp;
  d267 = Bstack_hat_idx_4_tmp_tmp_tmp * t7 * t7_tmp;
  d268 = d267 * t8_tmp * t9_tmp;
  b_Bstack_hat_idx_3_tmp = 0.088 * t4_tmp * t7 * t6_tmp * t7_tmp;
  d269 = b_Bstack_hat_idx_3_tmp * t8_tmp * t11_tmp;
  d270 = d130 * t20;
  d222 *= t15;
  d271 = Bstack_hat_idx_3_tmp * t18 * t10_tmp;
  d_Bstack_hat_idx_1_tmp = d267 * t15 * t10_tmp;
  d272 = 0.088 * t5_tmp * t7 * t6_tmp * t10;
  d273 = d272 * t11_tmp * t9_tmp;
  d274 = d131 * t20;
  d215 = d215 * t8_tmp * t11_tmp * t10_tmp;
  d275 = d268 * t12_tmp;
  d143 = d143 * t4_tmp * t6_tmp;
  d276 = 0.316 * t2_tmp * t3_tmp * t4_tmp * t6_tmp * t11_tmp * t18;
  Bstack_hat_idx_6_tmp_tmp = d158 * t20;
  c_Bstack_hat_idx_6_tmp_tmp = d159 * t20;
  Bstack_hat_idx_11_tmp_tmp = 0.384 * t2_tmp * t3_tmp * t4_tmp * t11 * t8_tmp *
    t10_tmp;
  b_Bstack_hat_idx_11_tmp_tmp = d148 * t20;
  b_Bstack_hat_idx_8_tmp_tmp = d160 * t10_tmp;
  Bstack_hat_idx_10_tmp_tmp = d161 * t10_tmp;
  b_Bstack_hat_idx_10_tmp_tmp = d146 * t20;
  c_Bstack_hat_idx_10_tmp_tmp = d147 * t20;
  Bstack_hat_idx_8_tmp_tmp = d150 * t20;
  d240 = d240 * t11_tmp * t9_tmp;
  d242 = d242 * t15 * t10_tmp;
  c_Bstack_hat_idx_8_tmp_tmp = d241 * t10_tmp;
  d179 = d179 * t11_tmp * t9_tmp * t10_tmp;
  d182 = d182 * t11_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_7_tmp_tmp = t2_tmp * t3_tmp * t4_tmp * t11 * t8_tmp * t11_tmp *
    t10_tmp;
  b_Bstack_hat_idx_7_tmp_tmp = t2_tmp * t3_tmp * t5_tmp * t7_tmp * t11_tmp *
    t9_tmp * t10_tmp;
  Bstack_hat_idx_6_tmp = t2_tmp * t3_tmp * t4_tmp * t8_tmp * t13 * t11_tmp *
    t10_tmp;
  e_Bstack_hat_idx_6_tmp_tmp = d180 * t20;
  k_Bstack_hat_idx_1_tmp = d200 * t20;
  d_Bstack_hat_idx_3_tmp = b_Bstack_hat_idx_3_tmp * t11_tmp * t9_tmp * t10_tmp;
  c_Bstack_hat_idx_3_tmp = d143 * t11_tmp;
  Bstack_hat_idx_13_tmp_tmp = c_Bstack_hat_idx_3_tmp * t15;
  b_Bstack_hat_idx_13_tmp_tmp = c_Bstack_hat_idx_3_tmp * t18;
  b_Bstack_hat_idx_6_tmp_tmp = d256 * t8_tmp * t9_tmp * t10_tmp;
  d_Bstack_hat_idx_6_tmp_tmp = d58 * t8_tmp * t10_tmp;
  Bstack_hat_idx_12_tmp = d37 * t10 * t8_tmp * t20;
  e_Bstack_hat_idx_3_tmp = Bstack_hat_idx_3_tmp * t8_tmp * t9_tmp;
  f_Bstack_hat_idx_3_tmp = d132 * t20;
  b_Bstack_hat_idx_3_tmp = d267 * t18 * t10_tmp;
  Bstack_hat_idx_3_tmp = t5_tmp * t4_tmp * t7 * t7_tmp * t15 * t10_tmp;
  s = d256 * t15;
  smax = d272 * t8_tmp * t11_tmp * t10_tmp;
  b_x[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t4
    * 0.1169633856586688 + t7 * 0.98199300668364131) - d2 * 0.01038106728915494)
    + d3 * 0.01807861861545219) + d5 * 0.53245576672167294) + d4 *
    0.010518859048328961) + d6 * 0.63699186963741528) - d7 * 0.97726851144741667)
    - d23 * 3.4355396338718371) + d12 * 0.45563062449307312) - d2 * t7_tmp *
    0.024469857132470071) + d13 * 0.30034486460496579) + d14 * t7_tmp *
    0.00044398158881385491) + d15 * 0.53245576672167294) + d16 *
    0.01807861861545219) + d17 * 0.0321778928866176) + d3 * t20 *
    0.0012722430112630651) + d18 * 0.025052011110203509) - d20 *
    0.0065540822374886409) + d21 * 0.025052011110203509) + d19 *
    0.0321778928866176) - d53 * 0.02006356734599796) - d54 * 0.15405567959822861)
    - d25 * 0.97726851144741667) - d24 * 0.02006356734599796) - d52 * t16 *
    3.4355396338718371) - d8 * 0.15405567959822861) - d27 * 0.02006356734599796)
    - d55 * 0.15405567959822861) + d56 * 3.4355396338718371) - d28 *
    0.97726851144741667) + d57 * 3.4355396338718371) - d29 * 0.97726851144741667)
    + d31 * 0.0054728514277935271) - d32 * 0.30034486460496579) - d33 *
    0.0095414784959169073) + d34 * 0.30034486460496579) + d36 *
    0.0095414784959169073) - d41 * 0.0122815866196153) - d38 *
    0.30034486460496579) + d58 * 0.0054728514277935271) - d42 *
    0.0154076417859336) + d44 * 0.0321778928866176) + d45 *
    0.0074623335715357092) + d48 * 0.025052011110203509) + d47 *
    0.01073500939031497) + d16 * t20 * 0.0012722430112630651) - d50 *
    0.0065540822374886409) - d51 * 0.0065540822374886409) - d49 *
    0.0074623335715357092) + d17 * t22 * 0.0012722430112630651) - d18 * t24 *
    0.001765933827532306) - d59 * 0.0065540822374886409) - d20 * t25 *
    0.001765933827532306) - d21 * t24 * 0.001765933827532306) + d19 * t22 *
    0.0012722430112630651) + d60 * 3.4355396338718371) - 0.0825 * t2_tmp *
    t3_tmp * t4_tmp * t6_tmp * 0.97726851144741667) + 0.0825 * t4 * t5_tmp *
    t8_tmp * t11_tmp * 0.13542482002433209) + 0.0825 * t4 * t5_tmp * t8_tmp *
    t10_tmp * 0.33125228086274061) - d73 * 0.02006356734599796) - d74 *
    0.33125228086274061) + d24 * t11_tmp * 0.13542482002433209) - d72 *
    0.02006356734599796) - d61 * t18 * 0.33125228086274061) - d88 *
    0.15405567959822861) + d23 * t15 * t10_tmp * 0.13542482002433209) + d75 *
    0.33125228086274061) - d62 * 0.15405567959822861) + d23 * t18 * t10_tmp *
    0.13542482002433209) + d26 * t11_tmp * t16 * 0.13542482002433209) + d76 *
    0.33125228086274061) + d63 * t12_tmp * 0.01249486888554935) + d65 * t12_tmp *
    0.01249486888554935) + d63 * t13_tmp * 0.000942222077621846) + d65 * t13_tmp
    * 0.000942222077621846) + d66 * t12_tmp * 0.01249486888554935) + d66 *
    t13_tmp * 0.000942222077621846) - d77 * 0.97726851144741667) - d89 *
    3.4355396338718371) + d78 * 0.02006356734599796) + d68 * 0.15405567959822861)
    - d79 * 0.02006356734599796) - d90 * 0.15405567959822861) - d11 *
    0.02006356734599796) - d91 * 0.15405567959822861) + d80 *
    0.33125228086274061) + d70 * 0.33125228086274061) - d69 * t15 * t10_tmp *
    0.13542482002433209) + d81 * 0.33125228086274061) - d69 * t18 * t10_tmp *
    0.13542482002433209) + d71 * 0.33125228086274061) - 0.384 * t7 * t15 * t16 *
    t10_tmp * 0.13542482002433209) - 0.384 * t7 * t16 * t18 * t10_tmp *
    0.13542482002433209) - d82 * 1.028754296212441) + d83 * 0.0154076417859336)
    + d84 * 0.0122815866196153) - d85 * 0.0122815866196153) - d87 *
    0.0122815866196153) - d92 * 0.0074623335715357092) + d94 *
    0.0154076417859336) + d95 * 0.0074623335715357092) - d96 *
    0.0154076417859336) + d36 * t15 * 0.0074623335715357092) + d38 * t8_tmp *
    0.0122815866196153) + d40 * t7_tmp * t8_tmp * 0.0154076417859336) - d35 *
    t7_tmp * t18 * 0.0074623335715357092) + d251 * 0.0154076417859336) - d192 *
    0.0122815866196153) - d112 * 2.4873130689434881E-5) + d110 *
    0.01073500939031497) - d113 * 0.01073500939031497) + d114 *
    0.0016408606364898271) + d115 * 0.0074623335715357092) - d43 *
    0.0016408606364898271) - d118 * 0.0065540822374886409) + d116 *
    0.01073500939031497) - d119 * 2.4873130689434881E-5) - d117 *
    0.01073500939031497) + d44 * t22 * 0.0012722430112630651) + d46 *
    0.0016408606364898271) - d47 * t12_tmp * 0.0035174836698384491) - d48 * t24 *
    0.001765933827532306) - d47 * t13_tmp * 0.0011938798679283461) + d120 *
    2.4873130689434881E-5) - d121 * 0.01073500939031497) - d50 * t25 *
    0.001765933827532306) - d51 * t25 * 0.001765933827532306) + d18 * t12_tmp *
    t13_tmp * 0.0023708937278747728) - d3 * t12_tmp * t22 * t13_tmp *
    0.0023708937278747728) + d21 * t12_tmp * t13_tmp * 0.0023708937278747728) -
    d59 * t25 * 0.001765933827532306) - d122 * 0.02006356734599796) - d129 *
    0.15405567959822861) - d98 * 0.15405567959822861) + d101 * t9_tmp *
    0.02006356734599796) + d130 * 0.15405567959822861) + d131 *
    0.15405567959822861) - d123 * 0.02006356734599796) + d132 *
    0.15405567959822861) - d125 * 0.33125228086274061) - d126 *
    0.02006356734599796) - d109 * 0.33125228086274061) - d127 *
    0.02006356734599796) + d108 * t15 * t10_tmp * 0.13542482002433209) + d22 *
    t11_tmp * t16 * 0.13542482002433209) + d108 * t18 * t10_tmp *
    0.13542482002433209) + d72 * t11_tmp * 0.13542482002433209) + d128 *
    0.33125228086274061) - d134 * 0.33125228086274061) + d135 * t12_tmp *
    0.01249486888554935) - d74 * t12_tmp * 0.01249486888554935) + d217 *
    0.33125228086274061) + d135 * t13_tmp * 0.000942222077621846) - d133 *
    0.33125228086274061) - d74 * t13_tmp * 0.000942222077621846) - d23 * t11_tmp
    * t18 * t12_tmp * 0.01249486888554935) + d52 * t15 * t16 * t10_tmp *
    0.13542482002433209) - 0.0825 * t4 * t5_tmp * t9_tmp * t20 * t12_tmp *
    0.000942222077621846) - 0.0825 * t4 * t6_tmp * t11_tmp * t18 * t13_tmp *
    0.000942222077621846) + 0.0825 * t7 * t6_tmp * t16 * t18 * t10_tmp *
    0.13542482002433209) + d75 * t12_tmp * 0.01249486888554935) + d54 * t20 *
    t13_tmp * 0.01249486888554935) - d54 * t12_tmp * t22 * 0.000942222077621846)
    + d75 * t13_tmp * 0.000942222077621846) + d138 * t12_tmp *
    0.01249486888554935) + d54 * t22 * t13_tmp * 0.01249486888554935) + d138 *
    t13_tmp * 0.000942222077621846) - d139 * t12_tmp * 0.000942222077621846) +
    d136 * t12_tmp * 0.01249486888554935) + d139 * t13_tmp * 0.01249486888554935)
    - d8 * t12_tmp * t22 * 0.000942222077621846) + d76 * t12_tmp *
    0.01249486888554935) + d136 * t13_tmp * 0.000942222077621846) + d8 * t22 *
    t13_tmp * 0.01249486888554935) + d76 * t13_tmp * 0.000942222077621846) + d64
    * t12_tmp * t22 * 0.01249486888554935) + d64 * t22 * t13_tmp *
    0.000942222077621846) - d140 * t12_tmp * 0.000942222077621846) + d140 *
    t13_tmp * 0.01249486888554935) - d55 * t12_tmp * t22 * 0.000942222077621846)
    + d55 * t22 * t13_tmp * 0.01249486888554935) + d141 * t12_tmp * t22 *
    0.01249486888554935) + d141 * t22 * t13_tmp * 0.000942222077621846) - d153 *
    0.02006356734599796) - d158 * 0.15405567959822861) - d159 *
    0.15405567959822861) - d154 * 0.02006356734599796) - d148 *
    0.15405567959822861) + d160 * 0.02006356734599796) + d161 *
    0.02006356734599796) - d146 * 0.15405567959822861) - d147 *
    0.15405567959822861) + d156 * 0.02006356734599796) + d163 *
    0.15405567959822861) + d157 * 0.02006356734599796) - d155 *
    0.02006356734599796) - d164 * 0.15405567959822861) - d78 * t11_tmp *
    0.13542482002433209) - d150 * 0.15405567959822861) + d165 *
    0.02006356734599796) - d166 * 0.33125228086274061) + d56 * t11_tmp * t15 *
    0.33125228086274061) + d79 * t11_tmp * 0.13542482002433209) + d56 * t11_tmp *
    t18 * 0.33125228086274061) - d56 * t15 * t10_tmp * 0.13542482002433209) +
    d232 * 0.33125228086274061) + d172 * 0.33125228086274061) + 0.316 * t7 *
    t6_tmp * t8_tmp * t11_tmp * t16 * 0.13542482002433209) - d229 * t18 *
    t10_tmp * 0.13542482002433209) + d171 * 0.33125228086274061) + d173 *
    0.33125228086274061) - d9 * t15 * t16 * t10_tmp * 0.13542482002433209) +
    d174 * 0.33125228086274061) + d168 * 0.33125228086274061) - d167 * t15 *
    t10_tmp * 0.13542482002433209) - d57 * t18 * t10_tmp * 0.13542482002433209)
    - d167 * t18 * t10_tmp * 0.13542482002433209) + d80 * t12_tmp *
    0.01249486888554935) + d80 * t13_tmp * 0.000942222077621846) + d70 * t12_tmp
    * 0.01249486888554935) + d70 * t13_tmp * 0.000942222077621846) + d81 *
    t12_tmp * 0.01249486888554935) + d81 * t13_tmp * 0.000942222077621846) + d71
    * t12_tmp * 0.01249486888554935) + d71 * t13_tmp * 0.000942222077621846) -
    d175 * 0.0643557857732352) - d176 * 0.05010402222040701) + d82 * t20 *
    0.00254448602252613) + d197 * 2.4873130689434881E-5) - d82 * t22 *
    0.01310816447497728) - d178 * 0.0016408606364898271) + d180 *
    0.01425176355282819) + d177 * 0.0016408606364898271) + d185 *
    2.4873130689434881E-5) - d181 * 0.01073500939031497) - d169 *
    0.0016408606364898271) - d190 * 2.4873130689434881E-5) + d184 *
    0.01073500939031497) + d188 * 0.01073500939031497) + d186 *
    0.01073500939031497) + d191 * 2.4873130689434881E-5) - d183 *
    0.01425176355282819) - d187 * 0.0016408606364898271) + d194 *
    2.4873130689434881E-5) - d195 * 0.01073500939031497) - d189 *
    0.0016408606364898271) - d196 * 0.01073500939031497) - d198 *
    2.4873130689434881E-5) + d170 * 0.0016408606364898271) + d199 *
    0.0016408606364898271) - Bstack_hat_idx_3_tmp * 2.4873130689434881E-5) + d38
    * t11_tmp * t9_tmp * 2.4873130689434881E-5) - d_Bstack_hat_idx_6_tmp_tmp *
    0.0016408606364898271) - d41 * t11_tmp * t10_tmp * 0.015652650497503411) -
    Bstack_hat_idx_12_tmp * 0.01073500939031497) + d35 * t7_tmp * t18 * t10_tmp *
    2.4873130689434881E-5) + d246 * t22 * 0.01073500939031497) - d252 *
    0.0016408606364898271) + t4_tmp * t7 * t6_tmp * t7_tmp * t9_tmp * t20 *
    0.01073500939031497) - b_Bstack_hat_idx_1_tmp * 0.01073500939031497) - d110 *
    t12_tmp * 0.0035174836698384491) - d111 * 0.0016408606364898271) - d110 *
    t13_tmp * 0.0011938798679283461) + d41 * t12_tmp * t22 *
    0.0035174836698384491) - d112 * t24 * 0.0023708937278747728) + d112 * t25 *
    0.0023708937278747728) + d113 * t13_tmp * 0.0011938798679283461) + d114 *
    t12_tmp * 0.0011938798679283461) - d114 * t13_tmp * 0.0035174836698384491) -
    d203 * 2.4873130689434881E-5) - d202 * 0.01073500939031497) - d43 * t12_tmp *
    0.0011938798679283461) + d43 * t13_tmp * 0.0035174836698384491) - d116 *
    t12_tmp * 0.0035174836698384491) + d117 * t12_tmp * 0.0035174836698384491) -
    d116 * t13_tmp * 0.0011938798679283461) + d46 * t12_tmp *
    0.0011938798679283461) + d117 * t13_tmp * 0.0011938798679283461) - d118 *
    t25 * 0.001765933827532306) - d119 * t24 * 0.0023708937278747728) - d46 *
    t13_tmp * 0.0035174836698384491) + d119 * t25 * 0.0023708937278747728) + d48
    * t12_tmp * t13_tmp * 0.0023708937278747728) + d120 * t24 *
    0.0023708937278747728) + d121 * t12_tmp * 0.0035174836698384491) - d50 *
    t12_tmp * t13_tmp * 0.0023708937278747728) - d16 * t12_tmp * t22 * t13_tmp *
    0.0023708937278747728) - d120 * t25 * 0.0023708937278747728) + d121 *
    t13_tmp * 0.0011938798679283461) - d59 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d204 * 0.040127134691995907) - d200 *
    0.30811135919645732) + d205 * 0.33125228086274061) + d122 * t11_tmp *
    0.13542482002433209) + d201 * 0.33125228086274061) - d60 * t15 * t10_tmp *
    0.13542482002433209) + d206 * 0.33125228086274061) + d210 *
    0.33125228086274061) - d60 * t18 * t10_tmp * 0.13542482002433209) - d213 *
    0.33125228086274061) - d101 * t11_tmp * t9_tmp * 0.13542482002433209) + d209
    * t18 * 0.33125228086274061) - d208 * t15 * t10_tmp * 0.13542482002433209) -
    d212 * t18 * 0.33125228086274061) + d211 * t15 * t10_tmp *
    0.13542482002433209) - d100 * t7_tmp * t9_tmp * t10_tmp *
    0.33125228086274061) + d103 * t11_tmp * t9_tmp * 0.13542482002433209) - d99 *
    t4_tmp * t11 * t18 * t10_tmp * 0.13542482002433209) + d222 *
    0.33125228086274061) + -0.0825 * t2_tmp * t3_tmp * t4_tmp * t13 * t18 *
    t10_tmp * 0.13542482002433209) + d223 * 0.33125228086274061) + d106 *
    t11_tmp * t9_tmp * 0.13542482002433209) + d224 * 0.33125228086274061) - d214
    * t15 * t10_tmp * 0.13542482002433209) + d124 * t11_tmp * t9_tmp *
    0.13542482002433209) - d125 * t12_tmp * 0.01249486888554935) - d214 * t18 *
    t10_tmp * 0.13542482002433209) + d225 * 0.33125228086274061) - d125 *
    t13_tmp * 0.000942222077621846) + d127 * t10_tmp * 0.33125228086274061) -
    d109 * t12_tmp * 0.01249486888554935) + d216 * t12_tmp *
    0.000942222077621846) - d109 * t13_tmp * 0.000942222077621846) - d216 *
    t13_tmp * 0.01249486888554935) + d128 * t12_tmp * 0.01249486888554935) -
    d134 * t12_tmp * 0.01249486888554935) + d128 * t13_tmp *
    0.000942222077621846) - d134 * t13_tmp * 0.000942222077621846) + d217 *
    t12_tmp * 0.01249486888554935) - d133 * t12_tmp * 0.01249486888554935) +
    d217 * t13_tmp * 0.000942222077621846) - d218 * t12_tmp *
    0.000942222077621846) - d133 * t13_tmp * 0.000942222077621846) + d218 *
    t13_tmp * 0.01249486888554935) - d88 * t12_tmp * t22 * 0.000942222077621846)
    - d219 * t12_tmp * 0.000942222077621846) + d220 * t12_tmp *
    0.000942222077621846) + d221 * t12_tmp * t22 * 0.01249486888554935) + d88 *
    t22 * t13_tmp * 0.01249486888554935) + d219 * t13_tmp * 0.01249486888554935)
    - d62 * t12_tmp * t22 * 0.000942222077621846) - d220 * t13_tmp *
    0.01249486888554935) + d221 * t22 * t13_tmp * 0.000942222077621846) + d62 *
    t22 * t13_tmp * 0.01249486888554935) - c_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000942222077621846) + c_Bstack_hat_idx_1_tmp * t13_tmp *
    0.01249486888554935) + d153 * t11_tmp * 0.13542482002433209) + d226 *
    0.33125228086274061) - d228 * 0.33125228086274061) + d154 * t11_tmp *
    0.13542482002433209) - d227 * t18 * 0.33125228086274061) - d144 * t11_tmp *
    t9_tmp * 0.13542482002433209) - d161 * t11_tmp * 0.13542482002433209) + d89 *
    t15 * t10_tmp * 0.13542482002433209) + d145 * t11 * t8_tmp * t10_tmp *
    0.33125228086274061) + d67 * t4_tmp * t6_tmp * t18 * t10_tmp *
    0.13542482002433209) - d67 * t7_tmp * t11 * t11_tmp * t9_tmp *
    0.13542482002433209) - 0.384 * t2_tmp * t3_tmp * t5_tmp * t7_tmp * t9_tmp *
    t10_tmp * 0.33125228086274061) - 0.384 * t2_tmp * t3_tmp * t4_tmp * t8_tmp *
    t13 * t10_tmp * 0.33125228086274061) - 0.316 * t2_tmp * t3_tmp * t7_tmp *
    t13 * t11_tmp * t9_tmp * 0.13542482002433209) + d155 * t11_tmp *
    0.13542482002433209) - d236 * 0.33125228086274061) - d237 *
    0.33125228086274061) + d238 * 0.33125228086274061) - Bstack_hat_idx_1_tmp *
    t11_tmp * t9_tmp * 0.13542482002433209) - d239 * 0.33125228086274061) - d166
    * t12_tmp * 0.01249486888554935) + d231 * t12_tmp * 0.01249486888554935) -
    d166 * t13_tmp * 0.000942222077621846) + d231 * t13_tmp *
    0.000942222077621846) + d230 * t12_tmp * 0.01249486888554935) + d230 *
    t13_tmp * 0.000942222077621846) + d232 * t12_tmp * 0.01249486888554935) +
    d233 * t12_tmp * 0.000942222077621846) + d172 * t12_tmp *
    0.01249486888554935) + d232 * t13_tmp * 0.000942222077621846) - d233 *
    t13_tmp * 0.01249486888554935) + d68 * t12_tmp * t22 * 0.000942222077621846)
    + d172 * t13_tmp * 0.000942222077621846) + d171 * t12_tmp *
    0.01249486888554935) + d173 * t12_tmp * 0.01249486888554935) - d68 * t22 *
    t13_tmp * 0.01249486888554935) + d171 * t13_tmp * 0.000942222077621846) +
    d173 * t13_tmp * 0.000942222077621846) - d234 * t12_tmp *
    0.000942222077621846) + d174 * t12_tmp * 0.01249486888554935) + d168 *
    t12_tmp * 0.01249486888554935) + d234 * t13_tmp * 0.01249486888554935) - d90
    * t12_tmp * t22 * 0.000942222077621846) + d174 * t13_tmp *
    0.000942222077621846) + d168 * t13_tmp * 0.000942222077621846) + d90 * t22 *
    t13_tmp * 0.01249486888554935) - d235 * t12_tmp * 0.000942222077621846) +
    d235 * t13_tmp * 0.01249486888554935) - d91 * t12_tmp * t22 *
    0.000942222077621846) + d91 * t22 * t13_tmp * 0.01249486888554935) - d241 *
    0.01492466714307142) + d243 * 0.02147001878062994) + d244 *
    0.01310816447497728) - d175 * t22 * 0.00254448602252613) + d176 * t24 *
    0.003531867655064613) + d84 * t11_tmp * t10_tmp * 0.015652650497503411) +
    d197 * t24 * 0.0023708937278747728) - d31 * t11_tmp * t9_tmp * t10_tmp *
    0.015652650497503411) - d86 * t13 * t11_tmp * t10_tmp * 0.015652650497503411)
    - d30 * t7_tmp * t8_tmp * t11_tmp * t25 * 0.0023708937278747728) - d30 *
    t4_tmp * t6_tmp * t22 * t25 * 0.003531867655064613) - d2 * t5_tmp * t7_tmp *
    t8_tmp * t10_tmp * t12_tmp * 0.0011938798679283461) - d2 * t6_tmp * t7_tmp *
    t8_tmp * t9_tmp * t20 * 0.01310816447497728) + d177 * t12_tmp *
    0.0011938798679283461) + d178 * t13_tmp * 0.0035174836698384491) + d180 *
    t22 * 0.00254448602252613) - d177 * t13_tmp * 0.0035174836698384491) + d181 *
    t12_tmp * 0.0035174836698384491) + d180 * t24 * 0.003531867655064613) - d169
    * t12_tmp * 0.0011938798679283461) + d247 * 0.015652650497503411) + d248 *
    0.01310816447497728) - d184 * t12_tmp * 0.0035174836698384491) + d181 *
    t13_tmp * 0.0011938798679283461) - d84 * t12_tmp * t22 *
    0.0035174836698384491) + d185 * t24 * 0.0023708937278747728) - d186 *
    t12_tmp * 0.0035174836698384491) + d169 * t13_tmp * 0.0035174836698384491) -
    d187 * t12_tmp * 0.0011938798679283461) - d185 * t25 * 0.0023708937278747728)
    - d183 * t22 * 0.00254448602252613) - d184 * t13_tmp * 0.0011938798679283461)
    + d85 * t12_tmp * t22 * 0.0035174836698384491) - d188 * t13_tmp *
    0.0011938798679283461) - d189 * t12_tmp * 0.0011938798679283461) - d186 *
    t13_tmp * 0.0011938798679283461) + d87 * t12_tmp * t22 *
    0.0035174836698384491) - d190 * t24 * 0.0023708937278747728) + d187 *
    t13_tmp * 0.0035174836698384491) + d190 * t25 * 0.0023708937278747728) +
    d191 * t24 * 0.0023708937278747728) - d183 * t24 * 0.003531867655064613) +
    d170 * t12_tmp * 0.0011938798679283461) + d194 * t24 * 0.0023708937278747728)
    - d249 * 0.015652650497503411) + d195 * t13_tmp * 0.0011938798679283461) +
    d189 * t13_tmp * 0.0035174836698384491) + d196 * t13_tmp *
    0.0011938798679283461) + d199 * t12_tmp * 0.0011938798679283461) - d191 *
    t25 * 0.0023708937278747728) - d194 * t25 * 0.0023708937278747728) - d170 *
    t13_tmp * 0.0035174836698384491) - d193 * t10_tmp * t12_tmp *
    0.0011938798679283461) - d199 * t13_tmp * 0.0035174836698384491) - d198 *
    t24 * 0.0023708937278747728) + d246 * t20 * t12_tmp * 0.0035174836698384491)
    + d33 * t18 * t10_tmp * t25 * 0.0023708937278747728) +
    d_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0035174836698384491) - d35 * t7_tmp
    * t15 * t10_tmp * t24 * 0.0023708937278747728) + Bstack_hat_idx_12_tmp *
    t13_tmp * 0.0011938798679283461) - d246 * t12_tmp * t22 *
    0.0035174836698384491) + d245 * t24 * 0.0023708937278747728) + t5_tmp *
    t4_tmp * t7 * t7_tmp * t15 * t10_tmp * t25 * 0.0023708937278747728) - d245 *
    t25 * 0.0023708937278747728) - d260 * t25 * 0.003531867655064613) - d246 *
    t22 * t13_tmp * 0.0011938798679283461) - d252 * t12_tmp *
    0.0011938798679283461) + d250 * t24 * 0.0023708937278747728) - d253 *
    t12_tmp * 0.0035174836698384491) - d250 * t25 * 0.0023708937278747728) +
    d252 * t13_tmp * 0.0035174836698384491) - d253 * t13_tmp *
    0.0011938798679283461) + d192 * t12_tmp * t22 * 0.0035174836698384491) -
    d112 * t12_tmp * t13_tmp * 0.003531867655064613) + b_Bstack_hat_idx_1_tmp *
    t13_tmp * 0.0011938798679283461) - d111 * t12_tmp * 0.0011938798679283461) +
    d111 * t13_tmp * 0.0035174836698384491) + d202 * t12_tmp *
    0.0035174836698384491) + d202 * t13_tmp * 0.0011938798679283461) - d203 *
    t24 * 0.0023708937278747728) + d203 * t25 * 0.0023708937278747728) - d118 *
    t12_tmp * t13_tmp * 0.0023708937278747728) - d119 * t12_tmp * t13_tmp *
    0.003531867655064613) + d120 * t12_tmp * t13_tmp * 0.003531867655064613) +
    d204 * t11_tmp * 0.27084964004866419) + d261 * 0.66250456172548111) + d205 *
    t12_tmp * 0.01249486888554935) - d257 * t12_tmp * 0.0249897377710987) + d205
    * t13_tmp * 0.000942222077621846) - d257 * t13_tmp * 0.0018844441552436919)
    + d258 * t12_tmp * 0.0249897377710987) + d201 * t12_tmp *
    0.01249486888554935) - d259 * t12_tmp * 0.000942222077621846) + d258 *
    t13_tmp * 0.0018844441552436919) + d201 * t13_tmp * 0.000942222077621846) +
    d206 * t12_tmp * 0.01249486888554935) + d259 * t13_tmp * 0.01249486888554935)
    + d206 * t13_tmp * 0.000942222077621846) + d210 * t12_tmp *
    0.01249486888554935) + d210 * t13_tmp * 0.000942222077621846) - d213 *
    t12_tmp * 0.01249486888554935) - e_Bstack_hat_idx_3_tmp * t12_tmp *
    0.0249897377710987) + -0.0825 * t2_tmp * t3_tmp * t4_tmp * t11 * t11_tmp *
    t18 * t12_tmp * 0.01249486888554935) - d129 * t20 * t12_tmp *
    0.000942222077621846) - d98 * t20 * t12_tmp * 0.000942222077621846) - d213 *
    t13_tmp * 0.000942222077621846) - d263 * t11_tmp * t9_tmp * t12_tmp *
    0.000942222077621846) - e_Bstack_hat_idx_3_tmp * t13_tmp *
    0.0018844441552436919) + d207 * t11 * t11_tmp * t18 * t13_tmp *
    0.000942222077621846) - d207 * t13 * t11_tmp * t18 * t12_tmp *
    0.01249486888554935) + d99 * t6_tmp * t7_tmp * t8_tmp * t20 * t13_tmp *
    0.01249486888554935) - d99 * t6_tmp * t7_tmp * t8_tmp * t12_tmp * t22 *
    0.000942222077621846) + 0.0825 * t2_tmp * t3_tmp * t4_tmp * t6_tmp * t9_tmp *
    t20 * t13_tmp * 0.01249486888554935) - 0.0825 * t2_tmp * t3_tmp * t4_tmp *
    t6_tmp * t9_tmp * t12_tmp * t22 * 0.000942222077621846) + 0.088 * t2_tmp *
    t3_tmp * t4_tmp * t11 * t11_tmp * t9_tmp * t13_tmp * 0.01249486888554935) +
    d264 * t12_tmp * 0.000942222077621846) - -0.0825 * t2_tmp * t3_tmp * t4_tmp *
    t13 * t11_tmp * t18 * t13_tmp * 0.000942222077621846) + d129 * t22 * t13_tmp
    * 0.01249486888554935) - d265 * t12_tmp * 0.01249486888554935) - d266 *
    t12_tmp * 0.000942222077621846) + d275 * 0.0249897377710987) - d269 *
    t12_tmp * 0.000942222077621846) + d98 * t22 * t13_tmp * 0.01249486888554935)
    + d270 * t12_tmp * 0.000942222077621846) + d222 * t12_tmp *
    0.01249486888554935) - d264 * t13_tmp * 0.01249486888554935) - d265 *
    t13_tmp * 0.000942222077621846) + d266 * t13_tmp * 0.01249486888554935) +
    d268 * t13_tmp * 0.0018844441552436919) + d269 * t13_tmp *
    0.01249486888554935) - d270 * t13_tmp * 0.01249486888554935) + d130 *
    t12_tmp * t22 * 0.000942222077621846) + d222 * t13_tmp *
    0.000942222077621846) + d271 * t12_tmp * 0.000942222077621846) + d223 *
    t12_tmp * 0.01249486888554935) - d130 * t22 * t13_tmp * 0.01249486888554935)
    + d224 * t12_tmp * 0.01249486888554935) - d271 * t13_tmp *
    0.01249486888554935) + d_Bstack_hat_idx_1_tmp * t12_tmp *
    0.000942222077621846) - d273 * t12_tmp * 0.000942222077621846) + d274 *
    t12_tmp * 0.000942222077621846) + d223 * t13_tmp * 0.000942222077621846) -
    d215 * t12_tmp * 0.0249897377710987) + d224 * t13_tmp * 0.000942222077621846)
    - d_Bstack_hat_idx_1_tmp * t13_tmp * 0.01249486888554935) + d273 * t13_tmp *
    0.01249486888554935) - d274 * t13_tmp * 0.01249486888554935) + d131 *
    t12_tmp * t22 * 0.000942222077621846) + f_Bstack_hat_idx_3_tmp * t12_tmp *
    0.000942222077621846) - d215 * t13_tmp * 0.0018844441552436919) -
    b_Bstack_hat_idx_3_tmp * t12_tmp * 0.000942222077621846) - d131 * t22 *
    t13_tmp * 0.01249486888554935) + d225 * t12_tmp * 0.01249486888554935) -
    f_Bstack_hat_idx_3_tmp * t13_tmp * 0.01249486888554935) + d132 * t12_tmp *
    t22 * 0.000942222077621846) + b_Bstack_hat_idx_3_tmp * t13_tmp *
    0.01249486888554935) + d106 * t9_tmp * t10_tmp * t13_tmp *
    0.000942222077621846) - d132 * t22 * t13_tmp * 0.01249486888554935) + d105 *
    t13 * t9_tmp * t10_tmp * t12_tmp * 0.01249486888554935) + d104 * t7_tmp *
    t13 * t9_tmp * t10_tmp * t13_tmp * 0.000942222077621846) + d137 * t8_tmp *
    t9_tmp * t10_tmp * t12_tmp * 0.000942222077621846) - 0.088 * t7 * t10 * t11 *
    t8_tmp * t9_tmp * t10_tmp * t13_tmp * 0.01249486888554935) - 0.384 * t2_tmp *
    t3_tmp * t5_tmp * t4_tmp * t6_tmp * t11_tmp * t15 * 0.66250456172548111) -
    0.384 * t2_tmp * t3_tmp * t5_tmp * t4_tmp * t6_tmp * t11_tmp * t18 *
    0.66250456172548111) + d143 * t15 * t10_tmp * 0.27084964004866419) + d143 *
    t18 * t10_tmp * 0.27084964004866419) + d226 * t12_tmp * 0.01249486888554935)
    - d228 * t12_tmp * 0.01249486888554935) + d226 * t13_tmp *
    0.000942222077621846) - d228 * t13_tmp * 0.000942222077621846) - d276 *
    t12_tmp * 0.01249486888554935) - Bstack_hat_idx_6_tmp_tmp * t12_tmp *
    0.000942222077621846) - d276 * t13_tmp * 0.000942222077621846) -
    c_Bstack_hat_idx_6_tmp_tmp * t12_tmp * 0.000942222077621846) +
    Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.01249486888554935) - d158 * t12_tmp *
    t22 * 0.000942222077621846) + c_Bstack_hat_idx_6_tmp_tmp * t13_tmp *
    0.01249486888554935) - d159 * t12_tmp * t22 * 0.000942222077621846) +
    Bstack_hat_idx_11_tmp_tmp * t12_tmp * 0.01249486888554935) + d158 * t22 *
    t13_tmp * 0.01249486888554935) - b_Bstack_hat_idx_11_tmp_tmp * t12_tmp *
    0.000942222077621846) + d159 * t22 * t13_tmp * 0.01249486888554935) -
    b_Bstack_hat_idx_8_tmp_tmp * t12_tmp * 0.01249486888554935) +
    Bstack_hat_idx_11_tmp_tmp * t13_tmp * 0.000942222077621846) -
    Bstack_hat_idx_10_tmp_tmp * t12_tmp * 0.01249486888554935) +
    b_Bstack_hat_idx_11_tmp_tmp * t13_tmp * 0.01249486888554935) - d148 *
    t12_tmp * t22 * 0.000942222077621846) - b_Bstack_hat_idx_10_tmp_tmp *
    t12_tmp * 0.000942222077621846) - b_Bstack_hat_idx_8_tmp_tmp * t13_tmp *
    0.000942222077621846) - Bstack_hat_idx_10_tmp_tmp * t13_tmp *
    0.000942222077621846) + d148 * t22 * t13_tmp * 0.01249486888554935) - d236 *
    t12_tmp * 0.01249486888554935) + b_Bstack_hat_idx_10_tmp_tmp * t13_tmp *
    0.01249486888554935) - d146 * t12_tmp * t22 * 0.000942222077621846) -
    c_Bstack_hat_idx_10_tmp_tmp * t12_tmp * 0.000942222077621846) - d236 *
    t13_tmp * 0.000942222077621846) + d146 * t22 * t13_tmp * 0.01249486888554935)
    - d237 * t12_tmp * 0.01249486888554935) + c_Bstack_hat_idx_10_tmp_tmp *
    t13_tmp * 0.01249486888554935) - d147 * t12_tmp * t22 * 0.000942222077621846)
    + d163 * t20 * t12_tmp * 0.000942222077621846) + d238 * t12_tmp *
    0.01249486888554935) - d164 * t20 * t12_tmp * 0.000942222077621846) - d237 *
    t13_tmp * 0.000942222077621846) + d147 * t22 * t13_tmp * 0.01249486888554935)
    - d162 * t9_tmp * t20 * t13_tmp * 0.01249486888554935) + d163 * t12_tmp *
    t22 * 0.000942222077621846) + d149 * t10 * t8_tmp * t10_tmp * t13_tmp *
    0.000942222077621846) + d152 * t7_tmp * t8_tmp * t20 * t13_tmp *
    0.01249486888554935) - d151 * t6_tmp * t7_tmp * t8_tmp * t12_tmp * t22 *
    0.000942222077621846) - d142 * t4_tmp * t13 * t9_tmp * t22 * t13_tmp *
    0.01249486888554935) + 0.384 * t4_tmp * t7 * t6_tmp * t7_tmp * t8_tmp * t22 *
    t13_tmp * 0.01249486888554935) - 0.384 * t4_tmp * t7 * t6_tmp * t7_tmp *
    t9_tmp * t10_tmp * t12_tmp * 0.01249486888554935) - Bstack_hat_idx_8_tmp_tmp
    * t12_tmp * 0.000942222077621846) - d239 * t13_tmp * 0.000942222077621846) +
    Bstack_hat_idx_8_tmp_tmp * t13_tmp * 0.01249486888554935) - d150 * t12_tmp *
    t22 * 0.000942222077621846) + d150 * t22 * t13_tmp * 0.01249486888554935) +
    d240 * 0.0032817212729796541) + c_Bstack_hat_idx_8_tmp_tmp *
    4.9746261378869748E-5) + d242 * 0.02147001878062994) - d243 * t12_tmp *
    0.0070349673396768973) - d243 * t13_tmp * 0.0023877597358566908) + d244 *
    t25 * 0.003531867655064613) - d179 * 0.02147001878062994) - d176 * t12_tmp *
    t13_tmp * 0.0047417874557495474) + d197 * t12_tmp * t13_tmp *
    0.003531867655064613) + d182 * 0.02147001878062994) - d82 * t12_tmp * t22 *
    t13_tmp * 0.0047417874557495474) + Bstack_hat_idx_7_tmp_tmp * t25 *
    0.003531867655064613) - b_Bstack_hat_idx_7_tmp_tmp * t25 *
    0.003531867655064613) - Bstack_hat_idx_6_tmp * t25 * 0.003531867655064613) -
    d180 * t12_tmp * t13_tmp * 0.0047417874557495474) -
    e_Bstack_hat_idx_6_tmp_tmp * t25 * 0.003531867655064613) + d185 * t12_tmp *
    t13_tmp * 0.003531867655064613) - d190 * t12_tmp * t13_tmp *
    0.003531867655064613) + d191 * t12_tmp * t13_tmp * 0.003531867655064613) +
    d183 * t12_tmp * t13_tmp * 0.0047417874557495474) + d247 * t25 *
    0.003531867655064613) + d194 * t12_tmp * t13_tmp * 0.003531867655064613) +
    d248 * t25 * 0.003531867655064613) - d198 * t12_tmp * t13_tmp *
    0.003531867655064613) - Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp *
    0.003531867655064613) + d245 * t12_tmp * t13_tmp * 0.003531867655064613) -
    d249 * t25 * 0.003531867655064613) - d260 * t12_tmp * t13_tmp *
    0.0047417874557495474) + d250 * t12_tmp * t13_tmp * 0.003531867655064613) -
    d203 * t12_tmp * t13_tmp * 0.003531867655064613) + d261 * t12_tmp *
    0.0249897377710987) + d261 * t13_tmp * 0.0018844441552436919) -
    k_Bstack_hat_idx_1_tmp * t12_tmp * 0.0018844441552436919) +
    k_Bstack_hat_idx_1_tmp * t13_tmp * 0.0249897377710987) - d200 * t12_tmp *
    t22 * 0.0018844441552436919) - s * t12_tmp * t22 * 0.0249897377710987) +
    d200 * t22 * t13_tmp * 0.0249897377710987) - s * t22 * t13_tmp *
    0.0018844441552436919) + d263 * t8_tmp * t11_tmp * t10_tmp * t12_tmp *
    0.0249897377710987) - d255 * t11_tmp * t9_tmp * t10_tmp * t12_tmp *
    0.0249897377710987) + d262 * t11 * t8_tmp * t11_tmp * t10_tmp * t13_tmp *
    0.0018844441552436919) - d262 * t8_tmp * t13 * t11_tmp * t10_tmp * t12_tmp *
    0.0249897377710987) - d254 * t5_tmp * t7_tmp * t11_tmp * t9_tmp * t10_tmp *
    t13_tmp * 0.0018844441552436919) - d254 * t4_tmp * t8_tmp * t13 * t11_tmp *
    t10_tmp * t13_tmp * 0.0018844441552436919) + 0.088 * t2_tmp * t3_tmp *
    t6_tmp * t7_tmp * t8_tmp * t9_tmp * t12_tmp * t22 * 0.0249897377710987) +
    0.088 * t2_tmp * t3_tmp * t6_tmp * t7_tmp * t8_tmp * t9_tmp * t22 * t13_tmp *
    0.0018844441552436919) + smax * t12_tmp * 0.0249897377710987) + smax *
    t13_tmp * 0.0018844441552436919) - d275 * t22 * 0.0249897377710987) - d268 *
    t22 * t13_tmp * 0.0018844441552436919) - d_Bstack_hat_idx_3_tmp * t12_tmp *
    0.0249897377710987) - d_Bstack_hat_idx_3_tmp * t13_tmp *
    0.0018844441552436919) - Bstack_hat_idx_13_tmp_tmp * t12_tmp *
    0.0249897377710987) - Bstack_hat_idx_13_tmp_tmp * t13_tmp *
    0.0018844441552436919) - b_Bstack_hat_idx_13_tmp_tmp * t12_tmp *
    0.0249897377710987) - b_Bstack_hat_idx_13_tmp_tmp * t13_tmp *
    0.0018844441552436919) + d240 * t12_tmp * 0.0023877597358566908) - d240 *
    t13_tmp * 0.0070349673396768973) - d242 * t12_tmp * 0.0070349673396768973) -
                      d242 * t13_tmp * 0.0023877597358566908) +
                     c_Bstack_hat_idx_8_tmp_tmp * t24 * 0.0047417874557495474) -
                    c_Bstack_hat_idx_8_tmp_tmp * t25 * 0.0047417874557495474) +
                   d244 * t12_tmp * t13_tmp * 0.0047417874557495474) + d179 *
                  t12_tmp * 0.0070349673396768973) + d179 * t13_tmp *
                 0.0023877597358566908) - d182 * t12_tmp * 0.0070349673396768973)
               + Bstack_hat_idx_7_tmp_tmp * t12_tmp * t13_tmp *
               0.0047417874557495474) - d182 * t13_tmp * 0.0023877597358566908)
             - b_Bstack_hat_idx_7_tmp_tmp * t12_tmp * t13_tmp *
             0.0047417874557495474) - Bstack_hat_idx_6_tmp * t12_tmp * t13_tmp *
            0.0047417874557495474) - e_Bstack_hat_idx_6_tmp_tmp * t12_tmp *
           t13_tmp * 0.0047417874557495474) + d247 * t12_tmp * t13_tmp *
          0.0047417874557495474) + d248 * t12_tmp * t13_tmp *
         0.0047417874557495474) - d249 * t12_tmp * t13_tmp *
        0.0047417874557495474) - b_Bstack_hat_idx_6_tmp_tmp * t12_tmp *
       0.0018844441552436919) + b_Bstack_hat_idx_6_tmp_tmp * t13_tmp *
      0.0249897377710987) + c_Bstack_hat_idx_8_tmp_tmp * t12_tmp * t13_tmp *
     0.0070637353101292259) + 0.029215674316829018;
  b_x[7] = Bstack_hat_idx_1;
  b_x[14] = Bstack_hat_idx_3;
  b_x[21] = Bstack_hat_idx_6;
  b_x[28] = Bstack_hat_idx_10;
  b_x[35] = Bstack_hat_idx_15;
  b_x[42] = Bstack_hat_idx_21;
  b_x[1] = Bstack_hat_idx_1;
  d2 = t11 * t16;
  d3 = t10 * t18;
  d4 = t10 * t15;
  d5 = t13 * t16;
  d6 = 0.0825 * t5_tmp * t10;
  d7 = -0.0825 * t10 * t8_tmp;
  d8 = 0.088 * t10 * t15;
  d9 = 0.316 * t6_tmp * t10;
  d11 = 0.384 * t10 * t11_tmp;
  d12 = d * t7_tmp;
  d13 = d1 * t7_tmp;
  d14 = d10 * t16;
  d15 = t10 * t8_tmp;
  d16 = d15 * t9_tmp;
  d17 = t11 * t15 * t16;
  d18 = d2 * t18;
  d19 = d3 * t20;
  d20 = d6 * t8_tmp;
  d21 = 0.0825 * t6_tmp * t10;
  d22 = -0.0825 * t8_tmp * t13;
  d23 = d22 * t16;
  d24 = d7 * t10_tmp;
  d25 = -0.0825 * t10 * t9_tmp;
  d26 = d9 * t8_tmp;
  d27 = 0.316 * t6_tmp * t8_tmp;
  d28 = d27 * t16;
  d29 = d11 * t15;
  d11 *= t18;
  d30 = d12 * t15;
  d31 = d13 * t8_tmp;
  d32 = d12 * t18;
  d33 = d13 * t9_tmp;
  d34 = d10 * t8_tmp;
  d35 = d34 * t16;
  d36 = d14 * t9_tmp;
  d37 = t11 * t8_tmp;
  d15 = d15 * t11_tmp * t9_tmp;
  d38 = d37 * t16 * t9_tmp;
  d40 = d16 * t10_tmp;
  d41 = t10 * t11_tmp * t18 * t10_tmp;
  d42 = d17 * t20;
  d43 = d6 * t9_tmp;
  d44 = -0.0825 * t13 * t16 * t9_tmp;
  d9 *= t9_tmp;
  d45 = 0.316 * t6_tmp * t16 * t9_tmp;
  d46 = t13 * t11_tmp;
  d47 = d46 * t16 * t10_tmp;
  d48 = 0.0825 * t4_tmp * t7_tmp;
  d49 = d21 * t11_tmp;
  d50 = d25 * t20;
  d51 = 0.088 * t11 * t16 * t18;
  d52 = 0.088 * t13 * t16 * t20;
  d53 = 0.088 * t10 * t18;
  d54 = 0.384 * t4_tmp * t6_tmp * t7_tmp;
  d55 = 0.316 * t5_tmp * t10;
  d56 = d55 * t11_tmp;
  d57 = 0.316 * t5_tmp * t11_tmp;
  d58 = 0.384 * t11 * t11_tmp;
  d59 = d48 * t11;
  d60 = d48 * t13;
  d61 = d59 * t9_tmp;
  d62 = d60 * t9_tmp;
  d63 = d20 * t10_tmp;
  d64 = d49 * t15;
  d49 *= t18;
  d65 = d107 * t8_tmp;
  d66 = d54 * t9_tmp;
  d67 = d65 * t16;
  d68 = d56 * t15;
  d56 *= t18;
  d69 = d26 * t10_tmp;
  d70 = d57 * t15 * t16;
  d57 = d57 * t16 * t18;
  d71 = d28 * t10_tmp;
  d72 = d58 * t15 * t16;
  d73 = d54 * t8_tmp;
  d74 = d107 * t16 * t9_tmp;
  d58 = d58 * t16 * t18;
  d75 = d102 * t7_tmp;
  d76 = d39 * t11_tmp;
  d77 = t5_tmp * t4_tmp * t7_tmp * t11_tmp;
  d78 = d77 * t18;
  d79 = d31 * t10_tmp;
  d80 = d35 * t20;
  d81 = d33 * t20;
  d82 = d10 * t11_tmp;
  d83 = d82 * t16 * t9_tmp;
  d84 = d33 * t22;
  d85 = d35 * t22;
  d86 = d36 * t10_tmp;
  d37 = d37 * t11_tmp * t16 * t9_tmp;
  d87 = t11 * t11_tmp;
  d88 = d87 * t15 * t16 * t10_tmp;
  d89 = d38 * t10_tmp;
  d90 = d75 * t9_tmp * t10_tmp;
  d91 = d76 * t15;
  d92 = d91 * t16;
  d94 = d61 * t10_tmp;
  d95 = d76 * t16 * t18;
  d96 = d30 * t10_tmp;
  d98 = d32 * t10_tmp;
  d99 = d39 * t15;
  d100 = d43 * t20;
  d101 = d9 * t20;
  d103 = d45 * t20;
  d104 = t5_tmp * t4_tmp * t7_tmp * t8_tmp;
  d105 = d104 * t9_tmp;
  d77 *= t15;
  d106 = d66 * t10_tmp;
  d108 = d67 * t10_tmp;
  d109 = d105 * t20;
  d110 = d31 * t11_tmp;
  d111 = d13 * t11_tmp * t9_tmp * t10_tmp;
  d112 = d34 * t11_tmp;
  d113 = d112 * t16 * t10_tmp;
  d114 = Bstack_hat_idx_4_tmp_tmp_tmp * t7_tmp;
  d115 = d114 * t8_tmp * t9_tmp;
  d97 *= t7_tmp;
  d116 = d97 * t8_tmp * t11_tmp;
  d117 = d75 * t8_tmp;
  d118 = d117 * t20;
  d119 = d114 * t15 * t10_tmp;
  d120 = d59 * t8_tmp;
  d121 = d120 * t20;
  d122 = d48 * t8_tmp * t13;
  d123 = d122 * t20;
  d124 = d115 * t12_tmp;
  d125 = d93 * t11_tmp;
  d_Bstack_hat_idx_3_tmp = d73 * t20;
  Bstack_hat_idx_13_tmp_tmp = d74 * t20;
  b_Bstack_hat_idx_13_tmp_tmp = d97 * t11_tmp * t9_tmp * t10_tmp;
  c_Bstack_hat_idx_3_tmp = d93 * t8_tmp * t11_tmp;
  b_Bstack_hat_idx_6_tmp_tmp = c_Bstack_hat_idx_3_tmp * t16 * t10_tmp;
  d_Bstack_hat_idx_6_tmp_tmp = d104 * t11_tmp * t9_tmp * t10_tmp;
  Bstack_hat_idx_12_tmp = d5 * t22;
  e_Bstack_hat_idx_3_tmp = d23 * t10_tmp;
  f_Bstack_hat_idx_3_tmp = 0.088 * t10 * t8_tmp * t9_tmp * t10_tmp;
  b_Bstack_hat_idx_3_tmp = d44 * t20;
  Bstack_hat_idx_3_tmp = 0.088 * t11 * t15 * t16;
  s = d114 * t18 * t10_tmp;
  smax = 0.088 * t11 * t8_tmp * t16 * t9_tmp * t10_tmp;
  b_x[8] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((t10 *
    0.63699186963741528 + t16 * 0.010518859048328961) + 0.316 * t5_tmp *
    3.4355396338718371) - 0.316 * t6_tmp * 0.97726851144741667) - t4_tmp *
    t7_tmp * 0.00044398158881385491) + d4 * 0.025052011110203509) + d2 *
    0.53245576672167294) + d3 * 0.0321778928866176) + d5 * 0.01807861861545219)
    - d6 * 0.97726851144741667) - d21 * 3.4355396338718371) - d7 *
    0.02006356734599796) - d25 * 0.15405567959822861) - d12 *
    0.0095414784959169073) - d13 * 0.0054728514277935271) - d14 *
    0.30034486460496579) - d16 * 0.0074623335715357092) + d17 *
    0.0321778928866176) + d18 * 0.025052011110203509) - d19 *
    0.0065540822374886409) - d4 * t24 * 0.001765933827532306) + d5 * t20 *
    0.0012722430112630651) + d3 * t22 * 0.0012722430112630651) -
    Bstack_hat_idx_12_tmp * 0.0065540822374886409) - d20 * 0.02006356734599796)
    - d43 * 0.15405567959822861) + d7 * t11_tmp * 0.13542482002433209) + d24 *
    0.33125228086274061) - d23 * 0.02006356734599796) - d44 *
    0.15405567959822861) + d8 * t12_tmp * 0.01249486888554935) + d8 * t13_tmp *
    0.000942222077621846) - d26 * 0.02006356734599796) - d9 *
    0.15405567959822861) - d28 * 0.02006356734599796) - d45 *
    0.15405567959822861) + d29 * 0.33125228086274061) + d11 *
    0.33125228086274061) - 0.384 * t10 * t15 * t10_tmp * 0.13542482002433209) -
    0.384 * t10 * t18 * t10_tmp * 0.13542482002433209) - d30 *
    0.0074623335715357092) - d31 * 0.0154076417859336) + d32 *
    0.0074623335715357092) + d33 * 0.0122815866196153) + d35 *
    0.0122815866196153) + d36 * 0.0154076417859336) + d15 *
    0.0016408606364898271) + d38 * 0.0074623335715357092) + d40 *
    2.4873130689434881E-5) - d41 * 0.01073500939031497) - d42 *
    0.0065540822374886409) + d47 * 0.01073500939031497) + d17 * t22 *
    0.0012722430112630651) + d4 * t12_tmp * t13_tmp * 0.0023708937278747728) -
    d18 * t24 * 0.001765933827532306) - d19 * t25 * 0.001765933827532306) -
    Bstack_hat_idx_12_tmp * t25 * 0.001765933827532306) - d102 * t7_tmp * t8_tmp
    * 0.15405567959822861) - 0.0825 * t4_tmp * t7_tmp * t11 * t8_tmp *
    0.15405567959822861) + -0.0825 * t5_tmp * t4_tmp * t7_tmp * t9_tmp *
    0.02006356734599796) - 0.0825 * t4_tmp * t7_tmp * t8_tmp * t13 *
    0.15405567959822861) + d20 * t11_tmp * 0.13542482002433209) + d61 *
    0.02006356734599796) + d62 * 0.02006356734599796) + d63 *
    0.33125228086274061) - d64 * 0.33125228086274061) - d49 *
    0.33125228086274061) + d21 * t15 * t10_tmp * 0.13542482002433209) + d21 *
    t18 * t10_tmp * 0.13542482002433209) + d22 * t11_tmp * t16 *
    0.13542482002433209) + e_Bstack_hat_idx_3_tmp * 0.33125228086274061) + d24 *
    t12_tmp * 0.01249486888554935) + d24 * t13_tmp * 0.000942222077621846) - d50
    * t12_tmp * 0.000942222077621846) + d51 * t12_tmp * 0.01249486888554935) +
    d50 * t13_tmp * 0.01249486888554935) - d25 * t12_tmp * t22 *
    0.000942222077621846) + d51 * t13_tmp * 0.000942222077621846) + d25 * t22 *
    t13_tmp * 0.01249486888554935) + d52 * t12_tmp * 0.01249486888554935) + d53 *
    t12_tmp * t22 * 0.01249486888554935) + d52 * t13_tmp * 0.000942222077621846)
    + d53 * t22 * t13_tmp * 0.000942222077621846) + d73 * 0.15405567959822861) -
    d66 * 0.02006356734599796) - d67 * 0.02006356734599796) + d68 *
    0.33125228086274061) + d26 * t11_tmp * 0.13542482002433209) + d56 *
    0.33125228086274061) - d74 * 0.15405567959822861) - d55 * t15 * t10_tmp *
    0.13542482002433209) + d69 * 0.33125228086274061) + d70 *
    0.33125228086274061) + d27 * t11_tmp * t16 * 0.13542482002433209) - d55 *
    t18 * t10_tmp * 0.13542482002433209) + d57 * 0.33125228086274061) - 0.316 *
    t5_tmp * t15 * t16 * t10_tmp * 0.13542482002433209) + d71 *
    0.33125228086274061) - 0.316 * t5_tmp * t16 * t18 * t10_tmp *
    0.13542482002433209) + d72 * 0.33125228086274061) + d58 *
    0.33125228086274061) + d29 * t12_tmp * 0.01249486888554935) - 0.384 * t11 *
    t15 * t16 * t10_tmp * 0.13542482002433209) + d29 * t13_tmp *
    0.000942222077621846) + d11 * t12_tmp * 0.01249486888554935) - 0.384 * t11 *
    t16 * t18 * t10_tmp * 0.13542482002433209) + d11 * t13_tmp *
    0.000942222077621846) + d12 * t8_tmp * t9_tmp * 0.01425176355282819) + d77 *
    0.0016408606364898271) - d1 * t7_tmp * t8_tmp * t11_tmp *
    2.4873130689434881E-5) - d78 * 0.0016408606364898271) + d96 *
    2.4873130689434881E-5) + d79 * 0.0016408606364898271) - d98 *
    2.4873130689434881E-5) + d83 * 2.4873130689434881E-5) - d81 *
    0.01073500939031497) - d80 * 0.01073500939031497) + d84 *
    0.01073500939031497) + d85 * 0.01073500939031497) - d86 *
    0.0016408606364898271) - d37 * 0.0016408606364898271) + d15 * t12_tmp *
    0.0011938798679283461) - d89 * 2.4873130689434881E-5) - d88 *
    0.01073500939031497) - d15 * t13_tmp * 0.0035174836698384491) + d40 * t24 *
    0.0023708937278747728) + d41 * t12_tmp * 0.0035174836698384491) - d40 * t25 *
    0.0023708937278747728) - d47 * t12_tmp * 0.0035174836698384491) + d41 *
    t13_tmp * 0.0011938798679283461) - d47 * t13_tmp * 0.0011938798679283461) -
    d42 * t25 * 0.001765933827532306) + d18 * t12_tmp * t13_tmp *
    0.0023708937278747728) - d19 * t12_tmp * t13_tmp * 0.0023708937278747728) -
    d5 * t12_tmp * t22 * t13_tmp * 0.0023708937278747728) - d75 * t11_tmp *
    t9_tmp * 0.13542482002433209) - d59 * t11_tmp * t9_tmp * 0.13542482002433209)
    - d90 * 0.33125228086274061) - d60 * t11_tmp * t9_tmp * 0.13542482002433209)
    + d92 * 0.33125228086274061) - d94 * 0.33125228086274061) + d95 *
    0.33125228086274061) - d62 * t10_tmp * 0.33125228086274061) - d99 * t16 *
    t10_tmp * 0.13542482002433209) + d63 * t12_tmp * 0.01249486888554935) - d39 *
    t16 * t18 * t10_tmp * 0.13542482002433209) - d64 * t12_tmp *
    0.01249486888554935) + d63 * t13_tmp * 0.000942222077621846) - d64 * t13_tmp
    * 0.000942222077621846) - d49 * t12_tmp * 0.01249486888554935) - d100 *
    t12_tmp * 0.000942222077621846) - d49 * t13_tmp * 0.000942222077621846) +
    d100 * t13_tmp * 0.01249486888554935) - d43 * t12_tmp * t22 *
    0.000942222077621846) + d43 * t22 * t13_tmp * 0.01249486888554935) +
    e_Bstack_hat_idx_3_tmp * t12_tmp * 0.01249486888554935) -
    f_Bstack_hat_idx_3_tmp * t12_tmp * 0.000942222077621846) + d22 * t16 *
    t10_tmp * t13_tmp * 0.000942222077621846) + f_Bstack_hat_idx_3_tmp * t13_tmp
    * 0.01249486888554935) - b_Bstack_hat_idx_3_tmp * t12_tmp *
    0.000942222077621846) + Bstack_hat_idx_3_tmp * t12_tmp * t22 *
    0.01249486888554935) + b_Bstack_hat_idx_3_tmp * t13_tmp *
    0.01249486888554935) - d44 * t12_tmp * t22 * 0.000942222077621846) +
    Bstack_hat_idx_3_tmp * t22 * t13_tmp * 0.000942222077621846) + d44 * t22 *
    t13_tmp * 0.01249486888554935) + d54 * t11_tmp * t9_tmp *
    0.13542482002433209) + d65 * t11_tmp * t16 * 0.13542482002433209) + d106 *
    0.33125228086274061) + d108 * 0.33125228086274061) + d68 * t12_tmp *
    0.01249486888554935) + d68 * t13_tmp * 0.000942222077621846) + d56 * t12_tmp
    * 0.01249486888554935) + d56 * t13_tmp * 0.000942222077621846) + d69 *
    t12_tmp * 0.01249486888554935) + d70 * t12_tmp * 0.01249486888554935) + d69 *
    t13_tmp * 0.000942222077621846) + d70 * t13_tmp * 0.000942222077621846) +
    d57 * t12_tmp * 0.01249486888554935) + d57 * t13_tmp * 0.000942222077621846)
    - d101 * t12_tmp * 0.000942222077621846) + d71 * t12_tmp *
    0.01249486888554935) + d101 * t13_tmp * 0.01249486888554935) - d9 * t12_tmp *
    t22 * 0.000942222077621846) + d71 * t13_tmp * 0.000942222077621846) + d72 *
    t12_tmp * 0.01249486888554935) + d9 * t22 * t13_tmp * 0.01249486888554935) +
    d72 * t13_tmp * 0.000942222077621846) - d103 * t12_tmp *
    0.000942222077621846) + d58 * t12_tmp * 0.01249486888554935) + d103 *
    t13_tmp * 0.01249486888554935) - d45 * t12_tmp * t22 * 0.000942222077621846)
    + d58 * t13_tmp * 0.000942222077621846) + d45 * t22 * t13_tmp *
    0.01249486888554935) - d109 * 0.01310816447497728) + d77 * t12_tmp *
    0.0011938798679283461) + d105 * t22 * 0.00254448602252613) - d77 * t13_tmp *
    0.0035174836698384491) + d105 * t24 * 0.003531867655064613) - d78 * t12_tmp *
    0.0011938798679283461) - d110 * t24 * 0.0023708937278747728) + d111 *
    0.015652650497503411) + d113 * 0.015652650497503411) + d110 * t25 *
    0.0023708937278747728) + d78 * t13_tmp * 0.0035174836698384491) + d79 *
    t12_tmp * 0.0011938798679283461) - d79 * t13_tmp * 0.0035174836698384491) +
    d96 * t24 * 0.0023708937278747728) - d12 * t15 * t10_tmp * t25 *
    0.0023708937278747728) - d12 * t18 * t10_tmp * t24 * 0.0023708937278747728)
    + d1 * t7_tmp * t9_tmp * t20 * t12_tmp * 0.0035174836698384491) + d * t7_tmp
    * t18 * t10_tmp * t25 * 0.0023708937278747728) + d80 * t12_tmp *
    0.0035174836698384491) + d81 * t13_tmp * 0.0011938798679283461) - d33 *
    t12_tmp * t22 * 0.0035174836698384491) + d80 * t13_tmp *
    0.0011938798679283461) - d35 * t12_tmp * t22 * 0.0035174836698384491) + d83 *
    t24 * 0.0023708937278747728) - d83 * t25 * 0.0023708937278747728) - d84 *
    t13_tmp * 0.0011938798679283461) - d85 * t13_tmp * 0.0011938798679283461) -
    d86 * t12_tmp * 0.0011938798679283461) + d86 * t13_tmp *
    0.0035174836698384491) - d37 * t12_tmp * 0.0011938798679283461) + d37 *
    t13_tmp * 0.0035174836698384491) + d88 * t12_tmp * 0.0035174836698384491) +
    d88 * t13_tmp * 0.0011938798679283461) - d89 * t24 * 0.0023708937278747728)
    + d89 * t25 * 0.0023708937278747728) + d40 * t12_tmp * t13_tmp *
    0.003531867655064613) - d42 * t12_tmp * t13_tmp * 0.0023708937278747728) -
    d124 * 0.0249897377710987) + d116 * t12_tmp * 0.000942222077621846) - d118 *
    t12_tmp * 0.000942222077621846) - d115 * t13_tmp * 0.0018844441552436919) -
    d116 * t13_tmp * 0.01249486888554935) + d118 * t13_tmp * 0.01249486888554935)
    - d117 * t12_tmp * t22 * 0.000942222077621846) + d117 * t22 * t13_tmp *
    0.01249486888554935) - d90 * t12_tmp * 0.01249486888554935) - d119 * t12_tmp
    * 0.000942222077621846) - d121 * t12_tmp * 0.000942222077621846) - d90 *
    t13_tmp * 0.000942222077621846) + d92 * t12_tmp * 0.01249486888554935) +
    d119 * t13_tmp * 0.01249486888554935) + d121 * t13_tmp * 0.01249486888554935)
    - d120 * t12_tmp * t22 * 0.000942222077621846) - d123 * t12_tmp *
    0.000942222077621846) + s * t12_tmp * 0.000942222077621846) + d92 * t13_tmp *
    0.000942222077621846) + d120 * t22 * t13_tmp * 0.01249486888554935) - d94 *
    t12_tmp * 0.01249486888554935) + d123 * t13_tmp * 0.01249486888554935) -
    d122 * t12_tmp * t22 * 0.000942222077621846) + d95 * t12_tmp *
    0.01249486888554935) - s * t13_tmp * 0.01249486888554935) - d125 * t16 *
    t9_tmp * t12_tmp * 0.000942222077621846) - d59 * t9_tmp * t10_tmp * t13_tmp *
    0.000942222077621846) + d122 * t22 * t13_tmp * 0.01249486888554935) - d48 *
    t13 * t9_tmp * t10_tmp * t12_tmp * 0.01249486888554935) + d39 * t11_tmp *
    t16 * t18 * t13_tmp * 0.000942222077621846) + 0.088 * t5_tmp * t6_tmp *
    t11_tmp * t16 * t9_tmp * t13_tmp * 0.01249486888554935) - 0.0825 * t4_tmp *
    t7_tmp * t13 * t9_tmp * t10_tmp * t13_tmp * 0.000942222077621846) + smax *
    t12_tmp * 0.000942222077621846) - smax * t13_tmp * 0.01249486888554935) +
    d_Bstack_hat_idx_3_tmp * t12_tmp * 0.000942222077621846) -
    d_Bstack_hat_idx_3_tmp * t13_tmp * 0.01249486888554935) + d73 * t12_tmp *
    t22 * 0.000942222077621846) - d73 * t22 * t13_tmp * 0.01249486888554935) +
    d106 * t12_tmp * 0.01249486888554935) + d108 * t12_tmp * 0.01249486888554935)
    + d106 * t13_tmp * 0.000942222077621846) + d108 * t13_tmp *
    0.000942222077621846) - Bstack_hat_idx_13_tmp_tmp * t12_tmp *
    0.000942222077621846) + Bstack_hat_idx_13_tmp_tmp * t13_tmp *
    0.01249486888554935) - d74 * t12_tmp * t22 * 0.000942222077621846) + d74 *
    t22 * t13_tmp * 0.01249486888554935) - d_Bstack_hat_idx_6_tmp_tmp *
    0.02147001878062994) - d105 * t12_tmp * t13_tmp * 0.0047417874557495474) -
                       d110 * t12_tmp * t13_tmp * 0.003531867655064613) - d109 *
                      t25 * 0.003531867655064613) + d96 * t12_tmp * t13_tmp *
                     0.003531867655064613) + d111 * t25 * 0.003531867655064613)
                   + d113 * t25 * 0.003531867655064613) - d98 * t12_tmp *
                  t13_tmp * 0.003531867655064613) + d83 * t12_tmp * t13_tmp *
                 0.003531867655064613) - d89 * t12_tmp * t13_tmp *
                0.003531867655064613) + d124 * t22 * 0.0249897377710987) + d115 *
              t22 * t13_tmp * 0.0018844441552436919) +
             b_Bstack_hat_idx_13_tmp_tmp * t12_tmp * 0.0249897377710987) +
            b_Bstack_hat_idx_6_tmp_tmp * t12_tmp * 0.0249897377710987) +
           b_Bstack_hat_idx_13_tmp_tmp * t13_tmp * 0.0018844441552436919) +
          b_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0018844441552436919) +
         d_Bstack_hat_idx_6_tmp_tmp * t12_tmp * 0.0070349673396768973) +
        d_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.0023877597358566908) - d109 *
       t12_tmp * t13_tmp * 0.0047417874557495474) + d111 * t12_tmp * t13_tmp *
      0.0047417874557495474) + d113 * t12_tmp * t13_tmp * 0.0047417874557495474)
    + 1.0429491735054091;
  b_x[15] = Bstack_hat_idx_4;
  b_x[22] = Bstack_hat_idx_7;
  b_x[29] = Bstack_hat_idx_11;
  b_x[36] = Bstack_hat_idx_16;
  b_x[43] = Bstack_hat_idx_22;
  b_x[2] = Bstack_hat_idx_3;
  b_x[9] = Bstack_hat_idx_4;
  d = t13 * t15;
  d1 = t13 * t18;
  d2 = t11 * t22;
  d3 = 0.0825 * t5_tmp * t8_tmp;
  d4 = -0.0825 * t11 * t8_tmp;
  d5 = d10 * t9_tmp;
  d6 = t8_tmp * t13;
  d7 = d6 * t9_tmp;
  d8 = d87 * t10_tmp;
  d9 = 0.0825 * t5_tmp * t9_tmp;
  d11 = -0.0825 * t11 * t9_tmp;
  d12 = d * t20;
  d13 = 0.088 * t11 * t20;
  d14 = 0.088 * t13 * t18;
  d15 = 0.384 * t13 * t11_tmp;
  d16 = d3 * t10_tmp;
  d17 = 0.0825 * t6_tmp * t11_tmp;
  d18 = d17 * t15;
  d17 *= t18;
  d19 = d4 * t10_tmp;
  d20 = d9 * t20;
  d21 = d15 * t18;
  d22 = d34 * t20;
  d23 = d82 * t9_tmp;
  d24 = d34 * t22;
  d25 = d5 * t10_tmp;
  d6 = d6 * t11_tmp * t9_tmp;
  d26 = d46 * t15 * t10_tmp;
  d27 = d7 * t10_tmp;
  d28 = d76 * t18;
  d29 = d107 * t9_tmp;
  d30 = d11 * t20;
  d31 = 0.088 * t13 * t15;
  d_Bstack_hat_idx_3_tmp = d125 * t9_tmp;
  Bstack_hat_idx_13_tmp_tmp = 0.088 * t8_tmp * t13 * t9_tmp * t10_tmp;
  b_Bstack_hat_idx_13_tmp_tmp = d65 * t10_tmp;
  b_Bstack_hat_idx_6_tmp_tmp = d29 * t20;
  d_Bstack_hat_idx_6_tmp_tmp = d112 * t10_tmp;
  Bstack_hat_idx_12_tmp = c_Bstack_hat_idx_3_tmp * t10_tmp;
  e_Bstack_hat_idx_3_tmp = 0.384 * t13 * t11_tmp * t15;
  b_x[16] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((((((t11 * 0.01807861861545219 + t13 *
    0.53245576672167294) - 0.0825 * t5_tmp * 0.97726851144741667) - 0.0825 *
    t6_tmp * 3.4355396338718371) + d10 * 0.30034486460496579) + d *
    0.0321778928866176) + t11 * t20 * 0.0012722430112630651) + d1 *
    0.025052011110203509) - d2 * 0.0065540822374886409) - d3 *
    0.02006356734599796) - d9 * 0.15405567959822861) - d4 * 0.02006356734599796)
    - d11 * 0.15405567959822861) - d34 * 0.0122815866196153) - d5 *
    0.0154076417859336) + d7 * 0.0074623335715357092) + d8 * 0.01073500939031497)
    - d12 * 0.0065540822374886409) + d * t22 * 0.0012722430112630651) - d1 * t24
    * 0.001765933827532306) - d2 * t25 * 0.001765933827532306) + d3 * t11_tmp *
    0.13542482002433209) + d16 * 0.33125228086274061) - d18 *
    0.33125228086274061) + d4 * t11_tmp * 0.13542482002433209) - d17 *
    0.33125228086274061) + 0.0825 * t6_tmp * t15 * t10_tmp * 0.13542482002433209)
    + d19 * 0.33125228086274061) + 0.0825 * t6_tmp * t18 * t10_tmp *
    0.13542482002433209) + d13 * t12_tmp * 0.01249486888554935) + d14 * t12_tmp *
    0.01249486888554935) + d13 * t13_tmp * 0.000942222077621846) + d14 * t13_tmp
    * 0.000942222077621846) + d65 * 0.02006356734599796) + d29 *
    0.15405567959822861) + d15 * t15 * 0.33125228086274061) + d21 *
    0.33125228086274061) - 0.384 * t13 * t15 * t10_tmp * 0.13542482002433209) -
    0.384 * t13 * t18 * t10_tmp * 0.13542482002433209) - d23 *
    2.4873130689434881E-5) + d22 * 0.01073500939031497) - d24 *
    0.01073500939031497) + d25 * 0.0016408606364898271) - d6 *
    0.0016408606364898271) - d27 * 2.4873130689434881E-5) - d26 *
    0.01073500939031497) - d8 * t12_tmp * 0.0035174836698384491) - d8 * t13_tmp *
    0.0011938798679283461) - d12 * t25 * 0.001765933827532306) + d1 * t12_tmp *
    t13_tmp * 0.0023708937278747728) - t11 * t12_tmp * t22 * t13_tmp *
    0.0023708937278747728) - d91 * 0.33125228086274061) - d28 *
    0.33125228086274061) + d99 * t10_tmp * 0.13542482002433209) + d39 * t18 *
    t10_tmp * 0.13542482002433209) + d16 * t12_tmp * 0.01249486888554935) - d18 *
    t12_tmp * 0.01249486888554935) + d16 * t13_tmp * 0.000942222077621846) - d18
    * t13_tmp * 0.000942222077621846) - d17 * t12_tmp * 0.01249486888554935) -
    d20 * t12_tmp * 0.000942222077621846) - d17 * t13_tmp * 0.000942222077621846)
    + d19 * t12_tmp * 0.01249486888554935) + d20 * t13_tmp * 0.01249486888554935)
    - d9 * t12_tmp * t22 * 0.000942222077621846) + d19 * t13_tmp *
    0.000942222077621846) + d9 * t22 * t13_tmp * 0.01249486888554935) - d30 *
    t12_tmp * 0.000942222077621846) + d30 * t13_tmp * 0.01249486888554935) - d11
    * t12_tmp * t22 * 0.000942222077621846) + d11 * t22 * t13_tmp *
    0.01249486888554935) + d31 * t12_tmp * t22 * 0.01249486888554935) + d31 *
    t22 * t13_tmp * 0.000942222077621846) - d107 * t8_tmp * t11_tmp *
    0.13542482002433209) - 0.384 * t5_tmp * t6_tmp * t8_tmp * t10_tmp *
    0.33125228086274061) + e_Bstack_hat_idx_3_tmp * t12_tmp *
    0.01249486888554935) + e_Bstack_hat_idx_3_tmp * t13_tmp *
    0.000942222077621846) + d21 * t12_tmp * 0.01249486888554935) + d21 * t13_tmp
    * 0.000942222077621846) - d_Bstack_hat_idx_6_tmp_tmp * 0.015652650497503411)
    - d22 * t12_tmp * 0.0035174836698384491) - d22 * t13_tmp *
    0.0011938798679283461) + d34 * t12_tmp * t22 * 0.0035174836698384491) - d23 *
    t24 * 0.0023708937278747728) + d23 * t25 * 0.0023708937278747728) + d24 *
    t13_tmp * 0.0011938798679283461) + d25 * t12_tmp * 0.0011938798679283461) -
    d25 * t13_tmp * 0.0035174836698384491) - d6 * t12_tmp *
    0.0011938798679283461) + d6 * t13_tmp * 0.0035174836698384491) + d26 *
    t12_tmp * 0.0035174836698384491) + d26 * t13_tmp * 0.0011938798679283461) -
    d27 * t24 * 0.0023708937278747728) + d27 * t25 * 0.0023708937278747728) -
    d12 * t12_tmp * t13_tmp * 0.0023708937278747728) - d91 * t12_tmp *
    0.01249486888554935) - d91 * t13_tmp * 0.000942222077621846) - d28 * t12_tmp
                      * 0.01249486888554935) + d_Bstack_hat_idx_3_tmp * t12_tmp *
                     0.000942222077621846) - d28 * t13_tmp *
                    0.000942222077621846) - d_Bstack_hat_idx_3_tmp * t13_tmp *
                   0.01249486888554935) + Bstack_hat_idx_13_tmp_tmp * t12_tmp *
                  0.000942222077621846) - Bstack_hat_idx_13_tmp_tmp * t13_tmp *
                 0.01249486888554935) - b_Bstack_hat_idx_13_tmp_tmp * t12_tmp *
                0.01249486888554935) - b_Bstack_hat_idx_13_tmp_tmp * t13_tmp *
               0.000942222077621846) + b_Bstack_hat_idx_6_tmp_tmp * t12_tmp *
              0.000942222077621846) - b_Bstack_hat_idx_6_tmp_tmp * t13_tmp *
             0.01249486888554935) + d29 * t12_tmp * t22 * 0.000942222077621846)
           - d29 * t22 * t13_tmp * 0.01249486888554935) -
          d_Bstack_hat_idx_6_tmp_tmp * t25 * 0.003531867655064613) - d23 *
         t12_tmp * t13_tmp * 0.003531867655064613) - d27 * t12_tmp * t13_tmp *
        0.003531867655064613) - Bstack_hat_idx_12_tmp * t12_tmp *
       0.0249897377710987) - Bstack_hat_idx_12_tmp * t13_tmp *
      0.0018844441552436919) - d_Bstack_hat_idx_6_tmp_tmp * t12_tmp * t13_tmp *
     0.0047417874557495474) + 0.1169633856586688;
  b_x[23] = Bstack_hat_idx_8;
  b_x[30] = Bstack_hat_idx_12;
  b_x[37] = Bstack_hat_idx_17;
  b_x[44] = Bstack_hat_idx_23;
  b_x[3] = Bstack_hat_idx_6;
  b_x[10] = Bstack_hat_idx_7;
  b_x[17] = Bstack_hat_idx_8;
  d_Bstack_hat_idx_3_tmp = t8_tmp * t9_tmp;
  Bstack_hat_idx_13_tmp_tmp = t18 * t20;
  b_Bstack_hat_idx_13_tmp_tmp = -0.0825 * t8_tmp * t10_tmp;
  b_Bstack_hat_idx_6_tmp_tmp = -0.0825 * t9_tmp * t20;
  d_Bstack_hat_idx_6_tmp_tmp = 0.384 * t11_tmp * t15;
  Bstack_hat_idx_12_tmp = 0.384 * t11_tmp * t18;
  e_Bstack_hat_idx_3_tmp = Bstack_hat_idx_13_tmp * t9_tmp;
  f_Bstack_hat_idx_3_tmp = d_Bstack_hat_idx_3_tmp * t10_tmp;
  b_Bstack_hat_idx_3_tmp = t11_tmp * t18 * t10_tmp;
  Bstack_hat_idx_3_tmp = 0.088 * t8_tmp * t9_tmp * t10_tmp;
  b_x[24] = ((((((((((((((((((((((((((((((((((((((((t15 * 0.025052011110203509 +
    t18 * 0.0321778928866176) - -0.0825 * t8_tmp * 0.02006356734599796) -
    -0.0825 * t9_tmp * 0.15405567959822861) + 0.384 * t11_tmp *
    0.33125228086274061) - 0.384 * t10_tmp * 0.13542482002433209) -
    d_Bstack_hat_idx_3_tmp * 0.0074623335715357092) - Bstack_hat_idx_13_tmp_tmp *
    0.0065540822374886409) - t15 * t24 * 0.001765933827532306) + t18 * t22 *
    0.0012722430112630651) + -0.0825 * t8_tmp * t11_tmp * 0.13542482002433209) +
    b_Bstack_hat_idx_13_tmp_tmp * 0.33125228086274061) + 0.088 * t15 * t12_tmp *
    0.01249486888554935) + 0.088 * t15 * t13_tmp * 0.000942222077621846) +
    e_Bstack_hat_idx_3_tmp * 0.0016408606364898271) + f_Bstack_hat_idx_3_tmp *
    2.4873130689434881E-5) - b_Bstack_hat_idx_3_tmp * 0.01073500939031497) + t15
    * t12_tmp * t13_tmp * 0.0023708937278747728) - Bstack_hat_idx_13_tmp_tmp *
    t25 * 0.001765933827532306) + b_Bstack_hat_idx_13_tmp_tmp * t12_tmp *
    0.01249486888554935) + b_Bstack_hat_idx_13_tmp_tmp * t13_tmp *
    0.000942222077621846) - b_Bstack_hat_idx_6_tmp_tmp * t12_tmp *
    0.000942222077621846) + b_Bstack_hat_idx_6_tmp_tmp * t13_tmp *
    0.01249486888554935) - -0.0825 * t9_tmp * t12_tmp * t22 *
    0.000942222077621846) + -0.0825 * t9_tmp * t22 * t13_tmp *
    0.01249486888554935) + 0.088 * t18 * t12_tmp * t22 * 0.01249486888554935) +
    0.088 * t18 * t22 * t13_tmp * 0.000942222077621846) +
    d_Bstack_hat_idx_6_tmp_tmp * t12_tmp * 0.01249486888554935) +
    d_Bstack_hat_idx_6_tmp_tmp * t13_tmp * 0.000942222077621846) +
                        Bstack_hat_idx_12_tmp * t12_tmp * 0.01249486888554935) +
                       Bstack_hat_idx_12_tmp * t13_tmp * 0.000942222077621846) +
                      e_Bstack_hat_idx_3_tmp * t12_tmp * 0.0011938798679283461)
                     - e_Bstack_hat_idx_3_tmp * t13_tmp * 0.0035174836698384491)
                    + f_Bstack_hat_idx_3_tmp * t24 * 0.0023708937278747728) +
                   b_Bstack_hat_idx_3_tmp * t12_tmp * 0.0035174836698384491) -
                  f_Bstack_hat_idx_3_tmp * t25 * 0.0023708937278747728) +
                 b_Bstack_hat_idx_3_tmp * t13_tmp * 0.0011938798679283461) -
                Bstack_hat_idx_13_tmp_tmp * t12_tmp * t13_tmp *
                0.0023708937278747728) - Bstack_hat_idx_3_tmp * t12_tmp *
               0.000942222077621846) + Bstack_hat_idx_3_tmp * t13_tmp *
              0.01249486888554935) + f_Bstack_hat_idx_3_tmp * t12_tmp * t13_tmp *
             0.003531867655064613) + 0.63699186963741528;
  b_x[31] = Bstack_hat_idx_13;
  b_x[38] = Bstack_hat_idx_18;
  b_x[45] = Bstack_hat_idx_24;
  b_x[4] = Bstack_hat_idx_10;
  b_x[11] = Bstack_hat_idx_11;
  b_x[18] = Bstack_hat_idx_12;
  b_x[25] = Bstack_hat_idx_13;
  d_Bstack_hat_idx_3_tmp = t11_tmp * t10_tmp;
  b_x[32] = ((((((((t20 * 0.0012722430112630651 - t22 * 0.0065540822374886409) +
                   d_Bstack_hat_idx_3_tmp * 0.01073500939031497) - t22 * t25 *
                  0.001765933827532306) + 0.088 * t20 * t12_tmp *
                 0.01249486888554935) + 0.088 * t20 * t13_tmp *
                0.000942222077621846) - d_Bstack_hat_idx_3_tmp * t12_tmp *
               0.0035174836698384491) - d_Bstack_hat_idx_3_tmp * t13_tmp *
              0.0011938798679283461) - t12_tmp * t22 * t13_tmp *
             0.0023708937278747728) + 0.01807861861545219;
  b_x[39] = Bstack_hat_idx_19;
  b_x[46] = Bstack_hat_idx_25;
  b_x[5] = Bstack_hat_idx_15;
  b_x[12] = Bstack_hat_idx_16;
  b_x[19] = Bstack_hat_idx_17;
  b_x[26] = Bstack_hat_idx_18;
  b_x[33] = Bstack_hat_idx_19;
  b_x[40] = (((t24 * -0.001765933827532306 + 0.088 * t12_tmp *
               0.01249486888554935) + 0.088 * t13_tmp * 0.000942222077621846) +
             t12_tmp * t13_tmp * 0.0023708937278747728) + 0.025052011110203509;
  b_x[47] = Bstack_hat_idx_26;
  b_x[6] = Bstack_hat_idx_21;
  b_x[13] = Bstack_hat_idx_22;
  b_x[20] = Bstack_hat_idx_23;
  b_x[27] = Bstack_hat_idx_24;
  b_x[34] = Bstack_hat_idx_25;
  b_x[41] = Bstack_hat_idx_26;
  b_x[48] = 0.0012722430112630651;
  memset(&y[0], 0, 49U * sizeof(double));
  for (b_i = 0; b_i < 7; b_i++) {
    ipiv[b_i] = (signed char)(b_i + 1);
  }

  for (j = 0; j < 6; j++) {
    mmj_tmp = 5 - j;
    b_tmp = j << 3;
    jp1j = b_tmp + 2;
    iy = 7 - j;
    jA = 0;
    ix = b_tmp;
    smax = fabs(b_x[b_tmp]);
    for (k = 2; k <= iy; k++) {
      ix++;
      s = fabs(b_x[ix]);
      if (s > smax) {
        jA = k - 1;
        smax = s;
      }
    }

    if (b_x[b_tmp + jA] != 0.0) {
      if (jA != 0) {
        iy = j + jA;
        ipiv[j] = (signed char)(iy + 1);
        ix = j;
        for (k = 0; k < 7; k++) {
          smax = b_x[ix];
          b_x[ix] = b_x[iy];
          b_x[iy] = smax;
          ix += 7;
          iy += 7;
        }
      }

      b_i = (b_tmp - j) + 7;
      for (i = jp1j; i <= b_i; i++) {
        b_x[i - 1] /= b_x[b_tmp];
      }
    }

    iy = b_tmp + 7;
    jA = b_tmp;
    for (jp1j = 0; jp1j <= mmj_tmp; jp1j++) {
      smax = b_x[iy];
      if (b_x[iy] != 0.0) {
        ix = b_tmp + 1;
        b_i = jA + 9;
        i2 = (jA - j) + 14;
        for (i = b_i; i <= i2; i++) {
          b_x[i - 1] += b_x[ix] * -smax;
          ix++;
        }
      }

      iy += 7;
      jA += 7;
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    p[b_i] = (signed char)(b_i + 1);
  }

  for (k = 0; k < 6; k++) {
    i1 = ipiv[k];
    if (i1 > k + 1) {
      iy = p[i1 - 1];
      p[i1 - 1] = p[k];
      p[k] = (signed char)iy;
    }
  }

  for (k = 0; k < 7; k++) {
    jp1j = 7 * (p[k] - 1);
    y[k + jp1j] = 1.0;
    for (j = k + 1; j < 8; j++) {
      b_i = (j + jp1j) - 1;
      if (y[b_i] != 0.0) {
        i2 = j + 1;
        for (i = i2; i < 8; i++) {
          iy = (i + jp1j) - 1;
          y[iy] -= y[b_i] * b_x[(i + 7 * (j - 1)) - 1];
        }
      }
    }
  }

  get_CoriolisVector(*(double (*)[7])&x[0], *(double (*)[7])&x[7], dv3);
  dv4[0] = 0.0;
  d = 9.80665 * t2_tmp * t4_tmp;
  d1 = 9.80665 * t2_tmp * t7_tmp;
  d2 = 9.80665 * t3_tmp * t6_tmp;
  d3 = 9.80665 * t3_tmp * t5_tmp;
  d4 = d * t5_tmp;
  d5 = d * t6_tmp;
  d6 = d2 * t8_tmp;
  d7 = d1 * t9_tmp;
  d8 = d1 * t8_tmp;
  d9 = d2 * t9_tmp;
  d10 = d3 * t11_tmp;
  d11 = d4 * t8_tmp;
  d12 = d4 * t9_tmp;
  d13 = d5 * t11_tmp;
  d14 = d6 * t10_tmp;
  d15 = d7 * t10_tmp;
  d16 = d11 * t10_tmp;
  dv4[1] = ((((((((((((((((((((((((((((((((((((((9.80665 * t2_tmp *
    0.0053687842614745518 - 9.80665 * t3_tmp * 3.10257567176716) - d *
    0.68735331027752622) - d3 * 1.718488169611198) + d1 * 0.02337649457371796) +
    d2 * 0.48883602463324288) + d4 * 0.48883602463324288) + d5 *
    1.718488169611198) + d8 * 0.077053241958930291) + d6 * 0.0100039522535591) -
    d7 * 0.0100039522535591) + d3 * t10_tmp * 0.067711741442479462) + d9 *
    0.077053241958930291) - d10 * 0.1656809687593008) + d11 * 0.0100039522535591)
    + d12 * 0.077053241958930291) - d5 * t10_tmp * 0.067711741442479462) + d13 *
    0.1656809687593008) - d14 * 0.1656809687593008) + d15 * 0.1656809687593008)
    - d6 * t11_tmp * 0.067711741442479462) + d8 * t12_tmp *
    0.00048835210851276567) + d7 * t11_tmp * 0.067711741442479462) - d8 *
    t13_tmp * 0.0062307589653936221) + d9 * t12_tmp * 0.00048835210851276567) -
    d10 * t12_tmp * 0.0062307589653936221) - d9 * t13_tmp *
                        0.0062307589653936221) - d10 * t13_tmp *
                       0.00048835210851276567) - d16 * 0.1656809687593008) - d11
                     * t11_tmp * 0.067711741442479462) + d12 * t12_tmp *
                    0.00048835210851276567) - d12 * t13_tmp *
                   0.0062307589653936221) + d13 * t12_tmp *
                  0.0062307589653936221) + d13 * t13_tmp *
                 0.00048835210851276567) - d14 * t12_tmp * 0.0062307589653936221)
               + d15 * t12_tmp * 0.0062307589653936221) - d14 * t13_tmp *
              0.00048835210851276567) + d15 * t13_tmp * 0.00048835210851276567)
            - d16 * t12_tmp * 0.0062307589653936221) - d16 * t13_tmp *
    0.00048835210851276567;
  d = 9.80665 * t3_tmp * t4_tmp;
  d1 = d3 * t7_tmp;
  d3 = d * t9_tmp;
  d2 *= t7_tmp;
  d4 = d * t8_tmp;
  d5 = d1 * t8_tmp;
  d6 = d1 * t9_tmp;
  d7 = d3 * t10_tmp;
  d8 = d2 * t11_tmp;
  d9 = d5 * t10_tmp;
  d10 = 9.80665 * t3_tmp * t7_tmp;
  dv4[2] = ((((((((((((((((((((((d * 0.02337649457371796 + d10 *
    0.68735331027752622) + d4 * 0.077053241958930291) - d1 * 0.48883602463324288)
    - d3 * 0.0100039522535591) - d2 * 1.718488169611198) - d5 *
    0.0100039522535591) - d6 * 0.077053241958930291) + d7 * 0.1656809687593008)
    + d2 * t10_tmp * 0.067711741442479462) + d4 * t12_tmp *
                        0.00048835210851276567) + d3 * t11_tmp *
                       0.067711741442479462) - d8 * 0.1656809687593008) - d4 *
                     t13_tmp * 0.0062307589653936221) + d9 * 0.1656809687593008)
                   + d5 * t11_tmp * 0.067711741442479462) - d6 * t12_tmp *
                  0.00048835210851276567) + d6 * t13_tmp * 0.0062307589653936221)
                + d7 * t12_tmp * 0.0062307589653936221) + d7 * t13_tmp *
               0.00048835210851276567) - d8 * t12_tmp * 0.0062307589653936221) -
             d8 * t13_tmp * 0.00048835210851276567) + d9 * t12_tmp *
            0.0062307589653936221) + d9 * t13_tmp * 0.00048835210851276567;
  d1 = 9.80665 * t2_tmp * t5_tmp;
  d2 = 9.80665 * t2_tmp * t6_tmp;
  d3 = d * t6_tmp;
  d *= t5_tmp;
  d4 = d1 * t8_tmp;
  d5 = d1 * t9_tmp;
  d6 = d2 * t11_tmp;
  d7 = d3 * t8_tmp;
  d8 = d3 * t9_tmp;
  d9 = d * t11_tmp;
  d11 = d4 * t10_tmp;
  d12 = d7 * t10_tmp;
  dv4[3] = ((((((((((((((((((((((((((d1 * -0.48883602463324288 - d2 *
    1.718488169611198) + d * 1.718488169611198) - d3 * 0.48883602463324288) - d4
    * 0.0100039522535591) - d5 * 0.077053241958930291) + d2 * t10_tmp *
    0.067711741442479462) - d6 * 0.1656809687593008) - d7 * 0.0100039522535591)
    - d * t10_tmp * 0.067711741442479462) - d8 * 0.077053241958930291) + d9 *
    0.1656809687593008) + d11 * 0.1656809687593008) + d4 * t11_tmp *
    0.067711741442479462) - d5 * t12_tmp * 0.00048835210851276567) + d5 *
                       t13_tmp * 0.0062307589653936221) - d6 * t12_tmp *
                      0.0062307589653936221) - d6 * t13_tmp *
                     0.00048835210851276567) + d12 * 0.1656809687593008) + d7 *
                   t11_tmp * 0.067711741442479462) - d8 * t12_tmp *
                  0.00048835210851276567) + d9 * t12_tmp * 0.0062307589653936221)
                + d8 * t13_tmp * 0.0062307589653936221) + d9 * t13_tmp *
               0.00048835210851276567) + d11 * t12_tmp * 0.0062307589653936221)
             + d11 * t13_tmp * 0.00048835210851276567) + d12 * t12_tmp *
            0.0062307589653936221) + d12 * t13_tmp * 0.00048835210851276567;
  d4 = d2 * t9_tmp;
  d2 *= t8_tmp;
  d5 = d10 * t8_tmp;
  d6 = d10 * t9_tmp;
  d7 = d * t9_tmp;
  d *= t8_tmp;
  d8 = d4 * t10_tmp;
  d9 = d5 * t10_tmp;
  d10 = d7 * t10_tmp;
  dv4[4] = ((((((((((((((((((((((d2 * -0.077053241958930291 + d4 *
    0.0100039522535591) - d5 * 0.0100039522535591) - d6 * 0.077053241958930291)
    + d * 0.077053241958930291) - d7 * 0.0100039522535591) - d8 *
    0.1656809687593008) - d2 * t12_tmp * 0.00048835210851276567) - d4 * t11_tmp *
    0.067711741442479462) + d9 * 0.1656809687593008) + d2 * t13_tmp *
                        0.0062307589653936221) + d5 * t11_tmp *
                       0.067711741442479462) - d6 * t12_tmp *
                      0.00048835210851276567) + d6 * t13_tmp *
                     0.0062307589653936221) + d10 * 0.1656809687593008) + d *
                   t12_tmp * 0.00048835210851276567) + d7 * t11_tmp *
                  0.067711741442479462) - d * t13_tmp * 0.0062307589653936221) -
                d8 * t12_tmp * 0.0062307589653936221) - d8 * t13_tmp *
               0.00048835210851276567) + d9 * t12_tmp * 0.0062307589653936221) +
             d9 * t13_tmp * 0.00048835210851276567) + d10 * t12_tmp *
            0.0062307589653936221) + d10 * t13_tmp * 0.00048835210851276567;
  d8 = d1 * t10_tmp;
  d9 = d3 * t10_tmp;
  d10 = d2 * t11_tmp;
  d11 = d6 * t11_tmp;
  d12 = d * t11_tmp;
  d1 *= t11_tmp;
  d3 *= t11_tmp;
  d2 *= t10_tmp;
  d6 *= t10_tmp;
  d *= t10_tmp;
  dv4[5] = ((((((((((((((((((d8 * 0.1656809687593008 + d1 * 0.067711741442479462)
    + d9 * 0.1656809687593008) + d3 * 0.067711741442479462) + d2 *
    0.067711741442479462) - d10 * 0.1656809687593008) + d8 * t12_tmp *
                        0.0062307589653936221) + d6 * 0.067711741442479462) + d8
                      * t13_tmp * 0.00048835210851276567) - d11 *
                     0.1656809687593008) - d * 0.067711741442479462) + d12 *
                   0.1656809687593008) + d9 * t12_tmp * 0.0062307589653936221) +
                 d9 * t13_tmp * 0.00048835210851276567) - d10 * t12_tmp *
                0.0062307589653936221) - d10 * t13_tmp * 0.00048835210851276567)
              - d11 * t12_tmp * 0.0062307589653936221) - d11 * t13_tmp *
             0.00048835210851276567) + d12 * t12_tmp * 0.0062307589653936221) +
    d12 * t13_tmp * 0.00048835210851276567;
  dv4[6] = ((((((((((((((d4 * t12_tmp * 0.0062307589653936221 + d1 * t12_tmp *
    0.00048835210851276567) + d4 * t13_tmp * 0.00048835210851276567) - d5 *
                       t12_tmp * 0.0062307589653936221) - d1 * t13_tmp *
                      0.0062307589653936221) - d5 * t13_tmp *
                     0.00048835210851276567) - d7 * t12_tmp *
                    0.0062307589653936221) - d7 * t13_tmp *
                   0.00048835210851276567) + d3 * t12_tmp *
                  0.00048835210851276567) - d3 * t13_tmp * 0.0062307589653936221)
                + d2 * t12_tmp * 0.00048835210851276567) - d2 * t13_tmp *
               0.0062307589653936221) + d6 * t12_tmp * 0.00048835210851276567) -
             d6 * t13_tmp * 0.0062307589653936221) - d * t12_tmp *
            0.00048835210851276567) + d * t13_tmp * 0.0062307589653936221;
  for (j = 0; j < 7; j++) {
    iy = 7 * j;
    for (k = 6; k >= 0; k--) {
      jA = 7 * k;
      b_i = k + iy;
      d = y[b_i];
      if (d != 0.0) {
        y[b_i] = d / b_x[k + jA];
        for (i = 0; i < k; i++) {
          jp1j = i + iy;
          y[jp1j] -= y[b_i] * b_x[i + jA];
        }
      }
    }

    dv3[j] = ((-dv3[j] - dv4[j]) - F[j]) + u[j];
  }

  for (b_i = 0; b_i < 7; b_i++) {
    d = 0.0;
    for (i2 = 0; i2 < 7; i2++) {
      d += y[b_i + 7 * i2] * dv3[i2];
    }

    F[b_i] = d;
  }

  dxdt[0] = x[7];
  dxdt[1] = x[8];
  dxdt[2] = x[9];
  dxdt[3] = x[10];
  dxdt[4] = x[11];
  dxdt[5] = x[12];
  dxdt[6] = x[13];
  dxdt[7] = F[0];
  dxdt[8] = F[1];
  dxdt[9] = F[2];
  dxdt[10] = F[3];
  dxdt[11] = F[4];
  dxdt[12] = F[5];
  dxdt[13] = F[6];
}

/* End of code generation (plant.c) */
