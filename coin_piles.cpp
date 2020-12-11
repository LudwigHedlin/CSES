#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    ll a,b;
    for (int i=0;i<t;i++){
        cin>>a>>b;
        if((a+b)%3==0&&b<=2*a&&a<=2*b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
}