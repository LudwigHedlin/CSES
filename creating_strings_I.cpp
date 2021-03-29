#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;


void one_less(string &s){
    int n=s.length()-1;
    int i=n;
    while(s[i]<=s[i-1]){
        i--;
    }
    i--;
    int j=n;
    while(s[j]<=s[i]){
        j--;
    }
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    sort(s.begin()+i+1,s.end());
    
    
}

int main(){
    ios::sync_with_stdio(false);
    string s;
    int p[9]={1,1,2,6,24,120,720,5040,40320};
    cin>>s;
    int arr[26]={0};
    int l=s.length();
    for (int i=0;i<l;i++) arr[s[i]-'a']++;
    int d=1;
    for(int i=0;i<26;i++){
        d*=p[arr[i]];
    }
    int ans=p[l]/d;
    cout<<ans<<'\n';
    sort(s.begin(),s.end());
    cout<<s<<'\n';
    for(int i=0;i<ans-1;i++){
        one_less(s);
        cout<<s<<'\n';
    }

}