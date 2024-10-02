#include <iostream>

using namespace std;

int main()
{
    for (int i=501; i<=699; i++)
    {
        if (i%3==0 and i%6!=0)
        {
            cout <<i<< endl;
        }
    }
    return 0;
}
