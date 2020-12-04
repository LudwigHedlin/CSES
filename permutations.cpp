#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    if (n==2||n==3) cout<<"NO SOLUTION";
    else{
        for (int i=0;i<n-n/2-n%2;i++)cout<<n-2*i-1<<' ';
        for (int i=0;i<n/2+n%2-1;i++) cout<<n-2*i<<' ';
        
        cout<<n-2*(n/2)+2-2*(n%2)<<'\n';

    }
}