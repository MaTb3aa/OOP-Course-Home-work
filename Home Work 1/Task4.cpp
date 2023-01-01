#include <bits/stdc++.h>


using namespace std;
struct Queuint
{
       int arr[100];
};
struct QueueDouble
{
        double arr[100];
};
struct EndString
{
        string arr[100];
};
template <typename T> // we can use template<typename T> to avoid doublcate the code for different data types
struct Queue
{
       T arr[100];
       Queue(){}
};

int main(){
      Queue<int> q1;
      q1.arr[0] =5;
      Queue<string>q2;
      q2.arr[0]="fsdafsda";
      Queue<double>q3;
      q3.arr[0]=432.432423;

      cout<<q1.arr[0]<<" "<<q2.arr[0]<<" "<<q3.arr[0]<<endl;
     
}
