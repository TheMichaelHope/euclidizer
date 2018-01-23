//Euclidizer: C++ program to find the multiplicative inverse of a number in modular arithmetic
//Written by MH Charles-Etuk on 1/22/18

#include <iostream>

using namespace std;

int euclidize(int x, int y);

int x;
int y;

int main()
{
    
    cout << "Say the number you want to find the inverse of:\t";
    cin >> x;
    
    cout << "In modulo...\t";
    cin >> y;
    
    int result = euclidize(x,y);
    
    return result;
}

int euclidize(int x, int y)
{
    int inverse = 0;
    int product = 0;
    for (int z = 0; z < 100; z++)
    {
        product = x * z;
        if (product % y == 1)
        {
            inverse = z;
            break;
        }
        else
            product = product;
    }
    return inverse;
}
