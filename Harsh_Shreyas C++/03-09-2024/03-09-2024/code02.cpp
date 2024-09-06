#include<stdio.h>
#include<stdlib.h>

int main() {
	int* a;
	int s, t;

	printf("Enter value: ");
	scanf_s("%d",&s);

	a = (int*) malloc(4*sizeof (int));

	for (t = 0; t < s; t++) {
	printf("Enter the value for t%d : ",t+1);
		scanf_s("%d", &a[t]);
	}
	printf("display elements :\t"); 
	for (t = 0; t < s; t++) {
		printf("%d", a[t]);
	}
	free (a);
}