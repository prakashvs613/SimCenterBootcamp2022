#include <omp.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#define NUM_THREADS 4

static long int numSteps = 100000000;

int main(int argc, char **argv) {

  // perform calculation
  double dx = 1./numSteps;
  double x  = 0;

  int numThreads = 0;

  double pi_global = 0;
  double pi_local[NUM_THREADS]; // maximum number of threads

  for (int i = 0; i<NUM_THREADS; pi_local[i] = 0, i++) {} // initialize pi_local

  omp_set_num_threads(NUM_THREADS); // number of threads requested
  #pragma omp parallel
  {
    int threadID = omp_get_thread_num();
    int numThreads = omp_get_num_threads(); // number of threads available

    printf("%i %i \n", threadID, numThreads);
    for (int i=threadID; i<numSteps; i+=numThreads) {
      x = (i+0.5)*dx;
     // x += dx*numThreads;
      pi_local[threadID] += 4./(1.+x*x);
    }
  }

  for (int i = 0; i < NUM_THREADS; i++) {
    pi_global += pi_local[i];
  }

  pi_global *= dx;

  printf("PI = %16.14f Difference from math.h definition %16.14f \n", pi_global, pi_global -M_PI);
  return 0;
}
