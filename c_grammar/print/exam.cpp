#include<stdio.h>

int main(){
    char n[30];
    scanf("%s", n);
    for(int i=0; n[i] != '\0'; i++){
        printf("\'%c\'\n", n[i]);
    }

}


