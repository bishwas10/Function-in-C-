#include <iostream>
using namespace std;
int sum (int a, int b)
{
    int c;
    c = a+b;
    return c;
}
int main ()
{
    int x = 10, y =5,z;
    z = sum (10,5);
    cout << "The sum is " << z << endl;
    
    return 0;
}
