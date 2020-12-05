#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>> t;
    for (int i=0;i<t;i++){
        ll x;
        ll y;
        ll ans;
        cin>>x>>y;
        if(x>y){
            if(x%2==0){
                ans=x*x-y+1;
            }else{
                ans=x*x-2*x+y+1;
            }
        }else{
            if (y%2==0){
                ans=y*y-2*y+x+1;
            }else{
                ans=y*y-x+1;
            }
        }
        cout<<ans<<'\n';
    }
}