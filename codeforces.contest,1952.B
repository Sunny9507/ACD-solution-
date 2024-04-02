#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string ans = "No\n";
        for(int i=0; i<s.size(); i++)
            if(s[i-1] == 'i' && s[i] == 't')
                ans= "Yes\n";
            cout << ans;
    }
    return 0;
}
