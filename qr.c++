#include <iosteam>
using namespace std;

int main()
{
    int divisor , dividend , quotient , remainder;

    cout << "Enter dividend: ";
    cin << dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << end1;
    cout << "Reminder = " << remainder;

    return 0;
}