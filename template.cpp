// Write a function template selection Sort. Write a program that inputs, sorts and outputs an integer array and a float array.
#include<iostream>
#define size 10
using namespace std;
int n;
template<class T>
void selection_sort(T arr[size]){
   T temp;
   int i,j,min;
   for(i=0;i<n-1;i++){
    	min=i;
	    for(j=i+1;j<n;j++){
	        if(arr[j]<arr[min]){
	            min=j;
	        }
	    }
	        temp=arr[i];
	        arr[i]=arr[min];
	        arr[min]=temp;

   }
   cout<<"The sorted array is"<<endl;
   for(i=0;i<n;i++){
    cout<<arr[i]<<"\t";
   }
   cout<<endl;
};
int main(){ 
    cout<<"ENter the number of elements : "<<endl;
    cin>>n;
    int arr[size];
    float arr1[size];
    for(int i=0;i<n;i++){
        cout<<"Enter the"<<i<<"th integer value"<<endl;
        cin>>arr[i];
            }
        cout<<"The array is :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"\t";
            }
    cout<<endl;
    selection_sort(arr);
    for(int i=0;i<n;i++){
        cout<<"Enter the"<<i<<"th float value"<<endl;
        cin>>arr1[i];
            }
        cout<<"The array is :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr1[i]<<"\t";
            }
    cout<<endl;
    selection_sort(arr1);
    return 0;
}
