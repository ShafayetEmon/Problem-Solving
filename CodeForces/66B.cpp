#include<bits/stdc++.h>
using namespace std;

#define BeatMeScanf    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define tc(x)          int x; cin >> x; while(x--)
#define ll             long long
#define vi             vector<int>
#define pii            pair<int,int>
#define mii            map<int,int>
#define inf            1<<28
#define mem(x,y)       memset(x, y, sizeof(x))
#define ps(x,y)        fixed<<setprecision(y)<<x
#define show(val)      cout<< #val << " -> " << val << endl
#define Case           cout<< "Case "<< ++cs << ": "
#define all(v)         (v).begin(), (v).end()
#define rall(v)        (v).rbegin(), (v).rend()
#define mod            1000000007
#define MAX            100005
int arr[10001];

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("G:/C++/in.txt", "r", stdin);
        freopen("G:/C++/out.txt", "w", stdout);
    #endif
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int  mx = -1;
    for(int i = 0; i<n; i++)
    {
        int cnt  = 0;
        for(int j = i; j<n-1; j++)
        {
            if(arr[j]>=arr[j+1])
                cnt++;
            else 
                break;
        }

        for(int j = i; j > 0; j--)
        {
            if(arr[j] >= arr[j-1])
                cnt++;
            else 
                break;
        }
        mx = max(mx, cnt);
    }
    cout<< ++mx <<'\n';
    
    return 0;
}


