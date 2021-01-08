#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    ll k;
    for(int i=0;i<q;i++){
        cin>>k;
        if(k<10){
            cout<<k<<'\n';
        }else{
            ll temp=9;
            ll pow=10;
            int count=2;
            while(temp+count*pow*9<k){
                temp+=count*pow*9;
                count++;
                pow*=10;
            }
            ll c;
            while(k-temp>count){
                c=count;
                while(c<<1<k-temp){
                    c<<=1;
                }
                temp+=c;
                pow+=c/count;
            }
            for(int j=0;j<count-k+temp;j++){
                pow/=10;
            }
            cout<<pow%10<<'\n';
        }
    }
}