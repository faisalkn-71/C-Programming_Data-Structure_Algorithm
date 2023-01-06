// #include <stdio.h>
// int main()
// {
//     int i, j, std;
//     float mark, sum, avg;

//     printf("Please, enter the number of  Students: ");
//     scanf("%d", &std);

//     for (i = 1; i <= std; i++)
//     {
//         printf("Please, enter marks of %dth student: ", i);
//         sum = 0.0;

//         for (j = 1; j <= 2; j++)
//         {
//             scanf("%f", &mark);
//             sum += mark;
//         }

//         avg = sum / 2;

//         printf("Average = %f.\n", avg);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i = 5, j;
    while (i >= 1)
    {
        arr[i - 1] -= i;
        while (1)
        {
            arr[i - 1] += i;
            break;
        }
        i -= 1;
    }
    for (j = 0; j < 5; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
