#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
string str1 = "hello";

int main()
{
    BeatMeScanf;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string str2;
    cin>>str2;

    int p = 0, cnt = 0;

    for(int i=0; i<str2.size(); i++){
        if(str2[i]==str1[p]){
            p++;
            cnt++;
        }
    }
    if(cnt==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
