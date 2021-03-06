#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

vector <string> newrevvec;
vector<string> revvec(vector<string> x){

    for(int i=0; i<x.size();++i){
        newrevvec.push_back(x[x.size()-(i+1)]);
    }
    return newrevvec;
}

void revvecoriginal(vector<string>& x){
     int j=x.size()-1;
    for(int i=0;i<x.size();++i){
    swap(x[i],x[j]);
    if (i>=x.size()/2) break;
    --j;
    }
}

int main(){


vector<string> ajlist {"aa","cc","kk","pp","uu","zz"};
for(int i=0;i<ajlist.size();++i){
    cout << ajlist[i];
    if(i<(ajlist.size()-1)){
    cout << ", ";
    }
    else{
        cout << ", ";
    }
}
revvec(ajlist);             // this function reverses the original vector in a new vector

cout <<'\n';

for(int i=0;i<newrevvec.size();++i){
    cout << newrevvec[i];
    if(i==newrevvec.size()-1){
        cout << ". ";
    }
    else{
        cout << ", ";
    }
}
cout << '\n';
revvecoriginal(ajlist);                     // reverse using pass by reference
for(int i=0;i<ajlist.size();++i){
    cout << ajlist[i];
    if(i==ajlist.size()-1){                 // extra code just to add some commas etc for formatting
        cout << ".";
    }
    else{
        cout << ", ";
    }
}
cout << '\n';
revvecoriginal(ajlist);                     // test that reverses back to original
for(int i=0;i<ajlist.size();++i){
    cout << ajlist[i];
    if(i==ajlist.size()-1){
        cout << ".";
    }
    else{
        cout << ", ";
    }
}


    return 0;
}
