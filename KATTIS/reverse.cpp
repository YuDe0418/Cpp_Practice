<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,a,b) for(int i=b-1;i>=a;i--)

int main(){
    int n; cin >> n;
    int X[n];
    FOR(i,0,n){
        cin >> X[i];
    }
    rFOR(j,0,n) cout << X[j] << ' ';
=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,a,b) for(int i=b-1;i>=a;i--)

int main(){
    int n; cin >> n;
    int X[n];
    FOR(i,0,n){
        cin >> X[i];
    }
    rFOR(j,0,n) cout << X[j] << ' ';
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}