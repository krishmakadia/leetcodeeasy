#include<iostream>// two sum problem easy-1
using namespace std;
int main()
{
    int nums[20],target,i,j,n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    cout<<"enter the elements in the array "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"enter the target element "<<endl;
    cin>>target;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<"the answer is "<<"["<<i<<","<<j<<"]";
            }
        }       
    }

}