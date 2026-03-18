#include<stdio.h>

int square(int a){
    return a*a;
}

int main(){
    int number;
    printf("Enter any integer number :");
    scanf("%d",&number);
    int result = square(number);
    printf("The square is : %d\n",result);
    return 0;
}