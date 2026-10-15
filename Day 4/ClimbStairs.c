#include<stdio.h>

int climbStairs(int n) {
    if(n==0 || n==1) {
        return 1;
    }

    return climb(n-1)+climb(n-2);
}

int main() {
    printf("%d",climbStairs(4));
    return 0;
}