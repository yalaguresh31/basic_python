#include<stdio.h>
void rev(int a[],int start,int end){
    for(int i=start; i>=end; i--)
        printf("%d ",a[i]);
}

int main(){
    int i,j,n,m,k,a[20],b[20],temp,min,max,dif;
    printf("Enter the value n: ");
    scanf("%d",&n);
    printf("Enter the value k: ");
    scanf("%d",&k);
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    printf("output\n");
    rev(a,k-1,0);
    rev(a,n-1,k);


    // printf("\n");

    // for(i=m-1; i>=0; i--)
    //     printf("%d",a[i]);
    
    // for(i=n-1; i>=m; i--)
    //     printf("%d",a[i]);


    // for(i=0; i<n; i++){
    //     for(j=0; j<n-i-1; j++){
    //         if(a[j]>a[j+1]){
    //             temp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = temp;
    //         }
    //     }
    // }

    // min = a[0];
    // max = a[m-1];
    // dif = max - min;
    // printf("min %d\n",min);
    // printf("max %d\n",max);
    // printf("difference %d\n",dif);
    return 0;
}      

