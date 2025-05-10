#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int faktoryel(int x){
    int fact=1;
    if(x>1)
    for(int i=2 ; i<=x ; i++){
    fact=fact*i;}
    return fact ; }

int SeriHesapla (int y,int z){
int toplam=0;
for(int j=0 ; j<z ; j++){
  printf("%d+",faktoryel(y*j));
 toplam=toplam+faktoryel(y*j);}
  return toplam;}



int main (){
int a,b;
printf("a:\n");
scanf("%d",&a);
printf("b:\n");
scanf("%d",&b);
 printf("\nToplam Sonuc=%d",SeriHesapla(a,b));

return 0 ;}
