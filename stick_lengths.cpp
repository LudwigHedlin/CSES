#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a;

    int n;
    cin>>n;
    ll l;
    a.resize(n);
    for(auto& i: a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    l=a[n/2];
    ll ans=0;
    for(int i=0;i<n/2;i++){
        ans+=l-a[i];
    }
    for(int i=n/2;i<n;i++){
        ans+=a[i]-l;
    }
    cout<<ans;
}