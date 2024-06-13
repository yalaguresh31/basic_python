#include<stdio.h>
int main() {
    int n=0, op=0;
    printf("enter the number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("even\n");
        op = 0;
    } else {
        printf("odd\n");
        op = 1;
    }

    // n%2==0?printf("even\n") : printf("odd\n");

    switch (op)
    {
        case 0:
            printf("no need to change\n");
            break;
        
        case 1:
            n+=1;
            printf("even number of odd is: %d\n", n);
            break;
        default: printf("input invalid\n");
            break;
    }
    return 0;
}
