#include <bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int>a){
	int z=a[a.size()-1];
	vector<int>xi;
	for(int i=0;i<a.size();++i) if(a[i]<=z) xi.push_back(a[i]);
	for(int i=0;i<a.size();++i) if(a[i]>z) xi.push_back(a[i]);
	return xi;
}

int main() {
	 ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int tc;
    cin >> tc ;
	while(tc--){
		int n;
		cin>>n;
		vector<int>a(n);
		int maxi=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(a[i]>maxi) maxi=a[i];
		}
		int res=0;
		while(a[a.size()-1]!=maxi){
			a=fun(a);
			++res;
		}
		cout<<res<<"\n";
	}
	return 0;
}