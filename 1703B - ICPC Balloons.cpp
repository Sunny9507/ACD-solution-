
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; 
        string s;
        cin >>n >> s;

        map<char,int>m;

        int answer = 0;

        for(auto &i : s){
            m[i]++;
            if(m[i]==1)answer+=2;
            else answer++;
        }
        cout << answer << endl;
    }

}
