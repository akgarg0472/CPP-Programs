/*Program to count the sum of all digits of a number*/
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

class digitsSum
{
    int user_input,vector_size,count1=0,input,sum = 0;
    vector <int> v1;    //vector v1

    /*Function to calculate total number of digits in input number*/
    int input_length(int input_var)
    {
        while(input_var != 0)
        {
            input_var /= 10;
            count1++;
        }
        return count1;
    }

    int getintegeronly()
    {
        int number = 0;
        int ch;
        while(1)
        {
            ch = _getch();
            if(ch>=48 && ch<=57)
            {
                printf("%c",ch);
                number = number*10 + (ch-48);
            }

            if(ch==13)
                break;
        }
        return number;
    }

    public:
    digitsSum()
    {
        cout<<"\n Enter a number to count sum of its digits : ";
        user_input = getintegeronly();
        vector_size = input_length(user_input);

        for(int i=0; i<vector_size; i++)
        {
            input = user_input % 10;
            user_input /= 10;
            v1.push_back(input);
        }

    }

    int showSum()
    {
        if(v1.size()==0)
        {
            cout<<"\n No input given ";
            sum = 0;
            return 0;
        }

        else
        {
            for(int i=0; i<v1.size(); i++)
            {
                sum = sum + v1[i];
            }
        }

        return sum;
    }

    int VectorSize()
    {
        return v1.size();
    }
};

int main()
{
    cout<<"\n\t\t******************************************************\n";
    cout<<"\t\t* Program to display Sum of Digits of a Given Number *\n";
    cout<<"\t\t******************************************************\n\n";
    digitsSum ds;

    if(ds.VectorSize()==0)
    {
        cout<<"\n\n No input given. \n Press any key to exit.....";
    }
    else if(ds.VectorSize()==1)
    {
        cout<<"\n\n Sum of digit is "<<ds.showSum();
    }
    else
    {
            cout<<"\n\n Sum of all digits is "<<ds.showSum();
    }

    getch();
    return 0;
}