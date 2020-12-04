#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    long long x;
    int n;
    long long ans=0;
    cin>>n;
    long long temp=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if (x>temp) temp=x;
        else ans+=temp-x;
    }
    cout<<ans;
}