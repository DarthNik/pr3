#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    float* p = (float*)malloc(sizeof(float)); *p = 25.25;
    float* k = (float*)malloc(sizeof(float)); *k = 17.6;
    float* m = (float*)malloc(sizeof(float)); *m = 194.5;
    float a = *p; *p = *k; *k = a; printf("*p = %f\n*k = %f\n*m = %f\n", *p, *k, *m);
    free(p); p =  NULL; free(k); k = NULL; free(m); m = NULL; 
    return 0;
}
