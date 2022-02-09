#include <stdio.h>

void median(int arr[], int b) //nilai tengah
{
    // 1 2 3 4 5 6 7
    double tengah = arr[b/2];
    if (b % 2 == 0) //jika genap dijumlah 2 nilai tengah dibagi 2
    {
    tengah += arr[b/2 - 1];
    tengah /= 2;
    }

    printf("%.2lf ", tengah); 
}
void mean(int arr[], int b) //rata-rata
{

    double total = 0;
    for (int i = 0; i < b; i++)
    {
        total += arr[i];
    }

    total /= b;
    printf("%.2lf ", total);
}
void modus(int arr[], int b) //nilai terbanyak
{
    int max = 0;
    int idx = 0;
    for (int i = 0; i < b; i++) // 2 2 2 4 5 6
    {
        int sama = 0;
        for (int j = 0; j < b; j++) // 2 2 2 4 5 6
        {
            if (arr[i] == arr[j])
            {
                sama++;
            }
        }
        if (max < sama)
        {
            max = sama;
            idx = i;
        }
    }
    printf("%d ", arr[idx]);
}
int main()
{
    int a, b;

    scanf("%d", &a);
    for (int k = 0; k < a; k++)
    {
        scanf("%d", &b);
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            int inp;
            scanf("%d", &inp);
            arr[i] = inp;
        }
        median(arr, b);
        mean(arr, b);
        modus(arr, b);
        printf("%s", "\n");
    }
}
