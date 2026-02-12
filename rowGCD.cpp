#include <bits/stdc++.h>
#define sa '\n'
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;
int main() 
{
    int n, m;
    cin >> n >> m;
    vector <ll> a(n);
    vector <ll> b(m); 
    vector <ll> c(m);
    ll res=0; 
    forn(i,n){cin >> a[i];}
    forsn(i,1,n)
    {
        res=gcd(res,a[i]-a[0]);
    } 
    //cout << "res " << res << endl;
    forn(i,m){cin >> b[i];}
    forn(j,m)
    {
        c[j]=gcd(b[j]+a[0],res);
    }

    forn(i,m)
    {
        cout << c[i] << " ";
    }
    return 0;
}
