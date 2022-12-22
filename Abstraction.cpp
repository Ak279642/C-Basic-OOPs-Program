#include <iostream>
using namespace std;
//Abstraction Hiding Data From User
class Abstraction
{
    private: int a, b;
//Private member is not acessible by user using object 

  
    public:
// method to set values of private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        } 
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
int main() 
{
    Abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}