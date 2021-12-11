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
    // char a[101], b[101];
    // cin>>a>>b;
    // for(int i=0;a[i];i++)
    // {
    // if(a[i]==b[i])
    // cout<<"0";
    // else
    // cout<<"1";
    // }
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i])
        cout<<"0";
        else
        cout<<"1";
    }

}