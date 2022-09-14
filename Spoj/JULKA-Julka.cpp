#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    BeatMeScanf;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    for(int i = 0; i<9; i++)
    {
        int K = 0, N = 0, num_apple , extra;

        cin>>num_apple>>extra;
        N = (num_apple - extra) / 2;
        K = N + 2;
        cout<<K<<"\n";
        cout<<N<<"\n";
    }


}
