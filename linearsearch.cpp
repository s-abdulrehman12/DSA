#include<iostream>
using namespace std;
int main(){
    int array[8]={1,5,2,4,3,7,6,8};
    int target;
    cout<<"Enter the target :";
    cin>>target;
    for (int i=0;i<8;i++){
        if (array[i]==target){
            cout<<"You find an element :";
            return i;
        }
    }
    cout<<"You did not find an element :";
     return -1;
}