#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll sum=0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v){
        cin>>i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(sum+1<v[i]){
            break;
        }else{
            sum+=v[i];
        }
    }
    cout<<sum+1;
}