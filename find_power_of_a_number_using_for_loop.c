//C program to find power of a number using for loop
#include<stdio.h>
int main() {
    int base,exp;
    long long int power=1;

    //input base and exp
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exp);

    //condition
    for(int i =1 ; i<= exp ; i++){
        power = power * base;  //base will multiply exp times , which means base^exp
    }

    printf("%d ^ %d = %lld",base,exp,power);

    return 0;
}