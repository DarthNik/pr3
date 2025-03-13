#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int n; printf("Введите размер массива\n"); scanf("%d", &n);
    int* a = (int*) malloc(sizeof(int) * n);
    float sum; int count = 0;

    printf("Заполните массив %d-ю числами\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Индексы отрицательных чисел:\n");
    for (int i = 0; i < n; i++){
	if (a[i] < 0) { sum += a[i]; count++; printf("%d\n", i);}
    }

    if (count > 0) printf("Среднее арифметическое отрицательных элементов = %f\n", sum/count);
    else printf("В массиве отсутсвуют отрицательные элементы\n");
    free(a); a = NULL;
    return 0;
}
