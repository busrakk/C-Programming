#include <stdio.h>
int main()
{
	
	//1000 den k�c�k armstrong say�lar
	// T�m basamaklar�ndaki rakamlar�n say� de�erlerinin k�pleri toplam�,kendisine e�it olan say�lara 
	
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
