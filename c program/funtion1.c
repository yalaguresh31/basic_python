#include<stdio.h>
int areaofRec(int length,int breadth)
{
    int area;
    area =length*breadth;
    return area;
}

int areaofTriangle(int l,int b){
    int area = 0.5*l*b;
    return area;
}

int areaofSuqire(int side){
    int area = side * side;
    return area;
}

int areaofCircle(int r){
    int area = 3.14*r*r;
    return area;
}
int main(){
    int l=20; int b=10;
    int r=5; int s=4;
    int area_rec=areaofRec(l,b);
    int area_triangle = areaofTriangle(l,b);
    int area_suqire = areaofSuqire(s);
    int area_circle = areaofCircle(r);
    printf("%d\n",area_rec);
    printf("area of triangle %d\n",area_triangle);
    printf("area of suqire %d\n",area_suqire);
    printf("area of circle %d\n",area_circle);

    return 0;
}