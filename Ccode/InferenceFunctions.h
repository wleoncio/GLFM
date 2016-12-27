#include "InferenceFunctions.h"
#include "GeneralFunctions.cpp"

int AcceleratedGibbs (int maxK,int bias, int N, int D, int K, char *C,  int *R, double alpha, double s2B, double s2Y, gsl_matrix **Y, gsl_matrix *Z, int *nest, gsl_matrix *P, gsl_matrix *Pnon, gsl_matrix **lambda, gsl_matrix **lambdanon);
void SampleY (double missing, int N, int D, int K, char Cd,  int Rd, double wd, double s2Y, double s2theta, gsl_matrix *X, gsl_matrix *Z, gsl_matrix *Yd,  gsl_matrix *Bd, gsl_vector *thetad, const gsl_rng *seed);
int IBPsampler_func (double missing, gsl_matrix *X, char *C, gsl_matrix *Z, gsl_matrix **B, gsl_vector **theta, int *R, double *w, int maxR, int bias, int N, int D, int K, double alpha, double s2B, double s2Y,int maxK,int Nsim);