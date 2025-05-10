#include <stdio.h>
#include <stdlib.h>
 void ust_piramit(int sayi)
 {
 int i;
 int j;
 int yildiz;
 int bosluk;
 yildiz=1;
 bosluk=sayi-1;

 for(i=1;i<=sayi;i++)
 {
  for(j=1;j<=bosluk;j++)
  printf(" ");
  for(j=1;j<=yildiz;j++)
  printf("*");
  bosluk--;
  yildiz+=2;
  printf("\n");
 }
 }
 void alt_piramit( int sayi)
 { int yildiz;
   yildiz=(2*sayi)-3;
   int i;
   int j;
 for(i=1;i<sayi;i++)
 {
  for(j=1;j<=i;j++)
    printf(" ");
  for(j=1;j<=yildiz;j++)
  printf("*");
  yildiz-=2;
  printf("\n");

 }
 }
int main()
{   int sayi;
    printf("Baklava diliminizin buyukluğunu giriniz:");
    scanf("%d",&sayi);
    ust_piramit(sayi);
    alt_piramit(sayi);
    return 0;
}
