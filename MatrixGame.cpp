#include<bits/stdc++.h>
using namespace std;
#define fer(i,a,b) for(re i = a; i<b; ++i)
#define re register int
#define pb push_back
#define ll long long
#define mod 1000000007
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a[51][51];
    ll tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        set<int> r,c;
        for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]==1) r.insert(i),c.insert(j);
          }
        }
        int p=n-r.size();
        int q=m-c.size();
        int mn=min(p,q);
        if(mn%2){
          cout<<"Ashish"<<endl;
        }
        else{
          cout<<"Vivek"<<endl;
        }
    }
  return 0;
}
