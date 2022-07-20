#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // need this for the constant pi = M_PI

#include "stresstransform.h"


int main(int argc, char **argv) {

       if (argc <2) { exit(1);}

	// get dth from the first argument.  This is given in degrees!

       double thetaInc = atof(argv[1]);
	// might be smart to set a default value, just in case the user
	// forgets when calling this  program;)


	// set the initial stress state

	STRESS S0;
	STRESS Sp;
	double theta = 0.0;

	S0.sigx = 12.0;
	S0.sigy = -5.5;
	S0.tau  =  3.5;

	// loop to compute transformed states

	FILE *f = fopen("list.csv", "w");

	while (theta <= 180.) {
	  StressTransform(S0, &Sp, theta);
	  //printf("sigx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", Sp.sigx, Sp.sigy, Sp.tau);
	  printf("%d, %d, %d, %d\n", theta, Sp.sigx, Sp.sigy, Sp.tau);
	  theta += thetaInc;
	}

	fclose(f);

	return 0;
}

