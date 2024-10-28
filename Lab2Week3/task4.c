#include <stdio.h>

int main() {
    int j,i,max,min,population[10];
    float average;
//	int sum =0;

float sum =0;
	
	for (i=0;i<10;i++){
	printf("Enter the population of city %d: ",i+1);
	scanf(" %d",&population[i]);
	
	sum = population[i] + sum;

		if(i ==0)
		{
		max =  population[i] ;
	        min =  population[i] ;
		}
		else if ( max <  population[i]  )
    		{
    	    	max = population[i];
    		}
    		else if ( population[i] < min )
    		{
           	 min = population[i];
    		}
	}
	printf("population in reverse order: \n");
	
	for(j=9;j>=0;j--){
	printf(" %d\n",population[j]);	
	}
	
	float mean = sum /10;
	printf("Maximum population:%d\n",max);
	printf("Minimum population:%d\n",min);
	printf("Mean population: %.2f\n",mean);

	return 0;      
	//  printf("Enter the population cities:\n");
   // for (int i = 0; i < 10; i++) {
     //   printf("City %d: ", i + 1);
       // scanf("%d", &population[i]);
   // }

    //sum = population[i]+ sum;
   // max = min = population[1];

   // for (int i = 1; i <= 10; i++) {
     //   sum += population[i];
       // if (population[i] > max) {
   //         max = population[i];
 //       }
     //   if (population[i] < min) {
 //           min = population[i];
   //     }
   // }

   // average = sum / 10.0;

 //   printf("\nPopulation in reverse order:\n");
   // for (int i = 10; i >= 1; i--) {
    //    printf("%d ", population[i]);
   // }

  //  printf("Maximum Population: %d\n", max);
//    printf("Minimum Population: %d\n", min);
//    printf("Average Population: %.2f\n", average);
//
  //  return 0;
}

