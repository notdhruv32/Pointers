#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Order before swap: %d, %d\n", a, b);
    swap(&a, &b);
    printf("Order after swap: %d, %d", a, b);

return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}