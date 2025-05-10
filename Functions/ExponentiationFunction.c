#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int usal(int k, int n,int m){
 int sonuc=k;
 int p=n*m;
  int i=2;
  while( i<=p ){
   sonuc=sonuc*k;
   i++; }


return sonuc; }



int main (){
int a,b,c;
printf("a:");
scanf("%d",&a);
printf("b:");
scanf("%d",&b);
printf("c:");
scanf("%d",&c);
printf("\nFonksiyondan geriye donen deger:%d'dir.",usal(a,b,c));

return 0 ;}
