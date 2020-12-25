#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll exp1(ll a,ll b){
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
ll exp2(ll b,ll c){
    if(c==0)return 1;
    else if(b==0)return 0;
    ll temp=b;
    ll ans=1;
    while (c!=0){
        if(c%2)ans=(ans*temp)%(mod-1);
        
        c/=2;
        temp=(temp*temp)%(mod-1);
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<exp1(a,exp2(b,c))<<'\n';
    }
}