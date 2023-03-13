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

// #include<stdio.h>
//     int arr[10][10];
    

// int main(){

    
//     for(int i=0; i<10; i++){
//         for (int j=0; j<10; j++){
//             scanf("%d", &arr[i][j]);
//         }
    
//     }
   
//     int a=1; int b=1;
//     do{if(arr[a][b]==2){
//         arr[a][b]=9;
//             break;
//         }
//         arr[a][b]=9;
//         if(arr[a][b+1]==0) b++;
//         else if(arr[a][b+1]==2){ arr[a][b+1]=9; break;}
//         else if(arr[a+1][b]==2) {arr[a+1][b]=9; break;}
//         else a++;
//     }while(a+1<=9 && b+1<=9);
    
  
//     for (int q=0; q<10; q++){
//         for(int w=0; w<10; w++){
            
//             printf("%d ", arr[q][w]);
//         }
//         printf("\n");
//     }

    

//         return 0;
//     }

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



#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int five=5; int three=3; int count=0;
    count += n/five;
    n %= five;
    count += n/three;
    n %= three;

    
    return 0;
}

