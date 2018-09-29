#include <iostream>

using namespace std;

class calculator
{
  public:
    int calculate(int, int, char);
};

int main()
{
    int x, y, result;
    char oper, choice;
    do
    {
        cout << "CALCULATOR" << endl;
        cout << "\nEnter num1 operator num2" << endl;
        cin >> x >> oper >> y;
        calculator c;
        result = c.calculate(x, y, oper);
        cout << "\nResult is: " << result << endl;
        cout << "\nWant to Calculate again? y/n\n"
             << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cin.ignore();
    cin.get();
    return 0;
}

int calculator::calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        if (y != 0)
            return x / y;
    default:
        return 0;
    }
}