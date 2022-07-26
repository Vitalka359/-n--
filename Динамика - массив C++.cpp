#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<2) return 1;
    vector<int>a(n+1);
    a[0] = 1; a[1] = 1;
    for(int i = 2; i<n+1; i++)
        a[i] = a[i-1]+a[i-2];
    return a[n];
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cout << "f(n) = " << f(n) << '\n';
}