#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,a,len,bre;
    cin>>n>>m>>a;
    len=n/a;
    if(n%a!=0) len++;
    bre=m/a;
    if(m%a!=0) bre++;
    cout<<len*bre<<endl;
}    