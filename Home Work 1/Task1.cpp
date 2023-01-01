#include <bits/stdc++.h>


using namespace std;


struct Date {
        int day,month,year;

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

}
