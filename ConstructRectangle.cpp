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

int gcd(int x,int y){
    //Euclidean Algorithm
    return y==0?x:gcd(y,x%y);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll tc,a,b,c;
    cin>>tc;
    while(tc--){
        cin>>a>>b>>c;
        if(a+b==c or b+c==a or c+a==b or (a==b and c%2==0) or (b==c and a%2==0) or (c==a and b%2==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
  return 0;
}
