#include<iostream> //deleting an element from an array 
using namespace std;
int remele(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        break;
    }
    if(i<n)
    {
        n=n-1;
        for(int j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    return n;
}
int main()
{
    int x;
    int arr[]={2,5,7,9,23,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the element to be deleted "<<endl;
    cin>>x;
    cout<<"before deletion "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n=remele(arr,n,x);
    cout<<"after deletion "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}