#include<stdio.h>

typedef struct Address {
    char village[50];
    int pincode;
} Address;

typedef struct Member {
    int id;
    char name[20];
    float share_capital;
    Address address;
} Member;

int main() {
    int n;
    printf("Enter the no. of members:\n");
    scanf("%d",&n);
    Member arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter ID:\n");
        scanf("%d",&arr[i].id);
        printf("Enter NAME:\n");
        scanf("%s",arr[i].name);
        printf("Enter SHARE CAPITAL:\n");
        scanf("%f",&arr[i].share_capital);
        printf("Enter VILLAGE:\n");
        scanf("%s",arr[i].address.village);
        printf("Enter PINCODE:\n");
        scanf("%d",&arr[i].address.pincode);
    }

    float sum = 0;
    int max = 1;
    for(int i = 0; i < n; i++) {
        printf("ID: ");
        printf("%d\n",arr[i].id);
        printf("NAME: ");
        printf("%s\n",arr[i].name);
        printf("SHARE CAPITAL ");
        printf("%f\n",arr[i].share_capital);
        printf("VILLAGE: ");
        printf("%s\n",arr[i].address.village);
        printf("PINCODE: ");
        printf("%d\n",arr[i].address.pincode);

        sum += arr[i].share_capital;
        if(arr[i].share_capital > arr[max].share_capital) {
            max = i;
        }
    }
    printf("\n");

    printf("Total share capital: %.2f\n",sum);
    printf("Highest Holder: %d %s %f %s %d\n",arr[max].id,arr[max].name,arr[max].share_capital,arr[max].address.village,arr[max].address.pincode);

    return 0;

}

