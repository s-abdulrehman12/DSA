#include<iostream>
using namespace std;
int main()
{
    int arr[5]= {1,2,4,8,9};
    int k=3;
    int start =1;
    int end = arr[4] - arr[0];
    int mid;
    int ans=0;
    while (start <=end)
    {
        mid = start + (end - start) /2;
        int count =1;
        int pos=arr[0];
        for (int i=1;i<5;i++)
        {
            if (arr[i]-pos >=mid)
            {
                count++;
                pos = arr[i];
            } 
        }
        if (count<k)
        {
            end = mid-1;
        }
        else 
        {
            ans = mid ;
            start = mid +1;
        }
    }
     cout<<ans<<"  ";//distance :)
    
}