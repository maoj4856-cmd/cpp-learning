#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Score: ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid score" << endl;
        return 0;
    }

    if (score >= 90)
    {
        cout << "A";
    }
    else if (score >= 80)
    {
        cout << "B";
    }
    else if (score >= 70)
    {
        cout << "C";
    }
    else if (score >= 60)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}
