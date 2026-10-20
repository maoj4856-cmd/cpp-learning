#include <iostream>

using namespace std;

int main()
{
    int math ;
    cout << "Math:";
    cin >> math ;

    int english ;
    cout << "English:";
    cin >> english ;

    int Cpp;
    cout << "C++:";
    cin >> Cpp;

    int average1= (math+english+Cpp)/3 ;
    cout << average1 << endl ;

    double average2 =(math+english+Cpp)/3 ;
    cout << average2 <<endl ;

    double average3 =double(math+english+Cpp)/3;
    cout << average3 <<endl ;


    return 0;
}