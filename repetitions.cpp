#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    string s;
    int temp=1;
    int ans=1;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]) {
            temp++;
            if (temp > ans) ans = temp;
        }else{
            temp=1;
        }
    }
    cout<<ans;

}