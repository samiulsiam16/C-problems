#include<stdio.h>
int sum( int a , int b , int c){
    return a+b+c;
}

int main(){
    int num1 , num2, num3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    int addition = sum(num1 , num2, num3);

    printf("The addition of three number is : %d", addition);

return 0;
}