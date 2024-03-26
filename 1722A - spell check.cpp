#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
        string s = "Timur";
        sort(s.begin(), s.end());
    while(t--){
        int n;
        cin >> n;
        string i;
        cin >> i;
        sort(i.begin(), i.end());
        cout <<(i == s ? "YES" : "NO")<< endl;
    }
}


// Timur -- imrTu
