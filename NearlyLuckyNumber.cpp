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
    int q=0;
    string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	if(s[i]=='4' || s[i]=='7')q++;
	if(q==4 || q==7)cout<<"YES";
	else cout<<"NO";
}

