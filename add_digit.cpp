#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number :";
    cin>>number;
    while (number>9){
   	int ans=0,rem;
    while (number!=0){
    rem=number%10;
    number=number/10;
    ans=ans+rem;
    }
    number=ans;
    }
    cout<<"The Output of Add Digit PRoblems is "<<number<<endl;
}
