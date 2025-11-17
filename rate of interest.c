#include<stdio.h>
  int main(){
    int p,r,t;
    float si;
    printf("enter the principal(p):");
    scanf("%f",&p);
printf("enter the time in years(t):");
    scanf("%f",&t);
printf("enter the rate of interest(r):");
    scanf("%f",&r);
    si=(p*r*t)/100;
    printf("simple interset=%.2f\n",si);
    return 0;
}
