#include <iostream>
#include <string>

using namespace std;

int main(){

    int array[]={3,7,18,9,11};
    int key=3; //Your input point goes here
    int ans=-1;


   int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        if(array[i]==key){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;

    






 
 
 
 
 
 
 
 return 0;
}