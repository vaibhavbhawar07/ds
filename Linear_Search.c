#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter the total numbers: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the chosen nums: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        if (m == a[i])
        {
            printf("Key %d is found at %d", m, i);
            return 0;
        }
    }

    printf("Key not found");

    return 0;
}
