#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    ll mod=10*10*10*10*10*10*10*10*10+7;
    int n; 
    cin>>n;
    ll ans=1;
    for(int i=0;i<n;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans;
}