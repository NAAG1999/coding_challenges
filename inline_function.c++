#include<stdio.h>
#include<iostream>

using namespace std;

class area{
    public:
    float length, breadth, radius;
    inline float calculateSqaure(float a, float b)
    {
        float areaC=  a*b;
        return areaC;
    }
    void display();
};

    void area :: display(void)
    {
    cout<<"Calcualted area is :"<< areaC << endl();
    }

int main()
{
    area A;
    A.calculateSqaure(5,5);
    return 0;
}
