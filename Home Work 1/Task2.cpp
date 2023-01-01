#include <bits/stdc++.h>


using namespace std;


struct Date {
        int day,month,year;
        Date (){

        }
        Date (int day,int month,int year){
                this->day = day;
                this->month = month;
                this->year = year;
        }
        void PrintDMY(){
                cout<<day<<" "<<month<<" "<<year<<endl;
        }
        void PrintMY(){
                cout<<month<<" "<<year<<endl;
        }
        void PrintDM(){
                cout<<month<<" "<<year<<endl;
        }
};
struct Time {
        int seconds,minutes,hours;
        Time(){

        }
        Time(int seconds,int minutes,int hours) {
                this->seconds = seconds;
                this->minutes = minutes;
                this->hours = hours;
        }
        string checkS(int x){
                return (x>1 ? "s, " : ", ");
        }

        void PrintTime(){
                cout<<hours<<" Hour"<<checkS(hours)<<minutes<<" minutes"<<checkS(minutes)<<seconds<<" second"<<checkS(seconds);
        }
        void PrintHours(){
                cout<<hours + (minutes + (seconds/60))/60 <<" Hours ";
        }
        void PrintMinutes(){
                cout<<hours*60 + minutes + (seconds)/60 <<" Hours ";
        }
         void PrintSeconds(){
                cout<<hours*60*60 + minutes*60 + (seconds) <<" Hours ";
        }
};

struct DateTime {
        Date d;
        Time t;
        DateTime(int day,int month,int year,int seconds,int minutes,int hours){
                d.day = day;
                d.month = month;
                d.year = year;
                t.seconds = seconds;
                t.minutes = minutes;
                t.hours = hours;
        }
};
int main(){
        Date d;
        d.day=26;
        d.month=5;
        d.year=1999;
        d.PrintDMY();
        cout<<endl;
        Time t;
        t.hours = 1;t.minutes=54;t.seconds=43;
        t.PrintTime();
        cout<<endl;
        t.PrintSeconds();

        DateTime dt(26,5,1999,43,54,3);

        dt.d.PrintDMY();
        cout<<endl;
        dt.t.PrintTime();
}
