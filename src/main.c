#include <stdio.h>
#include <uncertain.h>
#include <math.h>


int
main(int argc, char *  argv[])
{
    double  a, b, c, d;
    double ss=5.0;
    a=libUncertainDoubleExponentialDist(3.0);
    b=libUncertainDoubleGaussDist(10.0,5.0);
    c=(a*b/sqrt(b*b+a));
    d=a*a+b*b;
    printf("a is Exp(1/3) with true mean 3, the mean here is: %lf\n",a); //3
    printf("\nMean value of d should be 143, it is here: %lf\n",d);
    printf("\nMean value of c is: %lf\n",c); //close enough to R simlations
    printf("R simulation gave mean of c to be 2.73 which is close enough.\n");
    printf("\n\nVariance of c is: %lf\n",libUncertainDoubleNthMoment(c,2));
    printf("Variance of d is: %lf\n",libUncertainDoubleNthMoment(d,2));



    return 0;
}


