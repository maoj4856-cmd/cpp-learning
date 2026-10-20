#include <iostream>
using namespace std ;

int main()
{
    int num ;
    int max ;
    int min ;
    double sum ;

    cout << "Enter number 1:"<<endl;
    cin >> num ;
    max =num;
    min =num;
    sum =num;


    for(int i=2;i<=5; i++)
    {
        cout << "Enter number:" << i << ":" <<endl;
        cin >> num ;

        if (max<num)
        {
            max=num;
        }

        if (min > num)
        {
            min=num;
        }

        sum+=num;


    }
    double average =sum/5 ;

    cout << "MAX=" <<max <<endl;
    cout << "MIN=" <<min <<endl;
    cout << "SUM=" <<sum <<endl;
    cout << "AVERAGE=" << average <<endl;
    
    return 0 ;


}