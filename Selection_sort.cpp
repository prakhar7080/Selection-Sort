#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]) min = j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min] = temp;
    }
    cout<<"After swapping : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;
    int *a = (int *)malloc(size*sizeof(int));
    int i;
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Before swapping : "<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    selection_sort(a,size);
}
