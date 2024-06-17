/*
Write a program having a variable i. Print the address of i. Pass this variable to a function and
print its address. Are these adresses same? Why??
*/

#include<stdio.h>
#include<stdlib.h>

void pass(int a);

int main() {
    int i = 100;
    int *x = &i;
    printf("Address of i is %u", x);
    pass(i);

return 0;
}

void pass(int a) {
    printf("\nAddress of i is %u", &a);
}

//not same cuz the variable passed to the function is passed thru value and not address. 