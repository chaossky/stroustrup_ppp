#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

int main(){
vector<string> listname;
listname.push_back("Jimmy");
listname.push_back("Sarah");
listname.push_back("Paul");
listname.push_back("Andrew");
listname.push_back("Adelaide");
listname.push_back("Sue");
listname.push_back("Thomas");

cout << "Please enter the ages of the people: \n";
vector<int> listages;
int age;
int count{0};
while(count<listname.size()){
    cin >> age;
    listages.push_back(age);
    ++count;
}
cout << "Thanks for entering the ages.\n";      // really just to check that while counter has completed

for(int i=0;i<listname.size();++i){
    cout << listname[i] << ": " << listages[i] << ".\n";        // list out name/age pairs
}

vector<string> listnamecopy = listname;           // make a copy of listname vector to use to compare to listage

sort(listname.begin(),listname.end());
for(string x:listname){
    cout << x << ", ";                              // check the sort function has worked correctly on listname
}

vector<int> listagescopy{};
for(int i=0;i<listname.size();++i){
    for(int j=0;j<listnamecopy.size();++j){
        if(listname[i]==listnamecopy[j]){
            listagescopy.push_back(listages[j]);
        }
    }
}
cout << "\n";
for(int i=0;i<listnamecopy.size();++i){
    cout << listname[i] << ": " << listagescopy[i] << ". \n";
}



    return 0;
}
