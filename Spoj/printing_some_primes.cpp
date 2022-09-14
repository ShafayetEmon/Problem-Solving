#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);
#define limit 100000001

bool isMarked[limit+2];

void sieve()
{
    isMarked[1] = 1;
    for(int i = 2; i * i <= limit; i++)
    {
        if(isMarked[i] == 0)
        {
            for(int j = i * i; j<= limit; j += i)
                isMarked[j] = 1;
        }
    }

}


int main()
{
    BeatMeScanf;
    
    sieve();

    int cnt = 0;

    for(int i = 2; i<= limit; i++)
    {
        if(isMarked[i] == 0)
        {
            if(cnt % 100 == 0)
                cout<<i<<endl;
            cnt++;
        }
    }
    return 0;
}

