#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> v(n+1);
    v[0]=1;
    v[1]=0;
    for(int i=2;i<n+1;i++){
        v[i]=(i-1)*(v[i-1]+v[i-2])%MOD;
    }
    cout<<v[n];
}