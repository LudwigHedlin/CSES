#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int arr[91]={0};
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        arr[s[i]]+=1;
    }
    int u=0;
    int u1=0;
    for(int i='A';i<'Z'+1;i++){
        if(arr[i]%2!=0) {
            u++;
            u1=i;
        }
    }
    char o;
    if(l%2==0&&u==0){
        for(int i='A';i<'Z'+1;i++){
            o=i;
            for(int j=0;j<arr[i]/2;j++){
                cout<<o;
            }
        }
        for(int i='Z';i>'A'-1;i--){
            o=i;
            for(int j=0;j<arr[i]/2;j++){
                cout<<o;
            }
        }
    }else if(l%2==1&&u==1){
        for(int i='A';i<'Z'+1;i++){
            if(i!=u1){
                o=i;
                for(int j=0;j<arr[i]/2;j++){
                    cout<<o;
                }
            }
        }
        o=u1;
        for(int i=0;i<arr[u1];i++) cout<<o;

        for(int i='Z';i>'A'-1;i--){
            if(i!=u1){
                o=i;
                for(int j=0;j<arr[i]/2;j++){
                    cout<<o;
                }
            }
        }
    }else cout<<"NO SOLUTION";
    
}