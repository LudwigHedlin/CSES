#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
int arr[1000001]={0};
int main(){
    ios::sync_with_stdio(false);
    int n,x;
    cin>>n>>x;
    vector<int> c;
    c.resize(n);
    for(auto& i: c){
        cin>>i;
        arr[i]=1;
    }
    sort(c.begin(),c.end());
    for(int i=c[0]-1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(c[j]>=i)break;
            else if(arr[i-c[j]]>0&&arr[i]>0){
                arr[i]=min(arr[i],arr[i-c[j]]+1);
            }else if(arr[i]<=0&&arr[i-c[j]]>0){
                arr[i]=arr[i-c[j]]+1;
            }
        }
    }
    cout<<arr[x]+(arr[x]==0)*(-1);
}