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
    string a,s,ans;
	int tc;
	cin>>tc;
	while(tc--)
	{
         cin>>a>>s;
         int j=s.size()-1;
         
          ans="NO";
          ans="";
         bool ok=true;
         for(int i=a.size()-1;i>=0;i--){
             if(j<0){
                 ok=false;
                 break;
             }
             ll n1,n2;
             n1=a[i]-'0';
             n2=s[j]-'0';
             ll res;
             char ch='0';
             if(n2>=n1){
                 res=n2-n1;
                 j--;
             }
             else{
                 if(j<1 or s[j-1]!='1'){
                     ok=false;
                     break;
                 }
                 res=10+n2-n1;
                 j-=2;
             }
            ch+=res;
            ans+=ch;
         }
         if(!ok){
             cout<<-1<<endl;
             continue;
         }
         while(j>=0){
             ans+=s[j];
             j--;
         }
         while(ans.back()=='0') ans.pop_back();
         reverse(ans.begin(),ans.end());
         cout<<ans<<endl;
     
	}
	return 0;
}
