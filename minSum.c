#include <stdio.h>

int min(int *n)
{
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tot = 0;
        int temp, m;
        scanf("%d", &m);
        scanf("%d", &temp);
        tot += temp;
        for (int j = 0; j < m - 1; j++)
        {
            int temp2;
            scanf("%d", &temp2);
            if (temp2 < temp)
            {
                temp = temp2;
            }
            tot += temp;
        }
        printf("%d\n", tot);
    }
    return 0;
}