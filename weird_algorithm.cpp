#include <sstream>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
    stringstream s;
    long long n;
    cin>>n;
    while(n!=1){
        s<<n<<' ';
        if(n%2==0){
            n/=2;
        }else{
            n*=3;
            n++;
        }
    }
    s<<n<<'\n';
    cout<<s.str();
}