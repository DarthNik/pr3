#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    int a = 5, b = 14;
    int *p = &a, *k = &b;
    *p *= 2;
    *k /= 2;
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
