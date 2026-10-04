#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int age;
    cout<<"Age:";
    cin>>age;

    bool adult=age>=18;

if (adult)
{
   cout<<"Adult"; 
}
else
{
    cout<<"Minor";

}


return 0;
}