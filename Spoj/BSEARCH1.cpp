#include<bits/stdc++.h>
using namespace std;
int A[100005];

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int left, right, mid;
    int n, x, q;
    scanf("%d%d", &n, &q);
    for(int i = 0; i<n; i++)
        scanf("%d", &A[i]);
    for(int i = 0; i<q; i++)
    {
        scanf("%d", &x);
        left = 0;
        right = n-1;
        int result = -1;
        while(left<=right)
        {
            mid = (left+right)/2;
            if(x == A[mid])
            {
                result = mid;
                right = mid - 1;
            }
            else if( x < A[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        printf("%d\n", result);
    }
    return 0;
}
