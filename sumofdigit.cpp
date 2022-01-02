#include <iostream>
using namespace std;
int sumofdigit(int n)
{
    int r,sum = 0;
    while ( n >0)
    {
        r = n %10;
        sum = sum+r;
        n = n/10;
    }
    return sum;
} 
int main ()
{
    int num,result;
    cout << "Enter the number " << endl;
    cin >> num;
    result = sumofdigit(num);
    cout << "Sum of digit is " << result << endl;
    return 0;
}