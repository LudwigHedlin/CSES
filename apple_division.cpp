#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    ll sum=0;
    ll arr[20];
    int n;
    cin>>n;
    ll p;
    int sub=1;
    for (int i=0;i<n;i++){
        cin>>p;
        sum+=p;
        arr[i]=p;
        sub*=2;
    }
    ll ans=sum;
    for(int i=1;i<sub;i++){
        ll s=0;
        int j=i;
        int c=0;
        while(j!=0){
            s+=(j%2)*arr[c];
            j/=2;
            c++;
        }
        ans=min(abs(2*s-sum),ans);
    }
    cout<<ans;
}