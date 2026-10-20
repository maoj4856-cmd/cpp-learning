#include <iostream>
using namespace std;

int main ()
{
    int num;
    double sum = 0;
    int count =0;

    cout << "Enter your number:";
    cin >> num;


    while (num != 0)
    {
        sum+=num;
        count++;
        cout << "Enter your number:";
        cin >> num;
        
    }

        cout << "Sum:" << sum << endl ;
        cout << "Count:" << count <<endl;
    

    if (count== 0)
    {
        cout << "Average:Invalid" <<endl;
    }
    else
    {
        double average =sum/count ;
        cout << "Average:" << average ;
    }
   
    return 0 ;


}