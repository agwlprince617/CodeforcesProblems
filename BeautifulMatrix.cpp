#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j,a,ans;
for(i=1; i<=5; i++){
	for(j=1; j<=5; j++){
		cin>>a;
		if(a) ans=abs(3-i)+abs(3-j);
	}
}
cout<<ans<<endl;
}
