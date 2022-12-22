#include <stdio.h>
void SequetialSearch(int arr[], int siz, int val)
{
    for (int i = 0; i <= siz; i++)
    {
        if (arr[i] == val)
        {
            printf("Element Present on Index %d", i);
        }
    }
}
void BinarySearch(int arr[], int siz, int val)
{
    int pos = siz / 2;
    if (arr[pos] == val)
    {
        printf("Element Present on Index %d", pos);
    }
    else if (arr[pos] < val)
    {
        for (int i = pos; i <= siz; i++)
        {
            if (arr[i] == val)
            {
                printf("Element Present on Index %d", i);
            }
        }
    }
    else if (arr[pos] > val)
    {
        for (int i = pos; i >= 0; i--)
        {
            if (arr[i] == val)
            {
                printf("Element Present on Index %d", i);
            }
        }
    }
}
int main()
{
    int siz = 10;
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    BinarySearch(arr, siz, 30);
    return 0;
}
