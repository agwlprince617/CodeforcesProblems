#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    int cnt=0;
    for(int i=1;i<=n;i++){
      if(arr[i]>=l and arr[i]<=r){
          if(k>=arr[i]){
               k-=arr[i];
               cnt++;
          } 
      }  
    }
    cout<<cnt<<endl;
}

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
        solve();
    }
    return 0;
}
