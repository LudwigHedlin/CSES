#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    ll sum=0;
    ll x;
    vector<ll> v(n+1);
    v[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>x;
        sum+=x;
        v[i]=sum;
    }
    int a,b;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        cout<<v[b]-v[a-1]<<endl;
    }

}