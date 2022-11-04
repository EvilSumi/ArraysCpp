#include <iostream>
#include <string>

using namespace std;

int main(){

    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    

    //for each loop
    for(int ele:array){
        cout<<ele<<endl;
    }









}