#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    ll arr[200000];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int i=0;
    int j=1;
    ll s=arr[0];
    ll ans=s;
    if(s>ans)ans=s;
    while(j<n){
        if(s<0){
            i=j;
            while(arr[i]<=0&&i<n-1){
                if(arr[i]>ans)ans=arr[i];
                i++;
            }
            s=arr[i];
            if(s>ans)ans=s;
            j=i+1;
        }else{
            s+=arr[j];
            if(s>ans)ans=s;
            j++;
        }
    }
    cout<<ans;
}