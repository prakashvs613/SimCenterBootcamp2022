
// program to read values from a file, each file a csv list of int and two double
// written: fmk

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  if (argc != 2) {
    fprintf(stdout, "ERROR correct usage appName inputFile\n");
    return -1;
  }
  
  FILE *filePtr = fopen(argv[1],"r"); 

  int i = 0;
  float float1, float2;
  int maxVectorSize = 100;
  double *vector1 = (double *)malloc(maxVectorSize*sizeof(double));
  double *vector2 = (double *)malloc(maxVectorSize*sizeof(double));  
  int vectorSize = 0;
  
  while (fscanf(filePtr,"%d, %f, %f\n", &i, &float1, &float2) != EOF) {
    vector1[vectorSize] = float1;
    vector2[vectorSize] = float2;
    printf("%d, %f, %f\n",i, vector1[i], vector2[i]);
    vectorSize++;

    if (vectorSize == maxVectorSize) {
      // some code needed here I think .. programming exercise
      double *newVector1 = (double *)malloc((vectorSize + maxVectorSize)*sizeof(double));
      double *newVector2 = (double *)malloc((vectorSize + maxVectorSize)*sizeof(double));
      for (int i = 0; i < vectorSize; i++) {
	newVector1[i] = vector1[i];
	newVector2[i] = vector2[i];
      }
      free(newVector1);
      free(newVector2);

      vector1 = newVector1; 
      vector2 = newVector2; 
    }
  }
  fclose(filePtr);  
  //  free(vector1);
  //  free(vector2);


}
