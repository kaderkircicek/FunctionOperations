#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mukemmelyaz(int x){
    int toplam=0;
    for(int j=1 ; j<x ; j++){
      if(x%j==0)
    {toplam=toplam+j;}

    if(toplam==x)
    {return 1;}}
    return 0;}


int main (){

int bas,son;
printf("Baslangic degerini giriniz:\n");
scanf("%d",&bas);
printf("Bitis degerini giriniz:\n");
scanf("%d",&son);
printf("Mukemmel sayilar:\n");
for(int i=bas ; i<=son ; i++){

    if( mukemmelyaz(i))
    printf("%d\n",i);
}



return 0 ;}
