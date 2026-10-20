#include <iostream>
#include <string>

using namespace std;

int main ()
{
string name;

    cout <<"Name:";

    cin >>name ;


double Mscore;

    cout <<"Math Score:";

    cin >> Mscore;

double  Escore;
     
     cout <<"English Score:";

     cin >> Escore;

double  Cscore;
    
    cout <<"C++ score:";

    cin >> Cscore ;


    cout <<"Total Score:"<<Mscore+Escore+Cscore<<endl;
    

double average=(Mscore+Escore+Cscore)/3.0 ;

cout <<"Average score:"<<average <<endl;

return 0;

    





}   