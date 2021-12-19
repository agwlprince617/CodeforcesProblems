#include<bits/stdc++.h>
#define fer(i,a,b) for(re i = a; i<b; ++i)
#define re register int
#define pb push_back
#define ll long long
#define mod 1000000007
using namespace std;
int rep[500001];
int queries[500001][3];
int ans[500001];

int main(){
    int q;
    cin >> q;
    //Initialise the array
    for (int i = 0; i < 500001; i++){
        rep[i] = i;
    }
    for (int i  = 0; i < q; i++){
        cin >> queries[i][0] >> queries[i][1];
        if (queries[i][0] == 2) cin >> queries[i][2];
    }
    int a = 0;
    //if corresponding to 1 in the hashmap there comes a different value update
    //else print it in the ans
    for (int i = q-1; i >= 0; i--){
        if (queries[i][0] == 1){
            ans[a++] = rep[queries[i][1]];
        }
        //For 2 we just need to replace x and y
        else{
            rep[queries[i][1]] = rep[queries[i][2]];
        }
    }
    //Reverse as we are going from top to bottom
    while (a--){
        cout << ans[a] << " ";
    }
    cout << endl;
}
