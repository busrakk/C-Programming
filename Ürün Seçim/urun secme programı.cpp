#include <stdio.h>
int main()
{
	
	int urun,beden,fiyat,adet,indirim;
	
	printf("***** URUNLER *****\n\n");
	printf("A ya da B urunu secmek icin islem yapiniz...!\n\n");
	printf("*******************\n\n");
	printf("A urunu secmek icin 1'e basiniz\n");
	printf("B urunu secmek icin 2'ye basiniz\n\n");
	printf("********************\n\n");
	
	printf("yapacaginiz islem numarasini giriniz = ");
	scanf("%d",&urun);
	
	switch(urun)
	
	{
				
	case 1:
		{
			printf("A urununu sectiniz...\n\n");
			printf("Kucuk beden secimi icin 1'e basin...\n");
			printf("orta beden secimi icin 2'ye basin...\n\n");
			printf("beden numarasi giriniz = ");
			scanf("%d",&beden);
			printf("\n");
			printf("Adet sayisini giriniz: ");
			scanf("%d",&adet);
			
			if(beden==1)
			{
				fiyat=adet*150;
				printf("Urun fiyati = %d Tl...",fiyat);
			}
			else
			{
				fiyat=adet*180;
				printf("Urun fiyati = %d Tl...\n",fiyat);
			}
			
			
			break;
		}
		
		case 2:
		{
			printf("B urununu sectiniz...\n\n");
			printf("Kucuk beden secimi icin 1'e basin...\n");
			printf("orta beden secimi icin 2'ye basin...\n\n");
			printf("beden numarasi giriniz = ");
			scanf("%d",&beden);
			printf("\n");
			printf("Adet sayisini giriniz: ");
			scanf("%d",&adet);
			
			if(beden==1)
			{
				fiyat=adet*120;
				printf("Urun fiyati = %d Tl...",fiyat);
			}
			else
			{
				fiyat=adet*140;
				printf("Urun fiyati = %d Tl...\n",fiyat);
			}
			
			
			break;
		}
		
	}
	
	printf("Eger toplam fiyatiniz 300 ise indirim olacak....!\n\n");
	
	if(fiyat>=300)
	{
		indirim=fiyat-(fiyat*15/100);
		printf("Ýndirimli fiyatiniz = %d",indirim);
	}
	else
	{
		printf("Maalesef indirim yapamiyoruz...\n");
		printf("Odeyeceginiz fiyat = %d",fiyat);
	}
	printf("\n\n");
	printf("Bizi tercih ettiginiz icin **** TESEKKURLER ****\n");
	printf("************************************************\n\n");
	printf("********** iyi gunler :) **********");
	
	return 0;
}
