#include <stdio.h>

const int n = 4;
float average(int array[]);

int main(void)
{
    int scores[n];
    for (int i =0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum / (float) n;
}