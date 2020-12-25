#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007;
typedef long long ll;
ll exp(ll a,ll b){
    if(b==0)return 1;
    else if(a==0)return 0;
    ll temp=a;
    ll ans=1;
    while (b!=0){
        if(b%2)ans=(ans*temp)%mod;
        b/=2;
        temp=(temp*temp)%mod;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout<<exp(a,b)<<'\n';
    }
}