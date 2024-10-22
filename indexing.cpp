#include<iostream>
using namespace std;
int key=-1;
int result;
class target{
    private:
    int size;
    public:
    int *ptr=new int;
    void get_size()
    {
        cout<<"Enter the size  of array :";
        cin>>size;
    }
    void get_target()
    {
        cout<<"eNTER THE INDEX to find the target :";
        cin>>key;
    }
    void get_data(){
        for(int i=0;i<size;i++){
            cout<<"Enter the "<<i<<" element of the array : ";
            cin>>*(ptr+i);
        }
    }
    int functionality (){
       for (int i=0;i<size;i++)
       {
        if ( key == i)
        {
            
            result = *(ptr+i);
            return result;
        }
       }
       return 0;
    }
};
int main()
{
    target t1;
    t1.get_size();
    t1.get_data();
    t1.get_target();
    t1.functionality();
    if (key!=-1)
    {
        cout<<"you found the target : "<<result<<endl;
    }
    else {
        cout<<"target not found"<<endl;
    }
}