/*
Write a program to change the value of a variable to 10 times of its current value, Write a function
and pass the value by reference.
*/

#include<stdio.h>
#include<stdlib.h>

int multiplier(int *a);

int main() {
    int a, *x = &a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("10 times of %d is %d", a, multiplier(x));

return 0;
}

int multiplier(int *a){
    return *a * 10;
}

//solved eassyyy