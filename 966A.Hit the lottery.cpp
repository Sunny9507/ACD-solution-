#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n){
        if(n>=100){// 1000 200 450 
            count++;
            n=n-100;
        }else if(n>=20){//40 60 70 
            count++;
            n=n-20;
        }else if(n>=10){ //18 19 12
            count++;
            n=n-10;
        }else if(n>=5){
            count++;
            n=n-5;
        }else{
            count++;
            n=n-1;
        }

    }
    cout<<count;
    return 0;
}
