#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    long long n;
    long long a;
    long long sum=0;
    cin>>n;
    for(int i=0; i<n-1;i++){
        cin>>a;
        sum+=a;
    }

    cout<< n * (n + 1) / 2 - sum;
}