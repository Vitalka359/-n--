#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> multip (vector<vector<int>> a, vector<vector<int>> b, int mod){
    vector<vector<int>> ans(2, vector<int>(2, 0));
    for(int i = 0; i<2; i++)
        for(int u = 0; u<2; u++){
            for(int k = 0; k<2; k++)
                ans[i][u] = (ans[i][u]+(a[i][k]*b[k][u])%mod)%mod;
        }
    return ans;
}
int f(long long int n, int mod){
    n--;
    vector<vector<int>> a, ans;
    a = {{0,1},{1,1}}, ans = {{0,1},{1,1}};
    while(n > 0){
        if(n & 1)
            ans = multip(ans, a, mod);
        a = multip(a, a, mod);
        n >>= 1;
    } return ans[1][1];
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long int n = 0;
    int mod = 1000009;
    for(; n<20; n++)
        cout << n << " " << f(n, mod) << '\n';
}