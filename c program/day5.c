#include<stdio.h>
int main(){
    //problem 1
    int n,a[20],t;
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
int count=0;
    printf("output\n");
    for(int i=0; i<n; i++){
        if(a[i] == a[i+1]){
            printf("%d ",a[i]);
            i++;
        }
        else
            printf("%d ",a[i]);
        count++;
    }
    printf("\n%d",count);
    //problem 2
    // for(int i=0; i<5; i++){
    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }
    // printf("\n");
    // }

    //problem 3
    // for(int i=0; i<3; i++)
    //     printf("1010101\n");

    // printf("\n---------------\n");
    // for(int i=0; i<3; i++){
    //     for(int j=1; j<=3; j++){
    //         printf("10");
    //     }
    // printf("1\n");
    // }
    return 0;
}