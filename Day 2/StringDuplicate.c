#include<stdio.h>

int main() {
    
    char str[100];
    printf("Enter a string:\n");
    scanf("%s", str);
    int hash[26] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            hash[index] = hash[index] + 1;
        }

        if(ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';
            hash[index] = hash[index] + 1;
        }
    }

    for(int i = 0; i < 26; i++) {
        printf("%c occured %d times.\n", 'a'+i , hash[i]);
    }
}