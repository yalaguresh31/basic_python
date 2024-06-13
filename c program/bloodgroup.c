#include<stdio.h>
int main(){
    char bg;
    printf("enter the your blood group:");
    scanf("%c",&bg);

    switch (bg){
        case 'A': printf("con donate to A or AB\n");
            break;
        case 'B':printf("con donate to B or AB\n");
            break;
        case 'O':printf("con donate to all\n");
            break;
        // case 'AB':printf("con donate only AB\n");
        //     break;
        default: printf("input Invalid\n");
            break;
    }
    return 0;
}