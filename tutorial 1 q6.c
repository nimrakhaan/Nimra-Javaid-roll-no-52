#include<stdio.h>
//program that takes x-y coordinates of a point in a cartesian plane
int main() {
    int x,y;
    printf("Enter the coordinates : \n");
    scanf("%d %d",&x,&y);
    if (x>0&&y>0)
    {
        printf("given coordinate point lies in first quadrant ");
    }
    else        if (x<0&&y>0)
    {
        printf("given coordinate point lies in second quadrant ");
    }
    else        if (x<0&&y>0)
    {
        printf("given coordinate point lies in third quadrant ");
    }
    else        if (x>0&&y<0)
    {
        printf("given coordinate point lies in fourth quadrant ");
    }
    else
    {


        printf("given coordinate point at origin");
    }

    return 0;
}
