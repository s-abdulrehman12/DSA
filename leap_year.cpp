#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the Year to check whether it is leap year or not : ";
    cin>>year;
    if (year%400==0){
        cout<<"Its a Leap Year :";
    }
    else  if (year%4==0 && year%100!=0){
        cout<<"Its a Leap Year :";
    }
    else {
        cout<<"Its not the Leap Year ";
    }
}