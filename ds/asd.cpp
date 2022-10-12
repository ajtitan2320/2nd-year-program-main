#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans="";
        int i = 0 ,j = s.size()-1,k=s.size()-1;
        while(i<s.size() && j>=0){
            ans.push_back(s[i++]);
            ans.insert(--j,s[i]);
        }
        cout<<ans<<endl;
    }
	return 0;
}
