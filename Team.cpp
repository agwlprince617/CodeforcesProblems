#include<bits/stdc++.h>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     int cnt=0;
    int tc;
    cin>>tc;
    while(tc--){
    int a,b,c;
    cin>>a>>b>>c;
   
    int sum=a+b+c;
    if(sum>=2) cnt++;
    }
    cout<<cnt<<endl;
}    