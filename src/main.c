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
    printf("Mean value of c is: %lf\n",c);
    printf("Mean value of d is: %lf\n",d);
    printf("Variance of b (which is %lf actually) is: %lf\n",ss*ss,libUncertainDoubleNthMoment(b,2)); 

    printf("Variance of c is: %lf\n",libUncertainDoubleNthMoment(c,2));
    printf("Variance of d is: %lf\n",libUncertainDoubleNthMoment(d,2));



    return 0;
}


