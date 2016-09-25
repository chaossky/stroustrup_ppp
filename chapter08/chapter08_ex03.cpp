#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

void print(vector<int> v, string s){
    for(int x=0;x<=v.size()-1;++x){
        cout << v[x];
        if(x!=v.size()-1){
            cout << ", ";
        }
        else{
            cout << ".";
        }
    }
    cout << "\nThis vector is called: " << s << ".\n";
}

void fibonacci(int x,int y,vector<int>& v,int n){


        for(int i=0;i<=(n-1);++i){
            if(i==0){
                v.push_back(x);
             }
             else if(i==1){
                v.push_back(y);
             }
             else if(i>=2){
                v.push_back(v[i-2]+v[i-1]);
             }
        }
}


int main(){

    vector<int> aj;
    fibonacci(1,2,aj,7);
    print(aj, "ajlist");

    return 0;
}
