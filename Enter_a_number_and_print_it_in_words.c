//Write a C program to enter a number and print it in words.
#include<stdio.h>
int main() {
    int num,digit=0,reverse=0;

    //number input
    printf("Enter the number:");
    scanf("%d",&num);

    //condition
    while(num!=0){
    reverse = reverse * 10 + (num % 10); //reverse the word
    num/=10;
    }

    while(reverse!=0) {
        digit=reverse%10; //get the last word
        switch(digit) {  //here print in word
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
        reverse/=10;  //remove the last word
    }

    return 0;
}