#include <iostream>
#include <string>

using namespace std;

int main(){

    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    

   //while loop
   int idx=0;
   while(idx<size){
    cout<<array[idx]<<endl;
    idx++;
   }









}