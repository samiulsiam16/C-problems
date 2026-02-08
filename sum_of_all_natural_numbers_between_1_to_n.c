//Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main() {
    int i,n,sum=0;

    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("All natural numbers between 1 to %d:\n",n);

    i=1;
    while(i<=n) {
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}