#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,a[5];
    int b[5]={1,2,3};// The remaining element will be initialized to 0
    //that is 1,2,3,0,0,0

    //Size of array
    n=sizeof(a)/sizeof(int);

    cout<<"Enter the numbers to store"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The Numbers Stored in Array A are"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\nThe Numbers Stored in Array B are"<<endl;
    for(i=0;i<n;i++){
        cout<<b[i]<<" " ;
    }


return 0;
}
//
//Output
//Enter the numbers to store
//11
//22
//33
//44
//55
//The Numbers Stored in Array A are
//11 22 33 44 55
//The Numbers Stored in Array B are
//1 2 3 0 0
