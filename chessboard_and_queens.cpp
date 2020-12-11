#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    vector<string> v;
    string s;
    int l=1;
    int arr[8];
    int ans=0;
    for(int i=0;i<8;i++){
        cin>>s;
        v.push_back(s);
        l*=8;
    }
    int k;   
    for(int i=0;i<l;i++){
        k=i;
        bool n=false;
        for (int j=0;j<8;j++){
            if(v[j][k%8]=='*')break;
            arr[j]=k%8;
            k/=8;
            for(int x=0;x<j;x++){
                if(arr[j]==arr[x]||arr[j]==arr[x]-x+j||arr[j]==arr[x]+x-j){
                    n=true;
                    break;
                }
            }
            if(n) break;
            if(j==7){
                ans++;
            }

        }
    }
    cout<<ans;
}