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
    string a,b="hello";
    int j=0,cnt=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[j]){
            j++; cnt++;
        }
        if(cnt==5)  break;
    }
    if(cnt==5)   cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
