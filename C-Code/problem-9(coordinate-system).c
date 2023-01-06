#include<stdio.h>
int main()
{
    int x, y;
    printf("Please, enter two point: ");
    scanf("%d%d", &x, &y);

    if(x==0 && y==0){
        printf("The coordinate point (%d, %d) lies in origin.", x, y);
    }
    else if(x!=0 && y==0){
        printf("The coordinate point (%d, %d) lies in X-axis.\n", x, y);
    }
    else if(x==0 && y!=0){
        printf("The coordinate point (%d, %d) lies in Y-axis.\n", x, y);
    }
    else if(x>0 && y>0){
        printf("The coordinate point (%d, %d) lies in first quadrant.\n", x, y);
    }
    else if(x<0 && y>0){
        printf("The coordinate point (%d, %d) lies in second quadrant.\n", x, y);
    }
    else if(x<0 && y<0){
        printf("The coordinate point (%d, %d) lies in third quadrant.\n", x, y);
    }
    else{
        printf("The coordinate point (%d, %d) lies in forth quadrant.\n", x, y);
    }

    return 0;
}
