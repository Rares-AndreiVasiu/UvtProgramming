#include <stdio.h>
#define MAXN 512

int search(int x, int A[], int n)
{
    for(int i = 0; i < n; ++ i)
    {
        if(A[i] == x)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int i, r, x, N, arr[MAXN];

    scanf("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &x);
    
    r = search(x, arr, N);
    
    printf("%d", r);

    return 0;
}