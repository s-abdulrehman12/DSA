#include<iostream>
using namespace std;
int main(){
    int array[6]={1,2,3,4,5,6};
    int temp_array[6];
    for ( int i=5;i>=0;i--){
        for (int j=0;j<6;j++){
            temp_array[j]=array[i];
            cout<<temp_array[j]<<endl;
            break;
        }
    }
   
}