/*
Write a program using a function which calculates the sum and average of 2 numbers. Use pointers
and print the value of sum and average in main()
*/

#include<stdio.h>
#include<stdlib.h>

int sum(int *a, int *b);
int avg(int *a, int *b);

int main() {
    int a, b, *adda = &a, *addb = &b;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Sum of %d + %d is %d", a, b, sum(adda, addb));
    printf("\nAverage of %d and %d is %d", a, b, avg(adda, addb));

return 0;
}

int sum(int *a, int *b) {
    return *a + *b;
}

int avg(int *a, int *b) {
    return (*a + *b)/2;
}

// lolll next question.