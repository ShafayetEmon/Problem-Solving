#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);

int arr[1001];

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
        freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);
    #endif

    int n, mn = 105, mx = 0, mnPos = 0, mxPos = 0;
    cin >> n;


    for(int i = 1; i<= n; i++)
    {
        cin >> arr[i];

        if(arr[i] <= mn)
        {
            mn = arr[i];
            mnPos = i;
        }
        if(arr[i] > mx)
        {
            mx = arr[i];
            mxPos = i;
        }
    }
    int result = mxPos - 1 + n - mnPos;

    if(mnPos < mxPos) 
        result--;
    cout<<result<<endl;

    
    return 0;
}
