#include<stdio.h>

void print(int n) {
    if(n > 5) {
        return;
    }
    //print(n+1); //head recursion
    printf("%d",n);
    print(n+1);  //tail reursion
}

int main() {
    print(1);
}