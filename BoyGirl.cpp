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
char c;
set<char>s;
while(cin>>c)
s.insert(c);
if(s.size()%2==0) 
cout<<"CHAT WITH HER!"; 
else 
cout<<"IGNORE HIM!";
return 0;
}