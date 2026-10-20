#include <iostream>
using namespace std ;

int main ()
{
    int number;
    int count=0 ;
    cout << "Enter number:";
    cin >> number ;

    
    if (number<2)
    {
        cout << "Not Prime"<< endl;
    }

    else
    {   
        
        for (int candidate=2;candidate <=number;candidate++)
    {
        bool isPrime =true;

        for (int i=2;i<=candidate-1;i++)
        {   
           
            if (candidate%i==0)
            {
                isPrime=false;
                break;
            }
            
            
        }

        if (isPrime)
            {
                count++;
                cout << candidate<< " "<<endl;
                
            }

    cout << "Count:"<< count <<endl;
    }
    }

    return 0;

}