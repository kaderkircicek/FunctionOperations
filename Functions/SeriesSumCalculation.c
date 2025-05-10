#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int SeriHesapla (int k,int n,int m ){
    int toplam=0;
    printf("Serinin Terimleri:");

    for(int i=0 ; i<m ;i++){
    printf("%.1f+",(1+pow(k,i))*(1+pow(n,i)));
    toplam=toplam+(1+pow(k,i))*(1+pow(n,i));}
    return toplam ;}


int main (){
int a,b,c;
printf("a:\n");
scanf("%d",&a);
printf("b:\n");
scanf("%d",&b);
printf("c:\n");
scanf("%d",&c);


 printf("\nToplam Sonuc=%d",SeriHesapla(a,b,c));

return 0 ;}
