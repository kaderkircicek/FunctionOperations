#include <stdio.h>
#include <stdlib.h>
#include <math.h>

   int asalmi(int x){

    for(int i=2 ; i<=x ; i++)
    { if(x%i==0)
        return 0;}
    return 1;
   }
    int mersenne(int b){
    int a = asalmi(b);
    if(a)
    {
      if(b%2==1)
        return 1;
    }
       return 0;}

    int main()
  {   int bas,son,ort;
      int j;
      int toplam=0;
      int sayac=0;
      printf("Baslangic ve bitis degerlerini giriniz:\n");
      scanf("%d\n %d",&bas,&son);

    for(j=bas; j<=son ; j++){
    asalmi(j);
    if(asalmi(j))
    {printf("%d",j);}
    sayac=sayac+1;
    toplam=toplam+j;


     if(mersenne(j)){
        printf("mersenne sayi");
     printf("\n"); } }


    ort=toplam/sayac;
    printf("Asal sayilarin ortalamasi %.2f'dir.\n",ort);
    printf("Asal sayilarin ortalamasinin en yakin onluga yuvarlanmis hali:%f'dir\n",round(ort));

    return 0;
}
