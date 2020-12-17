#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int a[200000];
int b[200000];
int main(){
    ios::sync_with_stdio(false);
    int n,m,k;
    int ans=0;
    cin>>n>>m>>k;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=x;
    }
    for (int i=0;i<m;i++){
        cin>>x;
        b[i]=x;
    }
    sort(a,a+n);
    sort(b,b+m);
    int i=0;
    int j=0;
    while (i<n&&j<m){
        if(a[i]>=b[j]-k&&a[i]<=b[j]+k){
            ans++;
            i++; 
            j++;
        }else if(a[i]<b[j]-k) i++;
        else if(a[i]>b[j]+k)j++; 
    }
    cout<<ans;
}