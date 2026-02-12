#include <bits/stdc++.h>
#define sa '\n'
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;
int main() 
{
    ll n,x;
    cin>>n>>x;
    vector<ll>vec(n);
    vector<ll>sum(n+1);
    forn(i,n)cin>>vec[i];
    sum[0]=0;
    forsn(i,1,n+1)
    {
        sum[i]=sum[i-1]+vec[i-1];
    }
    
    ll sup=1,inf=0,c=0;
    while ( (sup>=inf) && (sup<=n))
    {
        if(sum[sup]-sum[inf] < x)
        {
            sup++;
            continue;
        }
        else if(sum[sup]-sum[inf] > x)
        {
            inf++;
            continue;
        }
        if(sum[sup]-sum[inf] == x)
        {
            c++;
        }
        sup++;
    }
    cout<<c<<sa;
    return 0;
}
