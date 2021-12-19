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
    while(tc--){
        ll n,k;
        cin>>n>>k;
        ll arr[4];
        for(int i=0;i<4;i++){
            ll p; cin>>p;
            ll temp[p];
            for(int j=0;j<p;j++){
                cin>>temp[j];
            }
            arr[i]=temp[p-1]-temp[0];
        }
        cout<<max(max(arr[0]*k,arr[1]*k),max(arr[2]*n,arr[3]*n))<<endl;
    }
    return 0; 

}


