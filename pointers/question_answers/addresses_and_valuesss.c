/*
Write a program to print the addresses of a variable. Use this address to get the value of this
variable.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    int a = 10;
    int *x = &a;
    printf("Address of variable a is %u", x);
    printf("\n Value of variable a is %d", *x);

return 0;
}

//problem 1 solved eassy.