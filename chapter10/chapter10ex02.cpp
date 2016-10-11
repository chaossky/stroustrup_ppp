#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>
using namespace std;

struct Reading{
    int hour;
    int temperature;

    Reading():hour(0), temperature(0){}
    Reading(int i, int j):hour{i}, temperature{j}{}

};

ostream& operator<<(ostream& os, Reading& r)
{
    return os<<'('<<r.hour<<','<<r.temperature<<")\n";
}

istream& operator>>(istream& is, Reading& r)
{
    int x,y;
    char a, b, c;
    if(!is)return is;
    is >> a >> x >> b >> y >> c;
    if(a!='('){
    is.clear(ios_base::failbit);
    return is;
    }
    r=Reading(x,y);
    return is;
}

void write_vector_to_file(vector<Reading>& r, const string& n)
{
    ofstream ost{n};
    for(Reading i:r){
        ost<<i;
    }
}

void read_from_file_into_vector(vector<Reading>& a, const string& n)
{
    ifstream ist{n};
    Reading r;
    while(ist>>r) a.push_back(r);
}

void print_vector(vector<Reading>& r)
{
    for(int i=0;i<r.size();++i){
        cout << r[i];
    }
}

int main(){

string filename = "raw_temps.txt";
vector<Reading> ajlist(50);
write_vector_to_file(ajlist, filename);

vector<Reading> ajrevisedlist;
read_from_file_into_vector(ajrevisedlist, filename);
print_vector(ajrevisedlist);

    return 0;
}

