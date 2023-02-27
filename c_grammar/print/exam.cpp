// #include<stdio.h>

// int main(){
//     int a;
//     scanf("%1d", &a);
//         printf("[%d]\n", a*10000);
//     for(int i=10; a != '\0';){
//         a=0;
//         scanf("%1d", &a);
//         if(a*10000/i !=0){
//         printf("[%d]\n", a*10000/i);
//         }
//         i = i * 10;
//     }
    

//     return 0;

// }



// #include<stdio.h>

// int main(){
//     int y; int m; int d;
//     scanf("%d.%d.%d", &y, &m, &d);
//     printf("%02d-%02d-%04d", d, m, y);


//     return 0;

// }

#include<stdio.h>

int main(void){
    int a; int b;
    scanf("%d", &a);
    reload:
    scanf("%d", &b);
    printf("%d\n", b);
    if(--a !=0) goto reload;
    else return;
    return 0;

}


// #include<stdio.h>

// int main(){
//    long long int a; long long int b;
//     scanf("%lld %lld", &a,&b);
//     printf("%lld", a+b);


//     return 0;

// }