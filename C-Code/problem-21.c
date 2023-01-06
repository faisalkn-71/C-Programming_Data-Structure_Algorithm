#include <stdio.h>
int main()
{
    int sideA, sideB, sideC;
    printf("Please,  enter the three side of a triangle: ");
    scanf("%d%d%d", &sideA, &sideB, &sideC);

    if (sideA <= 0 && sideB <= 0 && sideC <= 0)
    {
        printf("Opss! It is not possible to built a triangle with these side.");
    }
    else
    {
        if (sideA > sideB + sideC)
        {
            printf("Opss! It is not possible to built a triangle with these side.");
        }
        else if (sideB > sideA + sideC)
        {
            printf("Opss! It is not possible to built a triangle with these side.");
        }
        else if (sideC > sideA + sideB)
        {
            printf("Opss! It is not possible to built a triangle with these side.");
        }

        else
        {
            printf("Of-course. It is possible to built a triangle with these side.\n");
        }
    }

    return 0;
}
