#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
//	const int x,y;
//    int matrix[x][y]
//
	
//	int matrix [9][9];
	srand(time(NULL));
	int x= rand()%10;
	int y= rand()%10;
	
	for(int i=0; i<10;i++){
	for(int j=0 ;j<10 ; j++){
	if(i==x && j==y){
	printf("urrah!, I have found the hidden treasure (%d %d)\n",i,j);
	}
	
	}

	}


    return 0;
}
