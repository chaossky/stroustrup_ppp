#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

void print(vector<int> v, string s){
    for(int x=0;x<v.size()-1;++x){
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

int main(){

    vector<int> aj{1,2,5};
    print(aj, "ajlist");

    return 0
}
