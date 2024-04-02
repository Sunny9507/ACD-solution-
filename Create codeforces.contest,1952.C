#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n == 0 || n == 1) 
        cout << 10;
    else if (n == 2 || n == 4 || n == 12) 
        cout << 8;
    else if (n == 3 || n == 10) 
        cout << 9;
    else if (n == 5 || n == 6 || n == 7 || n == 8) 
        cout << 7;
    else if (n == 9) 
        cout << 0;
    else if (n == 11) 
        cout << 6;
    return 0;
}
