#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int b[]={0,6,28,96};
    for(int i=0;i<n&&i<4;i++){
        cout<<b[i]<<'\n';
    }
    if(n>4){
        for (int i=5;i<=n;i++){
            ll s=i*i;
            ll x2=4;
            ll x3=8;
            ll x4 = 4 + 4*(i-4);
            ll x6 = 4*(i-4);
            ll x8=(i-4)*(i-4);
            cout<<(x2*(s-3)+x3*(s-4)+x4*(s-5)+x6*(s-7)+x8*(s-9))/2<<'\n';
            
        }
    }

}