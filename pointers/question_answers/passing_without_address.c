/*
Write a program to change the value of a variable to 10 times of its current value, Write a function
and pass the value without reference. note that the question is a bit different from privious one.
*/

#include<stdio.h>
#include<stdlib.h>

int multiplier(int a);

int main() {
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    b = multiplier(a);
    printf("10 times of %d is %d", a, b);
}

int multiplier(int a) {
    return a * 10;
}

