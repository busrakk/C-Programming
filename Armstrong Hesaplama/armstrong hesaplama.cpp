#include <stdio.h>
int main()
{
	
	//1000 den kücük armstrong sayýlar
	// Tüm basamaklarýndaki rakamlarýn sayý deðerlerinin küpleri toplamý,kendisine eþit olan sayýlara 
	
	int sayac=1,toplam,temp,bas;
	
	while(sayac<1000)
	 {
	 	temp=sayac;
	 	toplam=0;
	 	while(temp>0)
	 	{
	    bas=temp%10;
   	    temp=temp/10;
		toplam+=bas*bas*bas;   	
	    }
	    
	    if(toplam==sayac)
	    printf("%d\n",sayac);
	    sayac++;
	 }
	
	return 0;
}
