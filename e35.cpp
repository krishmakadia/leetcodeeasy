#include<iostream> //search insert position easy-35
using namespace std;
int search(int arr[],int n,int x)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }

    }
    return left;
}
int main()
{
    int arr[]={1,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter the target element "<<endl;
    cin>>x;
    int output=search(arr,n,x);
    cout<<"the index for the target element is "<<output<<endl;


}