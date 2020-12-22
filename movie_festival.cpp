#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
bool comp(pair<int,int> &x1, pair<int,int>& x2){
    return x1.second<x2.second;
}
int main(){
    ios::sync_with_stdio(false);
    pair<int,int> mo[200000];
    
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        //cin>>a>>b;
        cin>>mo[i].first;
        cin>>mo[i].second;
    }
    sort(mo,mo+n,comp);
    int ans=1;
    int j=0;
    for (int i=0;i<n;i++){
        if(mo[i].first>=mo[j].second){
            ans++;
            j=i;
        }
    }
    cout<<ans;

    
}