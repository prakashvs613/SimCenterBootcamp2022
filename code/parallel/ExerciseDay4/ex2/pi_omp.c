#include <omp.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

static long int numSteps = 1000000000;

int main() {

  // perform calculation
  double pi   = 0;
  double dx = 1./numSteps;
  double x  = 0;
  
  int nThreads = 0;

  double pi_global = 0;
  double pi_local[32];
 
  for (int i=0; i<32; pi_local[i] = 0, i++) {} // initialize pi_local

#pragma omp parallel
{


  for (int i=0; i<numSteps; i++) {
    x += dx*numP;
    pi += 4./(1.+x*x);
  }
}
  pi *= dx;
  
  printf("PI = %16.14f Difference from math.h definition %16.14f \n",pi, pi-M_PI);
  return 0;
}
