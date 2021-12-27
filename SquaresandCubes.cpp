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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int tc;
	cin>>tc;
	while(tc--)
	{
	ll int n ;
	cin>>n;
	// ll int res = (ll int)sqrt(n) + (ll int)cbrt(n)-(ll int)(sqrt(cbrt(n)));
	int c1=0,c2=0,c3=0;
for(int i=1;i*i<=n;i++){
    c1++;
}
for(int i=1;i*i*i<=n;i++){
    c2++;
}
for(int i=1;i*i*i*i*i*i<=n;i++){
    c3++;
}
cout <<c1+c2-c3<<"\n";
}
	return 0;
}
//Exceed the time complexity
//  for(int i=1;i<=n;i++){
//             if(sqrt(i)==int(sqrt(i)) || cbrt(i)==int(cbrt(i))){
//                 count++;
//             }
//         }
// int c1=0;

// for(int i=1;i*i<=n;i++){
//     c1++;
// }
// for(int i=1;i*i*i<=n;i++){
//     c1++;
// }