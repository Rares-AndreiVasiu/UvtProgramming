#include <limits.h>
#include <stdio.h>

void findValues(int A[], int n, int vals[]) 
{
    int mn = INT_MAX;

    int mx = INT_MIN;
    
    int sum = 0;

    for(int i = 0; i < n; ++ i)
    {
        sum += A[i];

        if(A[i] < mn)
        {
            mn = A[i];
        }
        
        if(A[i] > mx)
        {
            mx = A[i];
        }
    }

    vals[0] = mn;

    vals[1] = mx;

    vals[2] = sum;
}

int main()
{
    int vals[3], nums[] = {1, 2, 3, 5};

    findValues(nums, 5, vals);

    printf("%d %d %d\n", vals[0], vals[1], vals[2]);

    return 0;
}