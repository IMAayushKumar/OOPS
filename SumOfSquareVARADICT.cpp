#include <iostream>
#include <cstdarg>
using namespace std;

double sumOfSquares(int count, ...)
{
    va_list args;
    va_start(args, count);

    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        double num = va_arg(args, double);
        sum += num * num;
    }

    va_end(args);
    return sum;
}

int main()
{
    cout << "Sum of squares (2, 3):" << sumOfSquares(2, 2.0, 3.0) << endl;
    cout << "Sum of squares (1, 2, 3, 4):" << sumOfSquares(4, 1.0, 2.0, 3.0, 4.0) << endl;
    cout << "Sum of squares (5): " << sumOfSquares(1, 5.0) << endl;

    return 0;
}