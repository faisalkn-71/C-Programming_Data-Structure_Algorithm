#include<stdio.h>
int main()
{
    int math, phy, che, totalMathPhy, total;
    printf("Please, enter the marks of Math, Physics and Chemistry: ");
    scanf("%d %d %d", &math, &phy, &che);

    totalMathPhy = math + phy;
    total = math + phy + che;

    if(math>=65 && phy>=55 && che>=50 && total>=190 && totalMathPhy>=140){
        printf("The candidate is eligible for admission.\n");
    }
    else{
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
