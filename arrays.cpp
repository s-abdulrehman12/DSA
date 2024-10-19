#include<iostream>
using namespace std;
class Student{
    public:
    int *ptr = new int ;
    int size;
    void get_size(){
    cout<<"Enter the number of Arrays :";
    cin>>size;
    }
    void get_data(){
        for(int i=0;i<size;i++){
            cout<<"Enter the "<<i+1<<" element of the array : ";
            cin>>*(ptr+i);
        }
    }
        void show_data()
        {
            for(int i=0;i<size;i++){
            cout<<*(ptr+i)<<endl;
            }
        }
};
int main()
{
    Student s1;
    s1.get_size();
    s1.get_data();
    s1.show_data();
}