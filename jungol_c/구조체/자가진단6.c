#include <stdio.h>

struct class1 {
    char name[20];
    int tall;
    float weight;
};

#define NAME 0
#define WEIGHT 2

void sort_name(struct class1 *a)
{
	int i=0,k=0;
	struct class1 tmp; 

  	for (i = 0; i < 5; i++) {
  		for (k = i; k < 5; k++) {
  			if(a[i].name[0] > a[k].name[0]){
  				tmp=a[i];
  				a[i]=a[k];
  				a[k]=tmp;
  	       }
   		}
  	}
  	
	printf("name\n");
	
	for (i = 0; i < 5; i++) {
		printf("%s %d %.1f \n", a[i].name, a[i].tall, a[i].weight);
	}
}


void sort_weight(struct class1 *a)
{
	int i=0,k=0;
	struct class1 tmp; 
  	
  	for (i = 0; i < 5; i++) {
  		for (k = i; k < 5; k++) {
  			if(a[i].weight < a[k].weight){
  				tmp=a[i];
  				a[i]=a[k];
  				a[k]=tmp;
  	       }
   		}
  	}

	printf("\nweight\n");
	
	for (i = 0; i < 5; i++) {
		printf("%s %d %.1f \n", a[i].name, a[i].tall, a[i].weight);
	}
}


int main()
{
	struct class1 a[5];

	for(int i=0 ; i<5 ; i++){
		scanf("%s %d %f", &a[i].name, &a[i].tall, &a[i].weight);
	}

	sort_name(&a);
	sort_weight(&a);


	return 0;
}