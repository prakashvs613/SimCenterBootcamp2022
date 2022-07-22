#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define LUMP 1

static long int numSteps = 1000000000; // 

int main(int argc, char **argv) {

  int numP, procID;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numP);
  MPI_Comm_rank(MPI_COMM_WORLD, &procID);
  
  double *globalData=NULL;
  double localData[LUMP];

  if (procID == 0) {
    globalData = (double *)malloc(LUMP * numP *sizeof(double));
    for (int i = 0; i<LUMP * numP; i++)
      globalData[i] = 0;
  }

  // perform calculation
  double pi_local  = 0;
  double dx = 1./numSteps;
  double x  = 0; 

  for (int i=procID; i<numSteps; i+=numP) {
        x = i*dx;
	pi_local += 4./(1.+x*x);
  }
  
  pi_local *= dx;
  MPI_Gather(&pi_local, LUMP, MPI_DOUBLE, globalData, LUMP, MPI_DOUBLE, 0, MPI_COMM_WORLD);

  double pi_Global = 0;
  if (procID == 0) {
    for (int i=0; i<numP; i++) {
      pi_Global += globalData[i];
    }
    printf("PI = %16.14f Difference from math.h definition %16.14f \n",pi_Global, pi_Global-M_PI);

    free(globalData);
  }
 
  MPI_Finalize();
  return 0;
}
