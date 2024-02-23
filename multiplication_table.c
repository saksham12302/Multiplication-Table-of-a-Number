#include <stdio.h>

void multiplicationTable(int n) {
     int i;
     if(n>0) {
        for(i=1;i<=10;i++) {
            printf("%d X %d = %d\n",n, i, n*i);
        }
    }
}

int main() {
    int n,i;
    printf("\nThe Multiplication Table of %d is : \n",n);
    multiplicationTable(3); // You can pass any number as an argument inside the "multiplication table" function.
    return 0;
}