#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the Size of Arrays :";
    cin>>size;
    int even[size];
    for (int i=0;i<size;i++)
    {
    cout<<"Enter the only even Numbers :";
    cin>>even[i];
    }
    int odd[size];
    for (int i=0;i<size;i++)
    {
    cout<<"Enter the only odd Numbers :";
    cin>>odd[i];
    }
    int new_size=size*2;
    int mix[new_size];
    cout<<"Mix array :"<<endl;
    for (int i=0;i<size;i++)
    {
        mix[i] = even[i];
    }
    for (int j=size;j<size*2;j++)
    {
        mix[j] = odd[j- size];
    }
    for (int k=0;k<size*2;k++)
    {
        cout<<mix[k]<<" ";
    }

for(int i=size*2-2;i>0;i--)
{
for(int j=0;j<i;j++)
    {
        if(mix[j]>mix[j+1])
        swap(mix[j],mix[j+1]);
    }
}
cout<<"Sorting : "<<endl;
for(int i=0;i<size*2;i++)
{
    cout<<mix[i]<<" ";
}
    
    
}
