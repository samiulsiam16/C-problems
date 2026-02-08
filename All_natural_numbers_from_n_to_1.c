//Write a C program to print all natural numbers in reverse (from n to 1). – using while loop

#include<stdio.h>
int main() {
    int i,n;

    printf("enter the value of n :");
    scanf("%d",&n);

    printf("All the natural number in reverse ,from %d to 1:\n",n);

    for(i=n;i>=1;i--) {
        printf("%d\n",i);
    }

    return 0;
}