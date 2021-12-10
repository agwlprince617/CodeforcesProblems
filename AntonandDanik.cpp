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
    int n;
    cin>>n;
    string a;
    cin>>a;
    int ca=0,cd=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='A') ca++;
        else cd++;
    }
    if(ca>cd) cout<<"Anton"<<endl;
    else if(ca<cd) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}

