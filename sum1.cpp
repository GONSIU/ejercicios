#include <bits/stdc++.h>
#define sa '\n'
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>inf(n+1,0),sup(n+1,0);
    vector<ll>rang(n,0);
    forn(i,n)
    {
        cin>>a[i];
    }
    ll x,y,sum=0; 
    forn(i,k)
    {
        cin>>x>>y;
        inf[x-1]+=1;
        sup[y]-=1;
    }
    ll raz=0;
    forn(i,n)
    {
        raz+=inf[i];
        raz+=sup[i];
        rang[i]=raz;
    }
    sort(rang.begin(),rang.end());
    sort(a.begin(),a.end());
    forn(i,n)
    {   
        sum+=(a[i]*rang[i]);
    }
    cout<<sum<<sa;
	return 0;
}

