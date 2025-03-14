#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    int a, b;
    printf("Введите значение a: "); scanf("%d", &a);
    printf("Введите значение b: "); scanf("%d", &b);
    int *p = &a, *k = &b;
    *p *= 2;
    *k /= 2;
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
