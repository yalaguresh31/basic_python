#include<stdio.h>
int main(){
    //problem 1
    // int i,n,m,sumdiv=0,sumnotdiv=0,diff=0;
    // printf("Enter the n:");
    // scanf("%d",&n);
    // printf("enter the m: ");
    // scanf("%d",&m);
    // for(i=1; i<=m; i++){
    //     if(i%n == 0)
    //         sumdiv += i;
    //     else
    //         sumnotdiv += i;
    // }
    // printf("sum of numbers divisible by 4 are: %d\n",sumdiv);
    // printf("sum of numbers not divisible by 4 are: %d\n",sumnotdiv);
    // diff = sumnotdiv -sumdiv;
    // printf("difference: %d\n",diff);

    //problem 2
    // int pizza,puffs,cooldrink;

    // printf("enter the no of pizzas bought :");
    // scanf("%d",&pizza);
    // printf("enter the no of puffs bought :");
    // scanf("%d",&puffs);
    // printf("enter the no of cool bought :");
    // scanf("%d",&cooldrink);

    // printf("--Bill Details--\n");
    // printf("no of pizzas: %d\n",pizza);
    // printf("no of puffs: %d\n",puffs);
    // printf("no of cool drink: %d\n",cooldrink);
    // printf("Total : %d\n",(100*pizza)+(20*puffs)+(10*cooldrink));
    // printf("ENJOY THE SHOW!!!");
    

    //problem 3
    // 3-5
    // 6-8
    // 9-11
    // 12-2
    // int m;
    // printf("Enter the month: ");
    // scanf("%d",&m);

    // if(3<=m && m<=5)
    //     printf("Spring\n");
    // else if(6<=m && m<=8)
    //     printf("Summer\n");
    // else if(9<=m && m<=11)
    //     printf("Autumn\n");
    // else if(12==m || 1==m || 2==m)
    //     printf("Winter\n");
    // else
    //     printf("invalid");

    //problem 4
    float salary,r;
    printf("Enter the salary: ");
    scanf("%f",&salary);

    printf("enter th performance appraisal rating: ");
    scanf("%f",&r);

    if(1.0<=r && r<=3.0)
        printf("slary is : %.2f\n",salary+(salary*0.10));
    else if(3.1<=r && r<=4.0)
        printf("slary is : %.2f\n",salary+(salary*0.25));
    else if(4.1<=r && r<=5.0)
        printf("slary is : %.2f\n",salary+(salary*0.30));
    else
        printf("invalid\n");
    return 0;
}

