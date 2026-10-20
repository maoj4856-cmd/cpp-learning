#include <iostream>
using namespace std ;

int main ()
{
    int count=0;
    double sum=0;
    int num;
    int max;
    int min;


    bool hasValid =false;

    
        for(int i=1 ;i<=10;i++)
    {
        cout << "Enter number" << i <<":" <<endl;
        cin  >> num ;

        if(num==0)
        {
            cout << "End."<<endl;
            break;
        }

        if(num<0||num%2!=0)
        {
            continue;
        }

        if(!hasValid)
        {
            max =num;
            min =num;
            hasValid=true ;
        }
        else 
        {
            if(max<num)
            {
                max=num;
            }

            if(min>num)

            {
                min=num;
            }


        }

        sum+=num;                 
        count++;

    }
        
        if(!hasValid)
        {
            cout << "Average:Invalid"<<endl;
            cout << "Max:Invalid" << endl;
            cout <<"Min:Invalid" << endl;
        }
        else
        {
        double average = sum/count;
        cout << "Count:"<< count <<endl ;
        cout << "Sum:" << sum <<endl ;
        cout << "Average:" <<average << endl;
        cout <<"Max:"<< max << endl;
        cout << "Min:"<< min <<endl;
        }

   

   



    return 0 ;
}