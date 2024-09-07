#include<iostream>
using namespace std;
int roman_to_int(string s)
{
    int total=0;
    int prevalue=0;
    for(int i=s.length()-1;i>=0;--i)
    {
        int value;
        switch (s[i])
        {
            case 'I':
            value=1;
            break;

            case 'V':
            value=5;
            break;

            case 'X':
            value=10;
            break;

            case 'L':
            value=50;
            break;

            case 'C':
            value=100;
            break;

            case 'D':
            value=500;
            break;

            case 'M':
            value=1000;
            break;


        }
        if(value<prevalue)
        {
            total-=value;
        }
        else
        {
            total+=value;
        }
        prevalue=value;
        

    }
    return total;
}
int main()
{
    string  s="MCMXCIV";
    cout<<"the intger equivalent to the roman number is "<<roman_to_int(s)<<endl;

    return 0;


}