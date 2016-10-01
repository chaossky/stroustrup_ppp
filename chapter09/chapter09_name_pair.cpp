
#include "name_pairs.h"



void Name_pairs::read_names()
{
    cout << "Please enter the names (enter end to finish):\n";
    string n;
    while(cin>>n){
    if(n=="end")break;
    name.push_back(n);
    }
}
void Name_pairs::read_ages()
{
    for(int i=0;i<name.size();++i){
        int x;
        cout << "What is " << name[i] << "'s age? \n";
        cin >> x;
        age.push_back(x);
    }
}

void Name_pairs::print()
{
    for(int i=0;i<name.size();++i){
    cout << name[i] << ", " << age[i] << "\n";
    }
}

void Name_pairs::sort()
{
    vector<string>name_pre = name;
    vector<double>age_ptr = age;
    std::sort(name.begin(),name.end());
    for(int i=0;i<name.size();++i){
        for(int j=0;j<name_pre.size();++j){
            if(name[i]==name_pre[j]){
                age[i]=age_ptr[j];
            }
        }
    }

}

ostream& operator<<(ostream& os, Name_pairs a)
{
        for(int i=0; i<a.name.size();++i)
        {
            os<<a.name[i]<<','<<a.age[i]
            <<": ";
        }
        return os;
}

bool operator==(const Name_pairs& a, const Name_pairs& b)
{
    if(a.name.size()!=b.name.size() || a.age.size()!=b.age.size()) return false;
    for(int i=0;i<a.name.size();++i)
    {
        if(a.name[i]!=b.name[i])
        return false;
    }
    for(int i=0;i<a.age.size();++i)
    {
        if(a.age[i]!=b.age[i])
        return false;
    }
    return true;
}

bool operator!=(const Name_pairs& a, const Name_pairs& b)
{
    return !(a==b);
}

