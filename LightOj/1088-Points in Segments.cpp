#include<bits/stdc++.h>
using namespace std;
int arr[100001];

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int t, n, q, cnt = 1;
    scanf("%d", &t);

    while(t--)
    {
        int num1, num2, lb, ub, result;
        scanf("%d %d", &n, &q);
        for(int i = 0; i<n; i++)
            scanf("%d", &arr[i]);
        printf("Case %d:\n", cnt);
        for(int i = 0; i<q; i++)
        {
            scanf("%d %d", &num1, &num2);
            lb = lower_bound(arr, arr+n, num1) - arr;
            ub = upper_bound(arr, arr+n, num2) - arr;
            result = ub - lb;

            printf("%d\n", result);
        }
        cnt++;
    }
}
