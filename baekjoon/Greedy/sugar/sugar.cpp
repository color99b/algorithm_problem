#include<stdio.h>
int main(){
    int n; int count; int temp;
    scanf("%d", &n);
    count = func(func5(n-5), func3(n-3));
    printf("%d", count+1);
    return 0;
}

int func(int num5, int num3){
        return num5 <= num3 ? num5 : num3;

}

int func5(int num){
        if(num<5) return num;
        
        return func(func5(num-5), func3(num-3));

}
int func3(int num){
        if(num<3) return num;

        return func(func5(num-5), func3(num-3));

}