#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

int main() {

    //Szamitas

    /*double a = 10.5;
    int b = 4;
    double result = 0;

    printf("\nPélda");
    result = a/b;
    printf("\nSzámítás: %f/%d=%.2f",a,b,result);
*/

    //Terulet Kerulet Szamitas

/*
    int a = 5, b = 10;
    printf("K = %d \n",2*a+2*b);
    printf("T= %d \n",a*b);
    */

    //Calculator

    /*
    printf("\n%d+%d=%d",3,4,(3+4));
    printf("\n%d-%d=%d",7,3,(7-3));
    printf("\n%d*%d=%d",3,4,(3*4));
    printf("\n%d/%d=%d",12,4,(12/4));

    double a = 0,b = 0,res = 0;
    
    printf("\nKérem az a értékét!");
    scanf(" %lf",&a);
    printf("\nKérem az b értékét!");
    scanf(" %lf",&b);
    res = a+b;
    printf("\n\n%.2lf+%,2lf=%.2lf",a,b,res);
    res=a-b;
    printf("\n%.2lf-%.2lf=%.2lf",a,b,res);
    res = a*b;
    printf("\n%.2lf*%.2lf=%.2lf",a,b,res);
    res = a/b;
    printf("\n%.2lf/%.2lf=%.2lf",a,b,res);
    */

    //Kör kerület, terület


    int r;
    double k, t;
    //const double pi = 3.14;
    printf("\nAdja meg a kör sugarát!");
    scanf("%d",&r);

    //fabs - abszolút érték

    t = pow(r,2)*M_PI; //PI
    k = 2*M_PI*r; //PI
    
    printf("\nA kör területe: %.2f\n",t);
    printf("\nA kör kerülete: %.2f\n",k);

    return 0;
}