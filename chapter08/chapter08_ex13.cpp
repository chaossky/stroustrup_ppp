#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}


vector<int> calcstring(const vector<string>& v){
    vector<int> resultvector;
        for(int i=0;i<v.size();++i){
            resultvector.push_back(v[i].length());
        }
    return resultvector;
}

string longeststring(const vector<string>& v){
        string ls;
        int maxl{0};
        for(int i=0;i<v.size();++i){
            if(v[i].size() > maxl) {
                maxl=v[i].size();
                ls=v[i];
            }
        }
        return ls;
}

string shorteststring(const vector<string>& v){
        string ss;
        int maxl{100};
        for(int i=0;i<v.size();++i){
            if(v[i].size() < maxl) {
                maxl=v[i].size();
                ss=v[i];
            }
        }
        return ss;
}

string alphafirst(vector<string> v){
    sort(v.begin(),v.end());
    return v[0];
}

string alphalast(vector<string> v){
    sort(v.begin(),v.end());
    return v[v.size()-1];
}

int main(){

    vector<string> ajlist{"A","Ba","Cba","Dcba","Edcba"};
    vector<int> a = calcstring(ajlist);
    for(int x:a){
        cout << x << ":";
    }
    cout << "\n";
    cout << "Longest string is: " << longeststring(ajlist) << '\n';
    cout << "Shortest string is: " << shorteststring(ajlist) << '\n';
    cout << "Alphabetically first is: " << alphafirst(ajlist) << '\n';
    cout << "Alphabetically last is: " << alphalast(ajlist) << '\n';



    return 0;
}

