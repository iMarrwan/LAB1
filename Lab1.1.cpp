#include <iostream>
using namespace std;
int main() {
    int* Pointer;
    Pointer = new int;
    cout<<"Enter the value of pointer : " <<endl;
    cin>>*Pointer; 
    

    cout <<" Address of a Pointer : "<<Pointer <<endl;
    cout <<" Value of Pointer : "<<*Pointer <<endl;
    delete Pointer;
    
    
    return 0;
}