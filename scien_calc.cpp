#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define new_calc 1
#define old_calc 0

using namespace std;

/*------------------------------------------------------------------------*/
//Standard Calculator

class stand_calc
{
public:
    static double addition(double, double);
    static double subtract(double, double);
    static double multiplication(double, double);
    static double division(double, double *);
    static double modulus(double *, double *);
};

/*------------------------------------------------------------------------*/
//Scientific Calculator

class scien_calc
{
public:
    static double square(double);
    static double cube(double);
    static double power(double, double);
    static double sq_root(double);
    static long int fact(double);
    static double sin_func(double);
    static double cos_func(double);
    static double tan_func(double);
};

/*------------------------------------------------------------------------*/
double stand_calc::addition(double a, double b)
{
    return (a + b);
}
/*------------------------------------------------------------------------*/
double stand_calc::subtract(double a, double b)
{
    return (a - b);
}
/*------------------------------------------------------------------------*/
double stand_calc::multiplication(double a, double b)
{
    return (a * b);
}
/*------------------------------------------------------------------------*/
double stand_calc::division(double a, double *b)
{
    while (*b == 0)
    {
        cout << "\nCan't divide by 0\n";
        cout << "\nEnter number again except 0\n";
        cin >> *b;
    }
    return (a / (*b));
}
/*------------------------------------------------------------------------*/
double stand_calc::modulus(double *a, double *b)
{
    while (*b == 0)
    {
        cout << "\nCan't divide by 0\n";
        cout << "\nEnter number again except 0\n";
        cin >> *b;
    }
    int x = (int)*a;
    int y = (int)*b;
    if (*a - x > 0 || *b - y > 0)
    {
        cout << "\nConverting decimal number into an integer to perform modulus\n";
    }
    *a = x;
    *b = y;
    return (x % y);
}
/*------------------------------------------------------------------------*/
double scien_calc::square(double a)
{
    return (pow(a, 2));
}
/*------------------------------------------------------------------------*/
double scien_calc::cube(double a)
{
    return (pow(a, 3));
}
/*------------------------------------------------------------------------*/
double scien_calc::power(double a, double b)
{
    return (pow(a, b));
}
/*------------------------------------------------------------------------*/
double scien_calc::sq_root(double a)
{
    return (sqrt(a));
}
/*------------------------------------------------------------------------*/
long int scien_calc::fact(double a)
{
    int n = (int)a;
    long long f = 1;
    while (n--)
    {
        f *= n;
    }
    return f;
}
/*------------------------------------------------------------------------*/
double scien_calc::sin_func(double a)
{
    return (sin(a));
}
/*------------------------------------------------------------------------*/
double scien_calc::cos_func(double a)
{
    return (cos(a));
}
/*------------------------------------------------------------------------*/
double scien_calc::tan_func(double a)
{
    return (tan(a));
}
/*------------------------------------------------------------------------*/
int main()
{
    double num1, num2, num3, temp;
    int choice1, choice2, flag;
    do
    {
        cout << "\n=======Type of calculators=======";
        cout << "\n1\tStandard Calculator\n2\tScientific Calculator\n3\tQuit";
        cout << "\nChoose the type of calculator: ";
        cin >> choice1;
        flag = new_calc;
        switch (choice2)
        {
            /*------------------------------------------------------------------------*/
        case 1:
            do
            {

                cout << "\n=======Standard Calculator=======";
                cout << "\n1\tAddition\n2\tSubstraction\n3\tMultiplication\n4\tDivision\n5\tModulus\n6\tReturn\n7\tQuit";
                if (flag == old_calc)
                {
                    cout << "\n8\tClear Memory";
                }

                cout << "\nChoose the type of calculation: ";
                cin >> choice2;

                switch (choice2)
                {
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 1:
                    if (flag == new_calc)
                    {
                        cout << "Enter first number: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nFirst number is: " << num1 << "\n";
                    }
                    cout << "Enter second number: ";
                    cin >> num2;
                    num3 = stand_calc::addition(num1, num2);

                    cout << "\nAddition of " << num1 << "and " << num2 << "is : " << num3 << "\n";
                    cout << "\nPress any key to continue........";

                    temp = num3;
                    flag = old_calc;

                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 2:
                    if (flag == new_calc)
                    {
                        cout << "Enter first number: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nFirst number is: " << num1 << "\n";
                    }
                    cout << "Enter second number: ";
                    cin >> num2;
                    num3 = stand_calc::subtract(num1, num2);

                    cout << "\nSubtraction of " << num2 << "from " << num1 << "is : " << num3 << "\n";
                    cout << "\nPress any key to continue........";

                    temp = num3;
                    flag = old_calc;

                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 3:
                    if (flag == new_calc)
                    {
                        cout << "Enter first number: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nFirst number is: " << num1 << "\n";
                    }
                    cout << "Enter second number: ";
                    cin >> num2;

                    num3 = stand_calc::multiplication(num1, num2);

                    cout << "\nMultiplication of " << num1 << "and " << num2 << "is : " << num3 << "\n";
                    cout << "\nPress any key to continue........";

                    temp = num3;
                    flag = old_calc;

                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 4:
                    if (flag == new_calc)
                    {
                        cout << "Enter first number: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nFirst number is: " << num1 << "\n";
                    }
                    cout << "Enter second number: ";
                    cin >> num2;

                    num3 = stand_calc::division(num1, &num2);

                    cout << "\nDivision of " << num1 << "by " << num2 << "is : " << num3 << "\n";
                    cout << "\nPress any key to continue........";

                    temp = num3;
                    flag = old_calc;

                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 5:
                    if (flag == new_calc)
                    {
                        cout << "Enter first number: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nFirst number is: " << num1 << "\n";
                    }
                    cout << "Enter second number: ";
                    cin >> num2;

                    num3 = stand_calc::modulus(&num1, &num2);

                    cout << "\nModulus of " << num1 << " by " << num2 << " is : " << num3 << "\n";
                    cout << "\nPress any key to continue........";

                    temp = num3;
                    flag = old_calc;

                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 6:
                    cout << "\nReturning to previous menu.";
                    cout << "\nPress any key to continue........";

                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 7:
                    cout << "\nQuitting.........";
                    cout << "\nPress any key to continue........";
                    exit(0);
                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 8:
                    if (flag == new_calc)
                    {
                        cout << "\nInvalid choice.";
                        cout << "\nPress any key to continue..........";
                    }
                    else
                    {
                        temp = 0;
                        flag = new_calc;
                    }
                    break;

                default:
                    cout << "\nInvalid choice.";
                    cout << "\nPress any key to continue..........";
                    break;
                }
            } while (choice2 != 6);
            break;
        /*------------------------------------------------------------------------*/
        case 2:
            do
            {
                cout << "\n=======Scientific Calculator=======";
                cout << "\n1\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\tTan\n8\tReturn to previous menu\n9\tQuit";
                if (flag == old_calc)
                {
                    cout << "\n10\tClear Memory";
                    cout << "\nChoose the type of calculation: ";
                    cin >> choice2;
                }
                switch (choice2)
                {
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 1:
                    if (flag == new_calc)
                    {
                        cout << "Enter number to calculate square: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nNumber is " << num1 << "\n";
                    }
                    num3 = scien_calc::square(num1);

                    cout << "\nSquare of " << num1 << " is " << num3 << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = num3;
                    flag = old_calc;
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 2:
                    if (flag == new_calc)
                    {
                        cout << "Enter number to calculate cube: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nNumber is " << num1 << "\n";
                    }
                    num3 = scien_calc::cube(num1);

                    cout << "\nCube of " << num1 << " is " << num3 << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = num3;
                    flag = old_calc;
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 3:
                    if (flag == new_calc)
                    {
                        cout << "Enter first number for base to find power: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nFirst number is " << num1 << "\n";
                    }
                    cout << "Enter second number for power to find power: ";
                    cin >> num2;

                    num3 = scien_calc::power(num1, num2);

                    cout << "\n"
                         << num1 << " to the power " << num2 << " is " << num3 << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = num3;
                    flag = old_calc;
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 4:
                    if (flag == new_calc)
                    {
                        cout << "Enter number to find factorial: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nNumber to find factorial is " << num1 << "\n";
                    }
                    long long nNum;
                    nNum = scien_calc::fact(num1);

                    cout << "\nFactorial of " << num1 << " is " << nNum << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = nNum;
                    flag = old_calc;
                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 5:
                    if (flag == new_calc)
                    {
                        cout << "Enter number to find sin value: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nNumber for sin value is " << num1 << "\n";
                    }
                    num3 = scien_calc::sin_func(num1);

                    cout << "\nSin value of " << num1 << " is " << num3 << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = num3;
                    flag = old_calc;
                    break;
                    /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 6:
                    if (flag == new_calc)
                    {
                        cout << "Enter number to find cos value: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nNumber for cos value is " << num1 << "\n";
                    }
                    num3 = scien_calc::cos_func(num1);

                    cout << "\nCos value of " << num1 << " is " << num3 << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = num3;
                    flag = old_calc;
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 7:
                    if (flag == new_calc)
                    {
                        cout << "Enter number to find tan value: ";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "\nNumber for tan value is " << num1 << "\n";
                    }
                    num3 = scien_calc::tan_func(num1);

                    cout << "\nTan value of " << num1 << " is " << num3 << "\n";

                    cout << "\nPress any key to contine.........";
                    temp = num3;
                    flag = old_calc;
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 8:
                    cout << "\nReturning to previous menu.";
                    cout << "\nPress any key to continue..............";
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 9:
                    cout << "\nQuitting................";
                    cout << "\nPress any key to continue..............";
                    exit(0);
                    break;
                /*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
                case 10:
                    if (flag == new_calc)
                    {
                        cout << "\nInvalid choice.";
                        cout << "\nPress any key to continue..........";
                    }
                    else
                    {
                        temp = 0;
                        flag = new_calc;
                    }
                    break;
                default:
                    cout << "\nInvalid choice.";
                    cout << "\nPress any key to continue..........";
                    break;
                }
            } while (choice2 != 8);
            break;
        /*------------------------------------------------------------------------*/
        case 3:
            cout << "\nQuitting..........";
            cout << "\nPress any key to continue..........";
            exit(0);
            break;

        default:
            cout << "\nInvalid choice.";
            cout << "\nPress any key to continue..........";
            break;
        }
    } while (choice1 != 3);

    return 0;
}
