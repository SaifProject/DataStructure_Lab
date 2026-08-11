#include<iostream>
using namespace std;
int main(){
    cout<< "Enter data u want to insert"<<endl;
    int n; cin >>n;
   int arr[n];
   for(int i=0; i<n;i++){
    cin>>arr[i];
   }
   cout<<"enter data u want to srch"<<endl;
   int x;
   cin >>x;


   int low=0,high=n-1;
   bool found=false;
   while(low<=high){
    int mid=(low+high)/2;
    if(x>mid){
        low=mid+1;
    }
    else if(x<mid){
        high=low-1;
    }
    else {
        found==true;
    }
   }
   if(found){
    cout<<"Data found"<<endl;
   }
   else{
    cout <<"Data not found"<<endl;
   }
}
