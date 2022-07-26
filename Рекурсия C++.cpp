#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if (n<2) return 1;
    return f(n-1) + f(n-2);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cout << "f(n) = " << f(n) << '\n';
}