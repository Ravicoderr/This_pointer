#include<iostream>
using namespace std;
class ravi
{
    int a;
    public:
    void setdata(int a)
    {

        this->a = a; 
       // return *this; 
    //“this” is a keyword that is an implicit pointer.
    // “this” pointer points to the object which calls the member function.
    //The class “A” contains two member functions “setData” and “getData

    }
    void getdata()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
    ravi A;
    A.setdata(3).getdata();
    A.getdata();
    return 0;
}