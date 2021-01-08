#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
bool pairSort(pair<int,int>& p1,pair<int,int>& p2){
    return p1.first<p2.first;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end(),pairSort);
    int ans=1;
    int temp=v[0].second;
    for(int i=1;i<n;i++){
        if (v[i].second<temp){
            ans++;
        } 
        temp=v[i].second;
    }
    cout<<ans;
}