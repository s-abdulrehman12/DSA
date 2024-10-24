#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0,rem,x=num;
    while (num!=0){
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    if (x==ans){
        cout<<"number is palindrome :";
    }
    else {
        cout<<"not a palindrome";
    }
}