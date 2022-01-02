#include <iostream>
using namespace std;
int isprime (int num)
{
    int i,count =0;
    for (i = 1 ; i <=num;i++)
    {
        if (num%i == 0)
        count++;
    }
    if (count ==2)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }



    
}
int main ()
{
    int num,result;
    cout << "Enter the number" << endl;
    cin >> num;
    result =isprime (num);
    return 0;

}
