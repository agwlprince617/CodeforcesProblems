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
    
    int arr[4];
    for(int i=0;i<4;i++) cin>>arr[i];
    sort(arr,arr+4);
    int c=0;
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]) c++;
        
    }
    cout<<c<<endl;
}
