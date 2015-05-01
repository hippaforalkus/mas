#include <iostream>
#include <conio.h>
#include "t1.hpp"
using namespace std;
int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin>>n;
    for(int a=1;a<=n;a++)
    {
        cout << ciag(a)<<endl;
    }
    getch();
    return( 0 );
}
