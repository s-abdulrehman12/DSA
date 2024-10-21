#include<iostream>
using namespace std;
int main()
{
    int array[5]={11,53,2,3,9};
    for (int i=0;i<5;i++)
    {
        int min=i;
        for (int j=0;j<5;j++){
            if (array[j]<array[min])
            {
                min=j;
            }
        }
        swap(array[i],array[min]);
}
    for (int k=0;k<5;k++)
    {
        cout<<array[k]<<" ";
    }
}