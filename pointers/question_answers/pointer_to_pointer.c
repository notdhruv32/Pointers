/*
Write a program to print the value of a variable i using "pointer to pointer" type of variable.
*/
//name looks confusing ik but the question is loll lemme solve it for u :)

#include<stdio.h>
#include<stdlib.h>


int main() {
    int i = 1000, *addi = &i, **add_addi = &addi; 
    printf("value of i is %d", **add_addi);

return 0;
}

//done is it harddd??? ,,, no dawm eaassyy loll 