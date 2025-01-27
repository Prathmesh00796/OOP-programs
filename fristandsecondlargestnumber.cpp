#include<stdio.h>

int main()
{
    int n[5], i, max, second_max;
    printf("Enter Five Numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);

        if(i == 0)
        {
            max = n[0];
            second_max = n[0];
        }
        if(n[i] > max)
        {
            second_max = max;
            max = n[i];
        }
        else if(n[i] > second_max && n[i] != max)
        {
            second_max = n[i];
        }
    }

    printf("\nLargest Number: %d", max);
    printf("\nSecond Largest Number: %d", second_max);

    return 0;
}
