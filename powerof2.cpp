#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<1){
        return 0;
    }
    while (n!=0){
        if (n%2==0){
            return 0;
            n=n/2;
        }
        return 1;
    }

}