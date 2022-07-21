#include <omp.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

static long int numSteps = 1000000000;

int main() {

  // perform calculation
  double pi   = 0;
  double dx = 1./numSteps;
  double x  = 0;

  int numThreads = 0;

  double pi_global = 0;
  double pi_local[32]; // maximum number of threads

  for (int i = 0; i<32; pi_local[i] = 0, i++) {} // initialize pi_local

  omp_set_num_threads(4); // number of threads requested
  #pragma omp parallel
  {
      int threadID = omp_get_thread_num();
      int numThreads = omp_get_num_threads(); // number of threads available

      for (int i=threadID; i<numSteps; i+=numThreads) {
        x = (i+0.5)*dx;
        // x += dx*numThreads;
        pi_local[i] += 4./(1.+x*x);
      }
  }

  for (int i = 0; i < numThreads; i++) {
    pi_global += pi_local[i];
  }

  pi_global *= dx;

  printf("PI = %16.14f Difference from math.h definition %16.14f \n", pi_global, pi_global -M_PI);
  return 0;
}
