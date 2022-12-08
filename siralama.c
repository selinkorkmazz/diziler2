#include<stdio.h>
float gecici;
void kucuktenbuyuge(float dizi[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(dizi[j]<dizi[i])
            {
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%.1f\n",dizi[i]);

    }

}
void main()
{
    float dizi[5],i;
    for(int i=0;i<5;i++)
    {
        printf("dizinin %d.elemani:\n",i+1);
        scanf("%f",&dizi[i]);
        
    }
    printf("dizinin kucukten buyuge siralanmis hali:\n");
    kucuktenbuyuge(dizi);
    
    return 0;
}