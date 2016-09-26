#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}



double totalcombined{0};
double combined(vector<double> price, vector<double> weight){
    for(int i=0;i<price.size();i++){
        totalcombined += (price[i]*weight[i]);
    }
    return totalcombined;
}

int main(){

vector<double> price{1.1,2.2,3.3,4.4};
vector<double> weight{1.0,2.0,3.0,4.0};

cout << combined(price,weight);

    return 0;
}

