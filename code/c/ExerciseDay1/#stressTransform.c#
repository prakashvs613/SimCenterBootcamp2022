// stress transformations
//        Problem 2 for Assignment Day 1
//
//
// write a program to take 3 inputs and output the transformed stress


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 5) {
    // printf("Usage: appName sigx sigy tauxy theta (in degree)\n");
    printf("Usage: appName sigx sigy tauxy theta_incr (in degree)\n");
    exit(-1);
  }

  float sigx = atof(argv[1]);
  float sigy = atof(argv[2]);
  float tauxy = atof(argv[3]);
  //float theta = atof(argv[4]);
  float thetaInc = atof(argv[4]);

  // theta = theta * M_PI / 180;
  thetaInc = thetaInc * M_PI / 180;
  float theta = 0;

  while (theta < 360 * M_PI / 180) {
  double sigxp = sigx * cos(theta) * cos(theta) + sigy * sin(theta) * sin(theta) + 2 * tauxy * sin(theta) * cos(theta);
  double sigyp = sigx * sin(theta) * sin(theta) + sigy * cos(theta) * cos(theta) - 2 * tauxy * sin(theta) * cos(theta);
  double tauxyp = (sigx - sigy) * sin(theta) * cos(theta) + tauxy * (cos(theta) * cos(theta) - sin(theta) * sin(theta));
  printf("theta = %f, sigxp = %f, sigyp = %f, tauxyp = %f.\n", theta*180/M_PI, sigxp, sigyp, tauxyp);
  // printf("Have a Nice Day!\n");
  theta += thetaInc;
}
  return 0;
}

