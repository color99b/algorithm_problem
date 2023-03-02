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

int main(){
    int max;
    scanf("%d", &max);
    int temp[24]={};
    for(int i=0; i<max; i++){
        int one;
        scanf("%d",&one);
        temp[one]++;
        
    }
    for(int j=1; j<=23; j++){
        printf("%d ", temp[j]);
    }

        return 0;
    }

// #include<stdio.h>

// int main(){
//     int a; int b; int c; int count=0;
//     scanf("%d %d %d", &a, &b, &c);
//     for(int i=0; i<a; i++){
//       for (int j=0; j<b; j++){
//         for (int k=0; k<c; k++){
//             printf("%d %d %d\n", i,j,k);
//             count++;
//         }
//       }
//     }

//     printf("%d", count);
//     return 0;

// }



// #include<stdio.h>

// int main(){
//    long long int a; long long int b;
//     scanf("%lld %lld", &a,&b);
    // printf("%lld", a+b);


//     return 0;

// }