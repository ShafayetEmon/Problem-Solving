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

    int cnt = 0;
    string str;
    cin>>str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i]=='H' ||str[i]=='Q' ||str[i]=='9' )
            {
                cout<<"YES"<<endl;
                cnt=1;
                break;
            }
    }
    
    if(cnt==0)
        cout<<"NO"<<endl;
    return 0;
}

