#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    BeatMeScanf;
    #ifndef ONLINE_JUDGE
        freopen("/home/shafayetemon/Documents/in.txt", "r", stdin);
        freopen("/home/shafayetemon/Documents/out.txt", "w", stdout);
    #endif

    string str1, str2, str, temp;
    cin >> str1 >> str2 >> str;

    temp = str1+ str2;

    sort(temp.begin(), temp.end());
    sort(str.begin(), str.end());

    if(temp == str)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

