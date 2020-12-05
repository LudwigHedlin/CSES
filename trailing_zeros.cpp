#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int f=0;
    int temp;
    for(int i=5;i<n+1;i+=5){
        temp=i;
        while(temp%5==0){
            f++;
            temp/=5;
        }
    }
    
    cout<<f;
}