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
    int a,b,c;
    cin>>a>>b>>c;
    int n1,n2,n3,n4;
    n1=a+b+c;
    n2=a*b*c;
    n3=(a+b)*c;
    n4=a*(b+c);
    cout<<max(max(n1,n2),max(n3,n4))<<endl;
}
