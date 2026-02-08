//Write a C program to print all odd number between 1 to 100.

#include<stdio.h>
int main() {
    printf("All odd numbers between 1 t0 100:\n");

    int i = 1;
    while(i<=100) {
        if(i%2!=0) {
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}