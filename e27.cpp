#include<iostream> //remove element easy-27
using namespace std;
int remele(int arr[],int n,int val)
{
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=val)
        {
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
int main()
{
    int val;
    int arr[]={2,3,6,3,7,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the element to be removed "<<endl;
    cin>>val;
    int newn=remele(arr,n,val);
    cout<<"array after updation is "<<endl;
    for(int i=0;i<newn;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the number of elements which are not equal to val are "<<newn<<endl;
    return n;

}