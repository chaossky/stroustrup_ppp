#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

struct Answers{
int largest{0};
int smallest{1000};
int median{0};
int mean{0};
};

Answers answers;

void calculate(const vector<int>& v){

    int total{0};
    for(int i=0;i<v.size();++i){
        if(v[i]>answers.largest) answers.largest=v[i];
        if(v[i]<answers.smallest) answers.smallest=v[i];
        total+= v[i];
    }
    answers.mean=total/v.size();
    answers.median=v[v.size()/2-1];
}


int main(){

vector<int> ajlist{1,3,5,7,9,11,23,99,4,6};
calculate(ajlist);
cout << "The largest number is: " << answers.largest << '\n';
cout << "The smallest number is: " << answers.smallest << '\n';
cout << "The mean number is: " << answers.mean << '\n';
cout << "The median number is: " << answers.median << '\n';



    return 0;
}


