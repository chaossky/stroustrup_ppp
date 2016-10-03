#include "book.h"

Date::Date(int yy, int mm, int dd)
    :y{yy},m{mm},d{dd}
{

}

Book::Book(string isbna, string titlea, string authora, Date datea, bool checked_ina)
    :isbn{isbna}, title{titlea},author{authora},date{datea}, checked_in{checked_ina}
{
    if(isbna.size()>4) cout << "ERROR: the ISBN is too long.\n";
    if(!isdigit(isbn[0]) || !isdigit(isbn[1]) || !isdigit(isbn[2])) cout <<"ERROR: one of the first three characters is incorrect.\n";

}

