#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number to reverse it :";
    cin>>number;
    int rem,ans=0;
    while (number!=0){
        rem=number%10;
        number=number/10;
        ans=ans*10+rem;
    }

    cout<<"Ans is :"<<ans;
}