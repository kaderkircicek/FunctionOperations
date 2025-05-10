#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int narsistsayi();

 int main(){

int sakla;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&sakla);
printf("%d",narsistsayi(sakla));
 return 0; }


int narsistsayi(sakla){

int sayi,i,a,b,sakla1;
int toplam=0;

sayi=sakla;
int basamak=1;

  while(sayi>0)
   {
       sayi=sayi/10;
       basamak++;
   }
sakla1=sakla;
for(int i=1; i<=basamak; i++)
{
    a=sakla1%10;
    sakla1=sakla1/10;
    toplam=toplam+pow(a,basamak);
}

if(toplam==sakla)
    return 1;
else
    return 0;
}

