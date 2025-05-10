#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int AsalMi(int y){
for(int j=2 ; j<y ; j++){
    if(y%j==0)
    return 0;}
    return 1;}

int AsalBolenBul(int x){
for(int i=2 ; i<=x ; i++){
    if(x%i==0)
    {  if(AsalMi(i))
        printf("%d\t",i);}
}
return 0; }


int main (){
int a;
printf("Asal bolenlerini bulmak istediginiz sayiyi giriniz:\n");
scanf("%d",&a);
AsalBolenBul(a);


return 0 ;}
