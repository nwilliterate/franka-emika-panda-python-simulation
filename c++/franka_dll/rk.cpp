/*
 * rk2.c
 *
 * Code generation for function 'rk2'
 *
 */

/* Include files */
#include "pch.h"
#include "rk.h"
#include "plant.h"

/* Function Definitions */
void rk(const double x[14], const double u[7], double T, double dp[14])
{
  double a[14];
  double b_x[14];
  double k2[14];
  double k3[14];
  double d;
  int i;
  plant(x, u, dp);
  for (i = 0; i < 14; i++) {
    d = dp[i] * T;
    dp[i] = d;
    b_x[i] = x[i] + d * 0.5;
  }

  plant(b_x, u, k2);
  for (i = 0; i < 14; i++) {
    d = k2[i] * T;
    k2[i] = d;
    b_x[i] = x[i] + d * 0.5;
  }

  plant(b_x, u, k3);
  for (i = 0; i < 14; i++) {
    d = k3[i] * T;
    k3[i] = d;
    b_x[i] = x[i] + d;
  }

  plant(b_x, u, a);
  for (i = 0; i < 14; i++) {
    dp[i] = x[i] + ((dp[i] + a[i] * T) / 6.0 + (k2[i] + k3[i]) / 3.0);
  }
}

/* End of code generation (rk2.c) */
