#include <iostream>

using namespace std;

int main()
{
    for(int i=101; i<=400; i++)
    {
        if (i%3==0 || i%7==0 || i%2==0)
        {
            cout <<i<< endl;
        }
    }
    return 0;
}
