#include<stdio.h>
int A (int n);


int A (int n) {
    if(n > 100) {
        return n - 10;
    } else {
        return A(A(n + 11));
    }
   
}



int main() {
    printf("%d",A(91));
}

