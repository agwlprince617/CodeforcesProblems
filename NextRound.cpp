#include<bits/stdc++.h>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>=arr[m] and arr[i]>0) cnt++;
    }
    cout<<cnt<<endl;
    
}    