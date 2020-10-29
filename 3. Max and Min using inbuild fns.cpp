#include<bits/stdc++.h>
#include<climits> // To use INT_MIN and INT_MAX
using namespace std;
int main(){
    int n,i,key;
    cin>>n;
    int a[1000];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;

    for(i=0;i<n;i++){
            largest=max(largest,a[i]);
            smallest=min(smallest,a[i]);
            //OR
//        if(a[i]>largest){
//            largest=a[i];
//        }
//        if(a[i]<smallest){
//            smallest=a[i];
//       }

    }
    cout<<"Largest "<<largest<<endl;
    cout<<"Smallest "<<smallest<<endl;



return 0;
}

//Output
//5
//11
//22
//66
//88
//99
//Largest 99
//Smallest 11
