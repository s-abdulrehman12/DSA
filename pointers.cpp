#include<iostream>
using namespace std;
int main()
{
    int x,y,z=5;
    int *px,*py,*pz;
    px=py=pz=&x;
    *px=30;
    *py=40;
    py = &y;
    pz = &x;
    *py = *pz =50;
    *px = *px + *py + *pz;
    *py =*py + * py;
    cout<<*px<<"  "<<*py<<"  "<<*pz<<endl;
    cout<<x<<"  "<<y<<"  "<<z<<"  ";
}