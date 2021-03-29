#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>v(n);
    for(auto& i:v){
        cin>>i;
    }
    vector<vector<ll>> v2(n,vector<ll>(n,0));
    int down=1;
    int right=1;
    for(int i=0;i<n;i++){
        if(v[0][i]=='*')right=0;
        if(v[i][0]=='*')down=0;
        v2[0][i]=right;
        v2[i][0]=down;
    }
    for(int i=1;i<n;i++){
        for (int j=1;j<n;j++){
            v2[i][j]=(v2[i-1][j]+v2[i][j-1])%MOD;
            if(v[i][j]=='*')v2[i][j]=0;
        }
    }
    cout<<v2[n-1][n-1];
}