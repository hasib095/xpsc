#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int mod = 1e9 + 7;
void file()
{
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
void solve()
{
    int a,b;cin>>a>>b;
    int n=2;
    int sum=0;
    while(n--)
    {
        if(a>b){
            sum+=a;
            a--;
        }
        else{
            sum+=b;
            b--;
        }
    }
    cout<<sum<<endl;
}

int main()
{   file();
    optimize();
    solve();
    //int t; cin >> t; while(t--){solve();}
    return 0;
}