#include <bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    BeatMeScanf;
    //freopen("G:/C++/in.txt", "r", stdin);
    //freopen("G:/C++/out.txt", "w", stdout);
    string str1;
    cin>>str1;

    string str2[10];
    for(int i=0; i<10; i++)
        cin>>str2[i];

    string ans="";
    for(int i=0; i<80; i++)
    {
        ans+=str1[i];
        if((i+1)%10==0)
        {
            for(int j=0; j<=9; j++)
            {
                if(ans==str2[j])
                    cout<<j;
            }
            ans="";
        }
    }
}
