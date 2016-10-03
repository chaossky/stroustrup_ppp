#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <time.h>

using namespace std;

class Date{
private:
    int y;
    int m;
    int d;
public:
    Date();
    Date (int y, int m, int d);

};


class Book{
private:
    string isbn;
    string title;
    string author;
    Date date;
    bool checked_in;

public:

    Book();             //default constructor
    Book(string isbn, string title, string author, Date date, bool checked_in); //check valid and initialise


    //non_modifying member functions
    string get_isbn()const {return isbn;}
    string get_title()const {return title;}
    string get_author()const {return author;}
    Date get_date()const {return date;}


    //modifying member functions
    void check_out(){checked_in=false;}
    void check_in(){checked_in=true;}

};
