#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
        freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    for(int i = 1; i <= n+1; i++)
    {
        for(int j = 0; j <= n-i; j++)
            cout<<"  ";
        for(int j = 0; j<i; j++)
        {
            if(j == 0)  
                cout<<j;
            else
                cout<<" "<<j;
        }
            
        for(int j = i - 2; j >= 0; j--)
                cout<<" "<<j;
            
        cout<<"\n";
    }

    for(int i = n; i >= 1; i--)
    {
        for(int j = 0; j <= n-i; j++)
            cout<<"  ";
        for(int j = 0; j<i; j++)
        {
            if(j == 0)  
                cout<<j;
            else
                cout<<" "<<j;
        }
            
        for(int j = i - 2; j >= 0; j--)
            cout<<" "<<j;
            
        cout<<"\n";
    }
    
    return 0;
}

