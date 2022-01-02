#include <iostream>
using namespace std;
int even  (int n)
{
    if (n % 2 ==0)
    cout << "It is an even number" << endl;
    else
    cout << "It is an odd number" << endl;
}
int main ()
{
    int num,result;
    cout << "Enter the number" << endl;
    cin >> num;
    result = even (num);
    return 0;

}