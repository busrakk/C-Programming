#include <stdio.h>
#include <stdlib.h>

int main(){

int secim;
printf("*********************\n\n");
printf("MATEMATIK MENUSU\n\n");
printf("*********************\n\n");

printf("Yapmak Istediginiz Islem icin Sayi Numarasi Seciniz: \n\n");
printf("1-Karenin Alani ve Cevresini Bulmak\n");
printf("2-Dikdortgenin Alani ve Cevresini Bulmak\n");
printf("3-Ucgenin Alani ve Cevresini Bulmak\n");
printf("4-Dairenin Alani ve Cevresini Bulmak\n");
printf("5-Girilen 2 Sayinin Toplamini Bulmak\n");
printf("6-Girilen 2 Sayinin Farkini Bulmak\n");
printf("7-Girilen 2 Sayinin Carpimini Bulmak\n");
printf("8-Girilen 2 Sayinin Bolumunu Bulmak\n");
printf("9-Girilen Sayinin Karesini Bulmak\n");
printf("10-Girilen Sayinin Kupunu Bulmak\n\n");
printf("**********************\n\n");

printf("Yapacaginiz Islemin Sayi Numarasini Giriniz: ");
scanf("%d",&secim);
printf("\n");
printf("*********************\n\n");
switch(secim)
{
  case 1:
      {
      int kkenar,kalan,kcevre;
      printf("Karenin Alan ve Cevresini Bulma Islemini Sectiniz\n\n");
      printf("1 Kenarini Giriniz: ");
      scanf("%d",&kkenar);
      kalan=kkenar*kkenar;
      kcevre=4*kkenar;
      printf("Karenin Alani: %d\n",kalan);
      printf("Karenin Cevresi: %d\n\n",kcevre);
      printf("************************");
      break;
      }

  case 2:
      {
      int ukenar,kikenar,dalan,dcevre;
      printf("Dikdortgenin Alan ve Cevresini Bulma Islemini Sectiniz\n\n");
      printf("Uzun Kenarini Giriniz :");
      scanf("%d",&ukenar);
      printf("Kisa Kenarini Giriniz: ");
      scanf("%d",&kikenar);
      dalan=kikenar*ukenar;
      dcevre=2*(ukenar+kikenar);
      printf("Dikdortgenin Alani: %d\n",dalan);
      printf("Dikdortgenin Cevresi: %d\n\n",dcevre);
      printf("*****************************");
      break;
      }

  case 3:
      {
      int kenar1,kenar2,taban,h,ualan,ucevre;
      printf("Ucgenin Alan ve Cevresini Bulma Islemini Sectiniz\n\n");
      printf("1.Kenarini Giriniz: ");
      scanf("%d",&kenar1);
      printf("2.Kenarini Giriniz: ");
      scanf("%d",&kenar2);
      printf("Taban Uzunlugunu Giriniz: ");
      scanf("%d",&taban);
      printf("Yuksekligini Giriniz: ");
      scanf("%d",&h);
      ualan=(taban*h)/2;
      ucevre=kenar1+kenar2+taban;
      printf("Ucgenin Alani: %d\n",ualan);
      printf("Ucgenin Cevresi: %d\n\n",ucevre);
      printf("*************************");
      break;
      }

  case 4:
      {
      float daalan,dacevre,r,pi;
      pi=3.14;
      printf("Dairenin Alan ve Cevresini  Bulma Islemini Sectiniz\n\n");
      printf("pi Sayisi 3.14 Olarak Hesaplanir\n");
      printf("Yaricapi Giriniz: ");
      scanf("%f",&r);
      daalan=pi*r*r;
      dacevre=pi*2*r;
      printf("Dairenin Alani: %f\n",daalan);
      printf("Dairenin Cevresi: %f\n\n",dacevre);
      printf("*******************************");
      break;
      }

  case 5:
    {
       int s1,s2,sonuc;
       printf("Girilen 2 Sayinin Toplamini Bulma Ýslemini Sectiniz\n\n");
       printf("1.Sayiyi Giriniz: ");
       scanf("%d",&s1);
       printf("2.Sayiyi Giriniz: ");
       scanf("%d",&s2);
       sonuc=s1+s2;
       printf("Toplamlarinin Sonucu: %d\n\n",sonuc);
       printf("********************");
       break;
    }

  case 6:
    {
       int s1,s2,sonuc;
       printf("Girilen 2 Sayinin Farkini Bulma Islemini Sectiniz\n\n");
       printf("1. Sayiyi Giriniz: ");
       scanf("%d",&s1);
       printf("2.Sayiyi Giriniz: ");
       scanf("%d",&s2);
       sonuc=s1-s2;
       printf("Farklarinin Sonucu: %d\n\n",sonuc);
       printf("**********************");
       break;
    }

  case 7:
    {
       int s1,s2,sonuc;
       printf("Girilen 2 Sayinin Carpimini Bulma Islemini Sectiniz\n\n");
       printf("1.Sayiyi Giriniz: ");
       scanf("%d",&s1);
       printf("2.Sayiyi Giriniz: ");
       scanf("%d",&s2);
       sonuc=s1*s2;
       printf("Carpimlarinin Sonucu: %d\n\n",sonuc);
       printf("***********************");
       break;
    }

   case 8:
    {
      float s1,s2,sonuc;
       printf("Girilen 2 Sayinin Bolumunu Bulma Islemini Sectiniz\n\n");
       printf("1.Sayiyi Giriniz: ");
       scanf("%f",&s1);
       printf("2.Sayiyi Giriniz: ");
       scanf("%f",&s2);
       sonuc=s1/s2;
       printf("Bolumlerinin Sonucu: %f\n\n",sonuc);
       printf("************************");
       break;
    }

   case 9:
    {
      int s,kare;
      printf("Girilen Sayinin Karesini Bulma Islemini Sectiniz\n\n");
      printf("Sayiyi Giriniz: ");
      scanf("%d",&s);
      kare=s*s;
      printf("Girilen Sayinin Karesi: %d\n\n",kare);
      printf("***************************");
      break;
    }

   case 10:
    {
      int s,kup;
      printf("Girilen Sayinin Kupunu Bulma Islemini Sectiniz\n\n");
      printf("Sayiyi Giriniz: ");
      scanf("%d",&s);
      kup=s*s*s;
      printf("Girilen Sayinin Kupu: %d\n\n",kup);
      printf("**************************");
      break;

    }

    default: printf("Kayitli Olmayan Bir Sayiyi Girdiniz\n\n");
             printf("***********************************");
             break;

}

return 0;
}
