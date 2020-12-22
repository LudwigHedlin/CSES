#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    int arr[200000];
    int n;
    cin>>n;
    int temp=0;
    int ans=1;
    int k;
    int j=0;
    for (int i=0;i<n;i++){
        cin>>k;
        arr[i]=k;
        if(s.find(k)==s.end()){
            s.insert(k);
            temp++;
            if(temp>ans)ans=temp;
        } 
        else {
            while(arr[j]!=k){
                s.erase(arr[j]);
                j++;
                temp--;
            }
            j++;
        }
    }
    ans=max(temp,ans);
    cout<<ans;
}