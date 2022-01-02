#include <iostream>
using namespace std;
int square (int l)
    {
        return l*l;
    }
    int perimeter (int l)
    {
        return 4*l;
    }

int main ()
{
    int length ,result ,peri;
    cout << "Enter the length of sqaure" << endl;
    cin >> length;
    result =square(length);
    peri = perimeter (length);
    cout << "The area of square is " << result << endl;
    cout << "The perimeter of the square is " << peri << endl;
    return 0;

}
