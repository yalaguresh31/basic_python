#include<stdio.h>
#include<string.h>
int shoping(int name){
    switch (name)
    {
    case 1: return 50000;
        break;
    case 2: return 10;
        break;
    case 3: return 40;
        break;
    
    default: return 0;
        break;
    }
}

int block(n){

}
int main(){
    int name; 
    printf("1.latop\n2.eggs\n3.Bread select:\n");
    scanf("%d",&name);
    
    if(0<shoping(name))
        printf("The price: %d",shoping(name));
    else
        printf("invaid input\n");
    
    return 0;
}

