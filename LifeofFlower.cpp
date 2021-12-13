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

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
        int n; cin>>n;
        int prev = -1;
        int ans = 1;
        int flag = 0;
        for(int i=0; i<n; i++) {
            int a; cin>>a;
            if(a==0&& prev==0) {
                flag =1;
            }
            else if(a==1&& prev==1) {
                ans+=5;
            }
            else if(a==1&&prev!=1) {
                ans++;
            }
            prev = a;
        }
        if(flag) {
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
	}
	return 0;
}