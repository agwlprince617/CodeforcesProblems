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



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tc;
    cin>>tc;
    vector<ll> v;
    while(tc--){
        int a;
        cin>>a;
       if(a==1){
           ll x;
           cin>>x;
           v.push_back(x);
       }
       else{
           ll x,y;
           cin>>x>>y;
           replace(v.begin(), v.end(),x,y);
       }
    }
    for(auto it:v){
           cout<<it<<" ";
    }
    return 0; 
}


