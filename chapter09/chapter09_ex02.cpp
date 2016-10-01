#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
#include "name_pairs.h"
using namespace std;
inline void keep_window_open(){char ch;cin>>ch;}

int main(){

    Name_pairs ajlist;
    ajlist.read_names();
    ajlist.read_ages();
    //ajlist.sort();
    ajlist.print();
    Name_pairs ajlist1;
    ajlist1.read_names();
    ajlist1.read_ages();
    ajlist1.print();
    if(ajlist==ajlist1) cout << "identical";
    if(ajlist!=ajlist1) cout << "not identical";



    return 0;
}

