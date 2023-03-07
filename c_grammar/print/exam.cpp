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
    int arr[10][10];
    

int main(){

    
    for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            scanf("%d", &arr[i][j]);
        }
    
    }
    arr[1][1] = 9;
    do{
        for(int e=1; e<9; e++){
            for(int r=1; r<9; r++){
                if(arr[e][r+1]==1 && arr[e+1][r]==1) break;
                else if (arr[e][r+1]==1) arr[e+1][r]=9;
                else if (arr[e+1][r]==1) arr[e][r+1]=9; 
            }
        }
    }while(true);
    for (int q=0; q<10; q++){
        for(int w=0; w<10; w++){
            
            printf("%d ", arr[q][w]);
        }
        printf("\n");
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

