#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    if(n<=10) cout<<s<<endl;
    else cout<<s[0]<<n-2<<s[n-1]<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}    