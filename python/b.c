#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,arr[106],x;
    printf("enter the array size: ");
    scanf("%d",&n);
    if (1<=n && n<=106){
        printf("enter the array elements: ");
        for(int i=0; i<n-1; i++)
            scanf("%d",&arr[i]);  
        
        int start = arr[0];
        for(int i=1; i<n; i++){
            if(start++ ==arr[i])
                continue;
            else
                x=start-1;
        }
        printf("output: %d",x);

        
    }
    else{
        exit(0);
    }
    return 0;
}