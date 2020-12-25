#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    int mod=1000000007;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> a;
    a.resize(n);
    for(int i=0;i<n&&i<6;i++){
        ll temp=0;
        for (int j=0;j<i;j++){
            temp+=a[j];
        }
        a[i]=temp+1;
    }
    for(int i=6;i<n;i++){
        a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%mod;
    }
    cout<<a[n-1];
}