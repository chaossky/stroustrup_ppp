#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

int maxv(vector<int> x){
    int max_number{0};
    for(int i=0;i<x.size();++i){
        if(x[i]>max_number) max_number = x[i];
    }
    return max_number;
}

int main(){

    vector<int> ajlist{1,3,5,7,13,4,6};
    cout << maxv(ajlist);

    return 0;
}

