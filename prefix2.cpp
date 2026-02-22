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
    vector<ll>v(n);
    vector<ll>s(n+1);
    map<ll,ll>m;
    forn(i,n)
    {
        cin>>v[i];
    }
    s[0]=0;
    forsn(i,1,n+1)
    {
        s[i]=s[i-1]+v[i-1];
    }
    ll c=0;
    m[0]++;
    forsn(i,1,n+1)
    {
        if(m.count(s[i]-x) == 1)
        {
            c+=m[s[i]-x];
        }
        m[s[i]]++;
    }
    cout<<c<<sa;
    return 0;
}
