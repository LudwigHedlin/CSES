#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    if(n%4==0){
        cout<<"YES\n";
        cout<< n/2<<'\n';
        for(int i=0;i<n/4;i++){
            cout<<2*i+1<<' '<<n-2*i<<' ';
        }
        cout<<'\n'<<n/2<<'\n';
        for(int i=0;i<n/4;i++){
            cout<<2*i+2<<' '<<n-1-2*i<<' ';
        }
        
    }else if((n+1)%4==0){
        cout<<"YES\n"<<n/2+1<<'\n'<<1<<' '<<2<<' ';
        for(int i=0;i<(n-3)/4;i++){
            cout<<2*i+4<<' '<<n-2*i<<' ';
        }
        cout<<'\n'<<n/2<<'\n'<<3<<' ';
        for(int i=0;i<(n-3)/4;i++){
            cout<<2*i+5<<' '<<n-1-2*i<<' ';
        }
    }else{
        cout<<"NO\n";
    }
}