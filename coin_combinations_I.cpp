#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll arr[1000001]={0};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> v;
    v.resize(n);
    for(auto& i: v){
        cin>>i;
        arr[i]=1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=x;i++){
        for(int j=0;j<n;j++){
            if(v[j]>=i)break;
            else{
                arr[i]=(arr[i]+arr[i-v[j]])%mod;
            }
        }
    }
    cout<<arr[x];
}