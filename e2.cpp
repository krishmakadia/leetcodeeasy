#include<iostream>
#include<algorithm>
using namespace std;
void palindrome(string s)
{
    string p=s;
    reverse(p.begin(),p.end());
    if(s==p)
    {
        cout<<"string is a palindrome "<<endl;
    }
    else
    {
        cout<<"string is not a palindrome "<<endl;
    }

}
int main()
{
    string s="122111";
    palindrome(s);

    return 0;
}