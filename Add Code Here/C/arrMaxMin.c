#include <stdio.h>

int main()
{
    int BIL[10] = {10, 13, 4, 23, 435, 231, 32, 434, 23, 95};
    int max = BIL[0];
    int min = BIL[0];

    for (size_t i = 0; i < 10; i++)
    {
        if (BIL[i] > max)
        {
            max = BIL[i];
        }

        if (BIL[i] < min)
        {
            min = BIL[i];
        }
    }

    printf("Nilai maksimal : %d\n", max);
    printf("Nilai minimal : %d\n", min);

    return 0;
}