

#include <stdio.h>
#include<stdlib.h>



int  KarakterSil(char *a,char *b,char sil[])
{
    int i=0;
    int j=0;
    int k=0;
   int sayac=0;

    for(i=0;i<strlen(sil);i++)
    {
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]!=sil[i])
            {
                if(a[j] != sil[i]+32 && a[j] != sil[i]-32)
                {
                    b[k]=a[j];
                    k++;
                }
                else{
                    sayac++;
                }
            }
            else
            {
                sayac++;
                
            }
        }
        strcpy(a,b);
        b=NULL;
        b=malloc(sizeof(char)*2);
        k=0;
    }
    
    
    
      return sayac;

}
       
    


int main()

{   int i;
    int j;
    char *metin=malloc(sizeof(char)*2);
    char *yeni=malloc(sizeof(char)*2);
    char turkce[]="ğüşöç";
    printf("Gireceginiz metin turkce karakter icermemelidir!\n");
    printf("*************************************************\n");
    char sil[100];
    printf("Metni giriniz:\n");
    gets(metin);
    
    
    for(i=0;i<strlen(metin);i++)
    {    for(j=0;j<strlen(turkce);j++)
    {
        
        if(metin[i]==turkce[j])
        {
            printf("-----Metniniz turkce karakter icermektedir!!!------\n");
            return 1;
        }
        
    }
        
    }
    
   

    char *a=metin;
    char *b=yeni;
    
    
    printf("Silmek istediğiniz karakterleri giriniz:\n ");
    //boşluk girene kadar
   
    
    gets(sil);
    
    
    
    int silinen=KarakterSil(a,b,sil);
    printf("Girilen metin------->");
    puts(metin);
    printf("\nSilinecek olan karakterler---->");
    puts(sil);
    printf("\nMetnin yeni hali:-------->");
    printf("%s\n",a);
    printf("%d tane karakter silinmiştir...\n",silinen);
    
}
