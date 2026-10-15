#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool BallReaches(int *arr , int n);

int main() {
    int n;
    printf("Enter the no. of pillars:\n");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }


}
bool BallReaches(int *arr , int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i]==arr[j]) {
                return true;
            }
        }
    }
}