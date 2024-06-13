#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,arr[106],x,count=0;
    printf("enter the array size: ");
    scanf("%d",&n);
    if (1<=n && n<=106){
        printf("enter the array elements: ");
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        // printf("enter the X value: ");
        // scanf("%d",&x);

        for(int i=1; i<=n; i++){
            if(i==arr[i])
                continue;
            else
                count=i;
        }
        printf("output: %d",&count);

        // if(0<count)
        //     printf("value %d occurs %d times\n",x,count);
        // else
        //     printf("value %d occurs %d times not present in array\n",x,count);
    }
    else{
        exit(0);
    }
    return 0;
}