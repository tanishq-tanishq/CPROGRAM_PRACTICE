#include<stdio.h>
int main() {
    int n;
    printf("Enter the no. of terms:\n");
    scanf("%d",&n);
    int n1 = 0;
    int n2 = 1;
    for(int i = 0; i < n; i++) {
        printf(" %d ",n1);
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }
    return 0;
}