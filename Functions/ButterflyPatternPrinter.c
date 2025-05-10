void kelebek(int sayi)
{
    int i,j;
    for(i=1; i<=2*sayi-1; i++)
    {
        for (j=1; j<=2*sayi-1; j++)
        { if(i<=sayi && (i+j<=2*i || i+j>=2*sayi))
           printf("*");
           else if (i>sayi && (i+j>=2*i || i+j<=2*sayi))
           printf("*");
           else
           printf(" ");}
       printf("\n"); }  }




int main()
{   int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    kelebek(sayi);
    return 0;
}
