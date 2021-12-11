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
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int arr[n];
    int total_sum=0,sum=0,avg=0,c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total_sum+=arr[i];
    }
     avg=total_sum/2;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
       
        if(sum<=avg){
             sum+=arr[i];
             c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
