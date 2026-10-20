#include <iostream>

using namespace std ;

int main()
{
   int score;
   cout << "Score:";
   cin >> score;
   
   int attendance;
   cout << "Attendance:";
   cin >> attendance;

   bool punished;
   cout <<"Punished:";
   cin >> punished;


if (score > 100|| score < 0)
{
    cout << "Invalid score";
}

else if (score>=85&&attendance>=90&&!punished )
{
    cout <<"Scholarship";
}
else 
{
    cout <<"No scholarship";
}

return 0 ;
}