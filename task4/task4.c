#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){

    int n; printf("Укажите размер массива:\n");
    scanf("%d", &n);

    int* b = (int*) malloc(sizeof(int) * n);
    int count = 0;
    printf("Заполните массив %d-ю числами\n", n);
    for (int i = 0; i < n; i++){
	scanf("%d", &b[i]);
	if (b[i] > 0) count++;
    }

    double* c = (double*) malloc(sizeof(double) * count);
    int j = 0;
    for (int i = 0; i < n; i++){
	if (b[i] > 0) {c[j] = sqrt(b[i]) / 5; j++;}
    }
    
    for (int i = 0; i < count-1; i++){
	int min = i;
	for (int k = i+1; k < count; k++){
	    if (c[k] < c[min]) min = k;
	}
	float a = c[i];
	c[i] = c[min];
	c[min] = a;
    } 

    printf("Отсортированный массив:\n");
    for (int i = 0; i < count; i++) printf("%f\n", c[i]);
    free(b); b = NULL;
    free(c); c = NULL;
    return 0;
}

