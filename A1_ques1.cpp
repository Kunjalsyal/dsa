#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;

        cout<<"CREATE"<<endl;
        cout<<"Enter the size of array"<<endl;
        cin>>size;
        cout<<"Enter the elements of array"<<endl;
        for(int i=0;i<size;i++)
        {
           cin>>arr[i];
        }

        cout<<"DISPLAY"<<endl;
        cout<<endl<<"The given array is"<<endl;
        for(int i=0;i<size;i++)
        {
        cout<<arr[i]<<" ";
        }
        cout<<endl;

        cout<<"INSERT"<<endl;
        cout<<endl<<"Enter the position where element is to be inserted and value of that element:"<<endl;
        int pos,val;
        cin>>pos>>val;
        for(int i=size;i>pos;i--)//shifting elements right
        {
           arr[i]=arr[i-1];   
        }
        arr[pos]=val;
        cout<<endl<<"The given array after insertion is"<<endl;
        for(int i=0;i<=size;i++)
        {
        cout<<arr[i]<<" ";
        }

        cout<<endl<<"DELETE"<<endl;
        cout<<endl<<"Enter the position where element is to be deleted:"<<endl;
        int posd; 
        cin>>posd;
        for(int i=posd;i<size;i++)//shifting elements left
        {
           arr[i]=arr[i+1];   
        }
        cout<<endl<<"The given array after deletion is"<<endl;
        for(int i=0;i<size-1;i++)
        {
        cout<<arr[i]<<" ";
        }
}
