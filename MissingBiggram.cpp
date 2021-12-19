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


void solve(){
    ll n; cin>>n;
	vector<string> v(n-2);
	for(int i=0;i<n-2;i++) cin>>v[i];

	string res="";
	res+=v[0][0];
	int f=0;
	for(int i=1;i<n-2;i++){
		if(v[i][0]!=v[i-1][1]){
			f=1;
			res+=v[i-1][1];
		}
		res+=v[i][0];
	}
	res+=v[n-3][1];
	if(f==0) res+='b';
	cout<<res<<endl;
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
    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
  return 0;
}