#include <iostream>
using namespace std;
int main()
{
    //Declaration - pointer_variable = new datatype(value);
    int *var = new int[2];
    *(var) = 10;
    *(var + 1) = 20;
    *(var + 2) = 30;
    cout << "Value of var[0] : " << var[0] << endl;
    cout << "Value of var[0] : " << var[1] << endl;
    cout << "Value of var[0] : " << var[2] << endl;
    delete var;
    cout << "After Deleting Value of var[0] : " << var[0] << endl;
    cout << "After Deleting Value of var[1] : " << var[1] << endl;
    cout << "After Deleting Value of var[2] : " << var[2] << endl;
    return 0;
}