#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 4
#define N 4


void kisaYol(int , int);


/*int matris[8][6]={{1,0,0,0,0,0},
                  {1,1,1,1,1,1},
			      {1,1,1,1,0,1},
				  {1,1,1,0,0,1},
			      {1,0,1,1,0,1},
				  {1,1,1,1,0,1},
				  {1,1,0,1,0,1},
				  {1,1,1,1,1,1}};*/
int matris[M][N];
int kontrolMatris[M][N]={0};
int yolsay[M*N][2];

int max_x = M-1;
int max_y = N-1;

void cozumyazdir(){

	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",kontrolMatris[i][j]);
		}
		printf("\n\n");
	}
}

int labirent(){
	
	srand(time(NULL));
	int a,b;
	
    //random matris alma.....

	for(a=0;a<M;a++){
		for(b=0;b<N;b++){
			matris[a][b]=rand()%2;	
			matris[0][0]=1;
	        matris[M-1][N-1]=1;		
		}
		printf("\n");
	}
	
	printf("  *** RANDOM MATRIS ***\n\n");
	
	for (a=0;a<M;a++)
    {
        for (b=0;b<N;b++)
        {
            printf("%d\t",matris[a][b]);
        }
        printf("\n\n");
    }
	
}

//elden girilen matris....

/*int labirent(){
	
	int a,b;
	
	printf("  *** MATRIS ***\n\n");
	
	for (a=0;a<M;a++)
    {
        for (b=0;b<N;b++)
        {
            printf("%d\t",matris[a][b]);
        }
        printf("\n\n");
    }
	
}*/


//matrisin koordinatlarini alip geri deger dondurme
int koordinat(int a, int b) {

	return matris[a][b];
}

void kisaYol(int x, int y) {
	
     //en son degerini korumasi icin..
	static int sayac = 0;
	static int isaret = 0;
	
   	kontrolMatris[x][y]=1;
   	
   	printf("*koordinatlar [%d],[%d]\n",x,y);
   	
	if (sayac >= (M*N) || isaret == 1) 
	return;

	yolsay[sayac][0]=x;
	yolsay[sayac++][1]=y;
	
	//oncelik sag ve asagi hareket!!!
	
	if(x < max_x && koordinat(x+1,y) == 1 && kontrolMatris[x+1][y]==0 && x>=0 && y>=0) {  //asagi hareket etme....
	return  kisaYol(x+1,y);
	}
	
	if(y < max_y && koordinat(x,y+1) == 1 && kontrolMatris[x][y+1]==0 && x>=0 && y>=0) {  //saga hareket etme....
	return  kisaYol(x,y+1);
	} 
	
	if(y > max_y && koordinat(x,y-1) == 1 && kontrolMatris[x][y-1]==0 && x>=0 && y>=0) {  //saga hareket etme....
	return  kisaYol(x,y-1);
	} 
	
	if(y > max_y && koordinat(x-1,y) == 1 && kontrolMatris[x-1][y]==0 && x>=0 && y>=0) {  //saga hareket etme....
	return  kisaYol(x-1,y);
	} 
	
	/*(koordinat(x,y-1)==1 && kontrolMatris[x][y-1]==0 &&x>=0&&y>=0){  //sola hareket etme....
	 return   kisaYol(x,y-1);
	}
	
	if(koordinat(x-1,y)==1 && kontrolMatris[x-1][y]==0 &&x>=0&&y>=0){  //yukari hareket etme....
	return  kisaYol(x-1,y);
	}*/
	
    //eðer max degere ulaþýlmýssa return ile fonksiyondan çýkar
	if (x ==max_x && y==max_y) {
		isaret = 1;
		return;
	}
	
	if (isaret == 0) {
		yolsay[--sayac][0]=0;
		yolsay[sayac][1]=0;
	}
	
	return;
}

int main() {
	
	int i=0,sayac=0;
	
	labirent();


	printf("\n*************************\n");
    printf("  Yol Koordinatlari  \n\n");
    printf("**************************\n\n"); 
    
    	kisaYol(0,0);
    	
    	printf("\n");
    	
    	for(i=1; i<(M*N);i++) {
		if (yolsay[i][0] == 0 && yolsay[i][1] == 0){
		
				break;
		}
		sayac++;
	
		printf("%d ) [%d],[%d]\n", sayac,yolsay[i][0], yolsay[i][1]);
	}
	
		if(sayac<(max_x+max_y)){
		printf("\n\tYOL YOK!!!!!\n");
		system("COLOR C");
  	} 
  	else if(sayac>=(max_x+max_y)){
  		printf("\n*************************\n");
  		printf("\n\tYOL BULUNDU\n");
  		printf("**************************\n\n"); 
  		system("COLOR A");
  		cozumyazdir();
	  }

	return 0;
}
