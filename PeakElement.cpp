#include<iostream>
using namespace std;
int main()
{
    int array[8]={1,3,5,7,9,7,5,3};
    int start=0;
    int end=8;
    while (start <=end)
    {
        /* code */
        int mid=start+(end-start)/2;
        if ( (array[mid]>array[mid-1]) && (array[mid] > array[mid+1] ))
        {
            cout<<"Peak Value :"<<mid;
            return mid;
        }
        else if (array[mid] > array[mid-1])
        {
            //goto left 
            start = mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return 0;
}