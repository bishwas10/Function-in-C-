#include <iostream>
using  namespace std;
int palindrome (int n)
{
    int r,m,rev=0;
    m = n;
    while ( n >0)
    {
        r = n %10;
        rev = rev*10+r;
        n = n/10;
    }
    if (rev == m)
    {
        cout << "It is a palindrome number " << endl;
    }
    else
    {
        cout << "It is not a palindrome number" << endl;
    }


}
int main ()

{
    int num,result;
    cout << "Enter the number" << endl;
    cin >> num;
    result = palindrome (num);
    

    return 0;
}