#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 5

int B[M][N];

int main()
{
    srand(time(NULL));
    
	//int B[M][N];
	int A[3][3]={{0,-1,0},{-1,5,-1},{0,-1,0}};	
	//int c,d;
	int a,b,toplam=0;

printf("\n");	
printf("\t***** F MATRIX *****\n\n\n");
	
	for(a=0;a<M;a++)
	{
		for(b=0;b<N;b++)
		{
			B[a][b]=rand()%255+1;
			printf("[%d]\t",B[a][b]);
		}
		printf("\n\n\n");
	}	
	
	printf("\n");
	printf("\t***** KERNEL MATRIX *****\n");
	printf("\n\n");
	
	int secim;
	printf(" * Kernel matris degerlerinin asagidaki gibi olmasini istiyorsaniz '1'e basin.. \n\n"
      " \t[0]\t[-1]\t[0] \n \t[-1]\t[5]\t[-1] \n \t[0]\t[-1]\t[0] \n\n");
	printf("\n\n");
	printf(" * Kernel matris icin deger girmek istiyorsaniz '2'ye basin... \n\n\n");
	printf("*************************\n");
	printf("Sayi Numarasini Giriniz:");
	scanf("%d",&secim);
	printf("*************************\n");
    printf("\n\n");
    
    switch(secim)
    {

	case 1:
 	{
		
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("\t[%d]",A[a][b]);
		}
		
		printf("\n");
	}
   break;	
   }
   
	
/*	printf("\n");
	printf("***** KERNEL MATRIX *****\n");
	printf("\n");*/

	case 2:
	{
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("\t[%d][%d] degerini gir =  ",a,b);
			scanf("%d",&A[a][b]);
		}
	}	
	
	printf("\n\n");
	
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("\t[%d]",A[a][b]);
		}
    printf("\n\n\n\n");
	}
	break;
   }
    
    default: printf("Kayitli Olmayan Bir Sayiyi Girdiniz\n\n");
    printf("***********************************");
    break;
   }
	
	printf("\n\n");
	printf("\t***** OUTPUT MATRIX *****\n");
	printf("\n\n");
	
	for(a=1;a<M-1;a++)
	{
		for(b=1;b<N-1;b++)
		{
		toplam=B[a][b]*A[1][1] + B[a+1][b]*A[2][1] + B[a-1][b]*A[0][1] + 
		B[a][b-1]*A[1][0] + B[a][b+1]*A[1][2] + B[a-1][b-1]*A[0][0] + 
		B[a+1][b-1]*A[0][2] + B[a-1][b+1]*A[2][0] +B[a+1][b+1]*A[2][2];
		printf("\t[%d]",toplam);
		}
		printf("\n\n\n");
	}


	
	printf("\n\n");
	printf("\t***** OUTPUT MATRIX *****\n");
	printf("\n\n");
	
  int toplam2=0;
	
   for(a=0;a<M;a++)
    {
    	for(b=0;b<N;b++)
    	{
   		toplam2+=B[a][b]*A[1][1];
        if (a+1 <= M-1) {toplam2+=B[a+1][b]*A[2][1];}
        if (a-1 >= 0) {toplam2+=B[a-1][b]*A[0][1];}
		if (b-1 >= 0) {toplam2+=B[a][b-1]*A[0][1];}
        if (b+1 <= N-1){toplam2+=B[a][b+1]*A[1][2];}
        if (a-1 >= 0 && b-1 >= 0){toplam2+=B[a-1][b-1]*A[0][0];}
		if (a+1 <= M-1 && b-1 >= 0){toplam2+=B[a+1][b-1]*A[0][2];}
        if (a-1 >= 0 && b+1 <= N-1){toplam2+=B[a-1][b+1]*A[2][0];}
        if (a+1 <= M-1 && b+1 <= N-1){toplam2+=B[a+1][b+1]*A[2][2];}
		
		
		printf("[%d] \t",toplam2);
		toplam2=0;
		}
		printf("\n\n");
	}
   
   
  	getchar();
return 0;
}
