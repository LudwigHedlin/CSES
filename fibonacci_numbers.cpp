#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
#define MOD 1000000007
class m2{
    public:
    ll x1,x2,x3,x4;

    m2(ll X1, ll X2, ll X3, ll X4) : x1(X1), x2(X2), x3(X3), x4(X4){}

    void operator*=(m2& m){
        ll x_1=m.x1*x1+m.x3*x2;
        ll x_2=m.x2*x1+m.x4*x2;
        ll x_3=m.x1*x3+m.x3*x4;
        ll x_4=m.x2*x3+m.x4*x4;

        x1=x_1;
        x2=x_2;
        x3=x_3;
        x4=x_4;
    }
    void modulo(ll n){
        x1=x1%n;
        x2=x2%n;
        x3=x3%n;
        x4=x4%n;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    n=n%2000000016;
    m2 m_1(1,1,1,0);
    m2 m_2(1,1,1,0);
    if(n==0){
        cout<<0;
    }else if(n==1){
        cout<<1;
    }else{
        int temp;
        while(n!=0){
            temp=n%2;
            n/=2;
            if(temp){
                m_1*=m_2;
                m_1.modulo(MOD);
            }
            m_2*=m_2;
            m_2.modulo(MOD);
        }
        cout<<m_1.x4;
    }
}