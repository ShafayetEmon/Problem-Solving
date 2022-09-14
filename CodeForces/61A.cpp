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
    string str1, str2;
    cin >> str1 >> str2;

    vector<int> v;

    for(int i = 0; i< str1.size(); i++)
    {
        int x = int(str1[i] ^ str2[i]);
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++)
        cout<<v[i];
    puts("");

    return 0;
}

