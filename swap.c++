#include <iosteam>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout <<"Before swapping." << end1;
    cout <<"a = " << a << ", b = " << b << end1;

    temp = a;
    a = b;
    b= temp;

    cout << "\nAfter swapping. " << b << end1;

    return 0;
    
}