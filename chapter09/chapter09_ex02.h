
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>

using namespace std;

class Name_pairs{
public:
    vector<string> name;
    vector<double> age;

public:

    void read_names();
    void read_ages();
    void print();
    void sort();

};

//overload constrructors

ostream& operator<<(ostream& os, Name_pairs a);

bool operator==(const Name_pairs& a, const Name_pairs& b);

bool operator!=(const Name_pairs& a, const Name_pairs& b);

