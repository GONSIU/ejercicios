#include <bits/stdc++.h>
#define sa '\n'
#define forn(i,n) for(int i = 0; i < int(n); i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,m,k;
    cin>> n>>m>>k;
    vector<ll>a(n+2,0),in(m+2,0),sup(m+2,0),d(m+2,0),prefix(m+2,0);
    forn(i,n){cin>>a[i];}
    forn(i,m)
    {
        cin>>in[i]>>sup[i]>>d[i];
        in[i]--;sup[i]--;
    }
    ll x,y;
    while(k--)
    {
        cin >> x >>y;
        prefix[x-1]++;
        prefix[y]--;
    }
    ll s=0;
    vector<ll>sum(m+2,0);
   
    forn(i,m)
    {
        s+=prefix[i];
     //   cout<<"in "<<in[i]<<" sup= "<<sup[i] <<sa;
        sum[in[i]]+=s*d[i];
        sum[sup[i]+1]-=s*d[i];
    }
    //forn(i,m){cout<<sum[i]<<" ";}cout<<sa;
    s=0;
    forn(i,n)
    {
        s+=sum[i];
        a[i]+=s;
    }
    forn(i,n){cout<<a[i]<<" ";};
    return 0;
}