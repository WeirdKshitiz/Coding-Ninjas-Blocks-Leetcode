#include <iostream>
using namespace std;
void mergeSortedArrays(int arr1[],int arr2[],int arr3[],int n1,int n2){

int i=0,j=0,k=0;

while(i<n1 && j<n2){
    if (arr1[i] < arr2[j])
    arr3[k++]=arr1[i++];
    
    else
        arr3[k++]=arr2[j++];
}
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }

}

int main(){
int arr1[]={1,3,5,7};
int n1=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={2,4,6,8};
int n2=sizeof(arr2)/sizeof(arr2[0]);
int arr3[n1+n2];

mergeSortedArrays(arr1,arr2,arr3,n1,n2);
for(int i=0;i<n1+n2;i++){
    cout<<arr3[i]<<endl;
}
cout<<endl;
return 0;
}