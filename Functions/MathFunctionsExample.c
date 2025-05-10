#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float a=25;
  float sonuc= sqrt(a);
  printf("%.2f\n",sonuc);



  int b=2, c=5;
  int sonuc1=pow(b,c);
  printf("%d\n",sonuc1);


  float d=-27;
  int e=3;
  float sonuc3;
   if(e%2==1) {

   int ara =-d;
   sonuc3= pow(ara,1.0/e);
   sonuc3=-sonuc3;}

   printf("%f\n",sonuc3);


   float f=-2.34567;
   float g=-7.89761;

   printf("ceil(%f): %f\n",f,ceil(f));
   printf("floor(%f): %f\n",g,floor(g));
   printf("round(%f): %f\n",f,round(f));
   printf("round(%f): %f\n",g,round(g));




   float k=2.34567;
   float l=7.89761;

   printf("ceil(%f): %f\n",k,ceil(k));
   printf("floor(%f): %f\n",l,floor(l));
   printf("round(%f): %f\n",k,round(k));
   printf("round(%f): %f\n",l,round(l));



   float m=-1.3;
   int n=-1;
   printf("fabs(%f): %f\n",m,fabs(m));
   printf("abs(%d): %d\n",n,abs(n));

   return 0;
}
