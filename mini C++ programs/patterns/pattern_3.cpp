#include<iostream>

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
