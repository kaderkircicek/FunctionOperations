#include <stdio.h>
#include <stdlib.h>


void ust_piramit(int sayi)
{
    int i,j,k;
    int bosluk;
    int yildiz=2;
    bosluk=sayi-1;

     for(i=1 ; i<=sayi ; i++){
      for(j=1 ; j<=bosluk ; j++)
        { printf(" ") ;}
      for(k=1 ; k<=yildiz ; k++)
      {
           if(k==1)
            {printf("/");}
            else if (k==yildiz)
           {printf("\\");}
            else
             {printf("*");}
      }
      bosluk=bosluk-1;
      yildiz=yildiz+2;
      printf("\n");
     }
}


void alt_piramit(int sayi)
{
int yildiz;
int bosluk;
int i,j,k;
    yildiz=(sayi*2);
    bosluk=0;
     for(i=1 ; i<=sayi ; i++){
      for(j=1 ; j<=bosluk ; j++)
        { printf(" ") ;}
      for(k=1 ; k<=yildiz ; k++)
      {
           if(k==1)
            {printf("\\");}
            else if (k==yildiz)
           {printf("/");}
            else
             {printf("*");}
      }
      bosluk=bosluk+1;
      yildiz=yildiz-2;
      printf("\n");
     }
}
int main()
{   int sayi;
    printf("Baklava diliminin buyuklugunu giriniz:");
    scanf("%d",&sayi);
    ust_piramit(sayi);
    alt_piramit(sayi);
    return 0;
}
