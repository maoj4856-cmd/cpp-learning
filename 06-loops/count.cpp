#include <iostream>
using namespace std;

int main()
{
    int num;
    double sum = 0;
    int count = 0;

    do
    {
        cout << "Enter your number: ";
        cin >> num;

        if (num != 0)
        {
           sum+=num;
           count++;

        }

    } while ( num != 0 );

    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;

    if (count == 0 )
    {
        cout << "Average: Invalid" << endl;
    }
    else
    {
        double average = sum/count  ;

        cout << "Average: " << average << endl;
    }

    return 0;
}