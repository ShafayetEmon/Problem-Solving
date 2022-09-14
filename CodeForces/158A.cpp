#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int arr[101];
int main()
{
    BeatMeScanf;
    //freopen("G:/C++/in.txt", "r", stdin);
    //freopen("G:/C++/out.txt", "w", stdout);

    int n, k, x;
    cin>>n>>k;

    for(int i = 1; i<=n ; i++)
    {
        cin>>arr[i];
    }
    int temp = arr[k];

    sort(arr, arr+n+1);

    int cnt  = 1;

    for(int i = 1; i<=n; i++)
    {
        if(temp > 0 && arr[i] >= temp)
        {
            cnt++;
        }
        if(temp == 0 && arr[i] > temp)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

