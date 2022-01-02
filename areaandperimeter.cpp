#include <iostream>
using namespace std;

int area(int length,int breadth)
    {
        return length*breadth;
    }
    int perimeter (int length, int breadth)
    {
        return 2*(length+breadth);
    }

int main ()
{
    int l,b,result,result1;
    cout << "Enter the length of the rectangle" << endl;
    cin >> l;
    cout << "Enter the breadth of the rectangle " << endl;
    cin >> b;
    result = area (l,b); 
    result1 = perimeter (l,b);
    cout << "The area of the rectangle is " <<result << endl;
    cout << "The perimeter of the rectangle is " << result1 << endl;
    return 0;


}