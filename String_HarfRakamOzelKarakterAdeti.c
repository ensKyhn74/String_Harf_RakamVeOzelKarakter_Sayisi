#include <stdio.h>
// klavyeden girilen metindeki harf,rakam ve özel karakter(! ? # ' boşluk gibi) sayısını bul 
// input: Erciyes Univ 1978'de kuruldu.
// output: girdiginiz metinde 20 tane harf 4 tane rakam 5 tane ozel karakter var.

int main()

{
  
 char metin[100];
 int dizi[3] = {0,0,0};
 
 int i = 0;
 
 printf("metin girin: ");
 gets(metin);
 
 while(metin[i] != '\0')
 {
     
  if((metin[i] >= 'A' && metin[i] <= 'Z') || (metin[i] >= 'a' && metin[i] <= 'z'))
  {
    dizi[0]++; 
  }
  
  else if(metin[i] >= '0' && metin[i] <= '9')
  {
    dizi[1]++; 
  }
  
  else // özel karakter ise...
  {
   dizi[2]++; 
  }
     
  i++;     
 }
 
 printf("\ngirdiginiz metinde %d tane harf %d tane rakam %d tane ozel karakter var.",dizi[0],dizi[1],dizi[2]);
 
 return 0;
 
}