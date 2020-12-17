#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    map<int,bool> d;
    int ans=0;
    int x;
    for (int i=0;i<n;i++){
        cin>>x;
        if(d.find(x)==d.end()){
            ans++;
            d[x]=true;
        }
    }
    cout<<ans;
}