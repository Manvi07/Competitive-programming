#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sgn(float h)
{
    if(h>0)return 1;
    else if(h<0) return -1;
    else return 0;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float d=(b*b)-4.0*a*c;
     if(d>=0)
    printf("r11 %f\t",(-b-sqrt(d))/(2.0*a));
    else
    printf("r11%f+i %f  ",(-b)/(2.0*a),sqrt(-d)/(2.0*a));   //
    if(d>=0)
    printf("r12 %f\t",(-b+sqrt(d))/(2.0*a));
    else
    printf("r12%f-i %f  ",(-b)/(2.0*a),sqrt(-d)/(2.0*a));
printf("\n");

    float q=-0.5*(b+sgn(b)*sqrt(d));
    printf("r21 %f\t",q/a);
    printf("r22 %f\n",c/q);
    return 0;
}
