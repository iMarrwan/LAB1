#include<iostream>
using namespace std;
int inputs , *dym_arr , *addition; 





void input(){
  
	
   dym_arr = new int[inputs];
   for (int i = 0; i < inputs; ) {
       cout << "Enter Value: ";
       cin >> dym_arr[i];
        i++;
};
}
void resize() 
{
 int extra_input;
   cout << "Enter new size :"<<endl;
   cin >> extra_input;
   addition = new int[extra_input];
   for (int i = 0; i < extra_input; i++) {
       cout << "Enter Value: ";
       cin >> addition[i];
   }
   

       
       
   }




int main(){
    
    cout<<"How many varibles you want to add ? "<<endl;
    cin>>inputs;

	input();
    resize();

    return 0;

}