/*Complete the following code skeleton 
to declare a class named Date.
The class should contain 
attributes and methods to store and 
retrieve a date in the form 14/4/2018*/

#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    Date();//constructor
    void setDay (int);
    void setMonth (int);
    void setYear(int);

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year;}
};

Date::Date() 
{
    day= 14;
    month=4;
    year=2018;
}

void Date :: setDay (int d)
{

    day=d;
}

void Date :: setMonth (int m)
{
    month=m;
}

void Date :: setYear (int y)
{

    year=y;
}
int main() 
{

    Date dates;
    cout<< "This is our date."<<endl;
    cout<<"Day: "<<dates.getDay()<<endl;
    cout<<"Month: "<<dates.getMonth()<<endl;
    cout<<"Year: "<<dates.getYear()<<endl;
    cout<<dates.getDay()<<"."<<dates.getMonth()<<"."<<dates.getYear()<<endl;

    return 0;
}