#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[1]=='+') x++;
        else x--;
    }
    cout<<x<<endl;
    
}    