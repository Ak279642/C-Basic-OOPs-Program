#include<iostream>
using namespace std;
class A{
int var = 10;
friend int Multiply(A);
};
int Multiply(A obj){
 obj.var *= 10;
return obj.var;
}
int main(){
    A ob;
    cout<<Multiply(ob);
}