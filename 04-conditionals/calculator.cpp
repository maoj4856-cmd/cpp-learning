#include <iostream>

using namespace std ;

int main()
{
    int CHOICE;
    cout << "START:1"<<endl ;
    cout << "END:2"<< endl ;
    cout << "Choice:";
    cin >> CHOICE ;

    switch (CHOICE)
    {
        case 1 :
        {   double number1;
            cout << "First number:";
            cin >> number1 ;

            double number2 ;
            cout << "Second number:";
            cin >> number2 ;

            int choice ;
            cout << "Add:1" << endl;
            cout << "Subtract:2" <<endl ;
            cout << "Multiply:3" << endl ;
            cout << "Divide:4" << endl ;


            cout << "Choice:" << endl ;
            cin >> choice ;
            

            switch (choice)
            {
                case 1 :
                cout << number1 + number2 << endl ;
                break;

                case 2 :
                cout << number1 -number2 << endl ;
                break;

                case 3 :
                cout << number1 * number2 << endl ;
                break ;

                case 4:
                    if (number2==0)
                    {
                        cout << "Invalid" <<endl ;
                    }
                    else 
                    {
                        cout <<number1 /number2 <<endl ;
                    }
                    break;

                default :
                cout << "Invalid" << endl ;
            }
                break;
        }

        case 2 :
        cout << "Program ended." <<endl;
        break;

        default :
        cout << "Invalid" <<endl;

    }


    


    return 0;
}
