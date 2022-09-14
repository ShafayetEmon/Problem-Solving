#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int arr[101];

int main()
{
    BeatMeScanf;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, sum=0, total = 0, cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=2;
    sort(arr, arr+n);
    for(int i=n-1; i>=0; i--)
    {
        total+=arr[i];
        cnt++;
        if(total>sum)
            break;
    }
    cout<<cnt<<"\n";
    return 0;

}
