#include <iostream>
using namespace std;

int main ()
{
    int num;
    int sum=0;
    int count=0;

    for(int i=1;i<=10;i++)
    {
        cout << "Enter number:";
        cin >> num;

        if (num==0)
        {
            cout << "Programme Finished";
            break;
        }

        if (num<0)
        {
            continue;
        }

        sum+=num;
        count++;
    }

    cout << "Sum:" << sum <<endl;
    cout << "Count:" << count <<endl;

    return 0 ;
}