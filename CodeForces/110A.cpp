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
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i<str.size(); i++)
    {
        if(str[i] == '4' || str[i] == '7')
            cnt++;
    }

    if(cnt == 4 || cnt == 7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

