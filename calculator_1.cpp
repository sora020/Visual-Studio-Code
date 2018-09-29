#include <iostream>
#include <stdlib.h>
#include <conio.h>

void clrscr()
{
    system("clear");
}

using namespace std;

class calculator_1
{
  private:
    float a, b;

  public:
    float calculate_1();
    float add(float, float);
    float subtract(float, float);
    float divide(float, float);
    float multiply(float, float);
};

int main()
{
    float x, y;
    char oper, choice;
    do
    {   
        clrscr();
        cout << "--CALCULATOR--\n";
        cout << "\nWhat do you want to perform:\n1. Addition\n2. Subtraction\n3. divide\n4. Multiplication: \n";
        cin >> oper;
        cout << "\nEnter two numbers: \n";
        cin >> x >> y;
        calculator_1 c;
        if (oper == '+' || oper == '1')
        {
            cout << "THe result is: " << c.add(x, y);
        }
        if (oper == '-' || oper == '2')
        {
            cout << "THe result is: " << c.subtract(x, y);
        }
        if (oper == '*' || oper == '4')
        {
            cout << "THe result is: " << c.multiply(x, y);
        }
        if (oper == '/' || oper == '3')
        {
            if (y != 0)
                cout << "THe result is: " << c.divide(x, y);
        }
        cout << "\nWant to Calculate again? y/n\n"
             << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cin.ignore();
    cin.get();
    return 0;
}

float calculator_1::calculate_1()
{
    a = 0;
    b = 0;
}

float calculator_1::add(float a, float b)
{
    return a + b;
}
float calculator_1::subtract(float a, float b)
{
    return a - b;
}
float calculator_1::multiply(float a, float b)
{
    return a * b;
}
float calculator_1::divide(float a, float b)
{
    return a / b;
}