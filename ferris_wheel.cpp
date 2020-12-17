#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int arr[200000];
int main(){
    ios::sync_with_stdio(false);
    int n,x;
    cin>>n>>x;
    int ans=0;
    int p;
    for (int i=0;i<n;i++){
        cin>>p;
        arr[i]=p;
    }
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]<=x){
            i++;
            j--;
            ans++;
        }else {
            j--;
            ans++;
        }
    }if(i==j) ans++;
    cout<<ans;
}