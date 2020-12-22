#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
bool comp(pair<int,int> &x1, pair<int,int>& x2){
    return x1.first<x2.first;
}
int main(){
    ios::sync_with_stdio(false);
    int n,x;
    cin>>n>>x;
    pair<int,int> arr[200000];
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr,arr+n,comp);
    int i=0;
    int j=n-1;
    int s;
    while(i<j){
        s=arr[i].first+arr[j].first;
        if (s>x)j--;
        else if(s<x)i++;
        else{
            break;
        } 
    }
    if(arr[i].first+arr[j].first==x&&i!=j){
        cout<<arr[i].second+1<<' '<<arr[j].second+1;
    }else cout<<"IMPOSSIBLE";
}