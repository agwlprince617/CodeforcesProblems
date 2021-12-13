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
    
    int n,t;
    cin>>n;
    int a[100005];
    
    int taxi_cnt=0,ones=0,twos=0,threes=0,fours=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) ones++;
        if(a[i]==2) twos++;
        if(a[i]==3) threes++;
        if(a[i]==4) fours++;
    }

    taxi_cnt+=fours;
    
    while(threes and ones){
        threes-=1;
        ones-=1;
        taxi_cnt+=1;
    }
    
    if(threes and ones==0) taxi_cnt+=threes, threes-=1;

    taxi_cnt=taxi_cnt+twos/2;

    if(twos%2!=0){
        if(ones<=2){
            taxi_cnt+=1;
            ones=0; twos=0;
        }
        else{
            ones-=2;
            twos=0;
            taxi_cnt+=1;
        }
    }

    if(ones!=0){
        taxi_cnt+=ones/4;
        if(ones%4!=0) taxi_cnt+=1;
    }
 
    cout<<taxi_cnt<<endl;

}

