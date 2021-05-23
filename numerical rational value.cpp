/*Rational class numerical value representation*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class rational
{
    double numerator,denominator;

    double gcd(float a, float b)    //used in reduce rational number
    {
        if (b == 0)
            return a;
        return gcd(b, fmod(a,b));
    }

    public:
    rational()  //default constructor top initialize default value
    {
        numerator = 1;
        denominator = 1;
    }
    rational(double d1,double d2)   //constructor with two arguments
    {
        numerator = d1;
        denominator = d2;
    }
    void reduce()   //reduce rational number
    {
        double gcdresult;

        gcdresult = gcd(numerator,denominator);
        numerator = numerator / gcdresult;
        denominator = denominator / gcdresult;
    }
    friend istream &operator >>(istream &in,rational &r)    //overloading of insertion operator to direct take input of rational number
    {
        cout<<" Enter Numerator = ";
        in>>r.numerator;
        cout<<" Enter Denominator = ";
        in>>r.denominator;
    }
    friend rational &operator <<(ostream &op,rational &r)     //overloading of extraction operator to direct display the output of rational number
    {
        op<<" Numerator = "<<r.numerator<<endl;
        op<<" Denominator = "<<r.denominator<<endl;
        return r;
    }
    rational operator +(rational rat)    //overloading of addition addition operator to add two rational numbers
    {
        rational temp;

        temp.numerator = this->numerator * rat.denominator + rat.numerator*this->denominator;
        temp.denominator = this->denominator*rat.denominator;

        return temp;
    }
};

int main()
{
    cout<<"\t\t*****************************************\n";
    cout<<"\t\t*\t Rational Number Program\t*\n";
    cout<<"\t\t*****************************************\n\n";

    cout<<" ---------------------------\n";
    cout<<" |Using default constructor|\n";
    cout<<" ---------------------------\n";
    rational number;
    cout<<" Displaying default input rational number\n";
    cout<<" `````````````````````````````````````````\n";
    cout<<number;
    cout<<"\n Displaying reduced rational number\n";
    cout<<" ```````````````````````````````````\n";
    number.reduce();
    cout<<number;

    cout<<"\n\n\n ----------------------------------------\n";
    cout<<" |Using constructor having two arguments|\n";
    cout<<" ----------------------------------------\n";
    cout<<" Enter rational number data\n";
    cout<<" ```````````````````````````\n";
    double d1,d2;
    cout<<" Enter Numerator : ";
    cin>>d1;
    cout<<" Enter Denominator : ";
    cin>>d2;
    rational num(d1,d2);
    cout<<"\n Displaying inputted rational number\n";
    cout<<" ``````````````````````````````````````\n";
    cout<<num;
    cout<<"\n Displaying reduced rational number\n";
    cout<<" ```````````````````````````````````\n";
    num.reduce();
    cout<<num;

    cout<<"\n\n\n ---------------------------------------------\n";
    cout<<" |Performing addition of two rational numbers|\n";
    cout<<" ---------------------------------------------\n";
    rational number1,number2,addResult;
    cout<<" Enter first rational number values\n";
    cout<<" ```````````````````````````````````\n";
    cin>>number1;
    cout<<"\n Enter second rational number values\n";
    cout<<" ```````````````````````````````````\n";
    cin>>number2;
    cout<<"\n Displaying Addition of second number with first rational number\n";
    cout<<" ``````````````````````````````````````````````````````````````````\n";
    addResult = number1+number2;
    cout<<addResult;
    cout<<"\n Displaying reduced rational number addition\n";
    cout<<" ```````````````````````````````````\n";
    addResult.reduce();
    cout<<addResult;


    getch();
    return 0;
}
