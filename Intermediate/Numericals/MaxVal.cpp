#include <iostream>
#include <string>

using namespace std;

int main(){

    int array[]={3,7,18,9,24};
    int max=array[0];
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=1;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    cout<<"Maximum element in array:"<<max<<endl;

    






 
 
 
 
 
 
 
 return 0;
}