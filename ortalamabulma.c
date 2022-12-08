#include<stdio.h>
void ortalamabul(int dizi1[],int dizi2[])
{
    int toplam[5];
    float ort[5];
    for(int i=0;i<5;i++)
    {toplam[i]=dizi1[i]+dizi2[i];}
    for(int i=0;i<5;i++)
    {
        ort[i]=(toplam[i])/2;
    }
    for(int i=0;i<5;i++)
    {
        printf("\n\n%d.ogrencinin vize puani:%d\n",i+1,dizi1[i]);
        printf("%d.ogrencinin final puani:%d\n",i+1,dizi2[i]);
        printf("%d.ogrencinin ortalamasi:%.2f\n",i+1,ort[i]);

    }
    

}
void main()
{
    int dizi1[5],dizi2[5];
    for(int i=0;i<5;i++)
    {
        printf("%d.ogrencinin vize puani:",i+1);
        scanf("%d",&dizi1[i]);

        printf("%d.ograncinin final puani:",i+1);
        scanf("%d",&dizi2[i]);
    }
    
    ortalamabul(dizi1,dizi2);
    return 0;
}