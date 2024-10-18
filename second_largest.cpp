#include<iostream>
using namespace std;
int main(){
    int array[4]={1,2,4,3};
    int largest;
    int second;
    for (int i=0;i<=4;i++){
     largest=array[0];
        if (array[i]>array[largest]){
            largest=i;
        }
    }
    //for second largest 
    for (int i=0;i<=4;i++){
         second=array[0];
        if ( array[largest] < array[second]){
            second=i;
        }
    }
        cout<<"Largest is :"<<largest;
        cout<<"Second largest is :"<<second;
}