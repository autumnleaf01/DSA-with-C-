//Hello, Today we're going to write a code to count no. of sundays in the first day of month
//from the year 1900 - 2000
#include<iostream>
using namespace std;

enum months {
        Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
    };
    enum days {
        Sun, Mon, Tue, Wed, Thu, Fri, Sat
    };

    int numofSundays();
    bool isLeapYear(int year);


int main(){
    int num;
    
    num = numofSundays();
    cout << "Number of Sundays that fell on the first of the month = "<<num<<endl;
    return 0;
    }

int numofSundays(){
    int firstDay, lastday, numSundays;
    firstDay = Mon;
    if(isLeapYear(1900)){
        lastday = Tue;
    }
    else{
        lastday = Mon;
    }
    numSundays = 0;
    for(int year = 1901; year <= 2000; year++){
        for(int month = Jan; month <= Dec; month++){
            firstDay = (lastday + 1)%7;
            if(firstDay == Sun){
                numSundays++;
            }
            switch(month){
                case Jan:
                case Mar:
                case May:
                case Jul:
                case Aug:
                case Oct:
                case Dec:
                    lastday = (firstDay + 2)%7;
                    break;

                case Apr:
                case Jun:
                case Sep:
                case Nov:
                    lastday = (firstDay + 1)%7;
                    break;

                case Feb:
                    if(isLeapYear(year)){
                        lastday = (firstDay)%7;
                    }
                    else{
                        lastday = (firstDay + 6)%7;
                    }
            }
        }
    }

    return numSundays;
}

bool isLeapYear(int year){
    if(year%100 != 0 && year%4 == 0 || year%400 == 0){
        return true;
    }
    else{
        return false;
    }
}