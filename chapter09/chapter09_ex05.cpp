#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
#include "book.h"
using namespace std;
int main(){
    Book aj{"134h","How to do this", "Andrew Johnston",{12,12,12},true};

    string ajbookname;
    ajbookname = aj.get_title();
    cout << ajbookname;


    return 0;
}

