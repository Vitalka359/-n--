#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<2) return 1;
    int a = 1, b = 1;
    while(n--){
        a += b;
        b = a-b;
    } return b;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cout << "f(n) = " << f(n) << '\n';
}