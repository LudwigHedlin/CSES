#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

typedef long long ll;
void co(const int& i,const int& j,int& d,vector<vector<int>>& v1,vector<string>&  v2){
    v1[i][j]=d;
    if(i-1>=0&&v1[i][j]<v1[i-1][j]){
        co(i-1,j,v1[i][j],v1,v2);
    }
    if(i+1<v1.size()&&v1[i][j]<v1[i+1][j]){
        co(i+1,j,v1[i][j],v1,v2);
    }
    if(j-1>=0&&v1[i][j]<v1[i][j-1]){
        co(i,j-1,v1[i][j],v1,v2);
    }
    if(j+1<v1[i].size()&&v1[i][j]<v1[i][j+1]){
        co(i,j+1,v1[i][j],v1,v2);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int count=1;
    vector<vector<int> > c(n,vector<int>(m,0));
    vector<string> v(n);
    int k=0;
    for(auto& i:v){
        cin>>i;
        for(int j=0;j<m;j++){
            if(i[j]=='.'){
                c[k][j]=count;
                count++;
            }
        }
        k++;
    }
    set<int> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='.'){
                co(i,j,c[i][j],c,v);
                s.insert(c[i][j]);
                
            }
            
        }
    }
    
    cout<<s.size();
    
}