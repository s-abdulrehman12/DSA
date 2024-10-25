#include<iostream>
using namespace std;
int main()
{
    int arr[4]={2,4,0,1};
    int start=0;
    int end=3;
    bool isfound=false;
    int key;
    cout<<"Enter the key to unlock the pattern :";
    cin>>key;
    while (start<=end)
    {
        int mid= start + end /2;
        if (arr[mid]==key)
        {
            cout<<"You found the key :";
            isfound=true;
            return mid;
        }
        //to check if the array is left side sorted :)
        else if (arr[mid]>=arr[0])
        {
            if ( (arr[start] <= key) && arr[mid] >= key)
            {
                end = mid -1;
            }
            else {
                start = mid +1;
            }
        }
        //to check if the array is right side sorted 
        else if ( (arr[mid]>=arr[end]) && arr[mid] <= key)
        {
            start =mid + 1;
        }
        else {
            end = mid -1;
        }
    }
    if (isfound==false)
    {
        cout<<"you does not find an element :)"<<endl;
    }
}