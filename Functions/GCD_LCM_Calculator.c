#include <stdio.h>
#include <stdlib.h>

 int ebob(int x, int y){
     int ebob=1;
     int i;
     for(i=2 ; i<=x && i<= y; i++)
     {  if(x%i==0 && y%i==0)
            ebob=i;
     }
     return ebob; }


  int ekok (int x,int y){
    return( x*y/ebob(x,y));}

    int main(){
       int x,y;
       printf("Lutfen ebob ve ekoklarini almak istediginiz iki sayi giriniz:\n");
       scanf("%d %d",&x, &y);
       int ebob(x,y);
       printf(" Sayilarin ebobu %d'dir.\n", ebob(x,y));
       int ekok(x,y);
       printf(" Sayilarin ekoku %d'dir.\n", ekok(x,y));
        return 0; }
