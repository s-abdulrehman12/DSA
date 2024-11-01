#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,7,11,15,26};
    int start=0;
    int end = 4;
    int target = 26;
    while (start<end)
    {
        if (arr[start]+arr[end]==target)
        {
            cout<<"You find the target "<<endl;
            cout<<"First Element is "<<arr[start]<<" and second element is :"<<arr[end]; 
            break;
        }
        else if (arr[start] + arr[end]>target)
        {
            end--;
        }
        else 
        {
            start++;
        }
    }
}
