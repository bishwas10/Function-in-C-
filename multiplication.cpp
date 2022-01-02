#include <iostream>
using namespace std;
int multiply (int n)
{
    int i;
    for ( i = 1; i <=10;i++)
    {
        cout << n << " * " << i <<  " = " << n*i << endl;

    }

}
int main ()
{
    int num,result;
    cout << "Enter the number" << num;
    cin >> num;
    result = multiply (num);

    return 0;
}