//C program to print ASCII values of all characters
#include<stdio.h>
int main() {
    int ch;  

    for(ch=0; ch<=255;ch++){
        printf("The ASCII value of %c = %d \n",ch,ch);
    }
    return 0;
}

//Signed char cannot store 255 → overflows → infinite loop
// Always use unsigned char or int when looping beyond 127