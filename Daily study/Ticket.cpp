#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Age:";
    cin >> age;

    bool VIP ;
    cout << "VIP:";
    cin >> VIP ;

    bool ticket;
    cout << "Ticket:";
    cin >> ticket ;

    bool banned ;
    cout << "Bannned or not:";
    cin >> banned ;
   

    if(age >=18 && age <=60 && !banned &&( VIP||ticket))
    {
        cout <<"Allowed";
    }
        
        else
        {
        cout <<"Not allowed";

        return 0;
    }

    return 0;
}

