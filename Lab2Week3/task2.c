#include <stdio.h>


	int main (){

	int M;

	printf("Enter the number of minutes");
	scanf("%d", &M);
      printf(" M : S\n");
	for (int i = 0; i <= M-1; i++) {
        for (int s = 0; s < 60; s++) {
     //      	printf(" M : S");
	       	printf("%02d : %02d\n", i, s);
        }
    }

    return 0;



	}
