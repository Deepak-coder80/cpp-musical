#include <iostream>

using namespace std;

int main(){

    //step1: declare the variables
    float num1,num2;
    int option,choice;

   do
   {
        //step 2: get the option
        cout<<"Enter the operation: \n\t Enter 1 for Addition "<<endl;
        cout<<"\t Enter 2 for Substraction \n\t Enter 3 for Product "<<endl;
        cout<<"\t Enter 4 for Division\n Enter the option here:";
        cin>>option;

        //step 3: get the numbers
        cout<<"Enter the first Number:";
        cin>>num1;
        cout<<"Enter the second Number:";
        cin>>num2;


        //step 4 : goto correct calculation
        switch (option)
        {
        case 1:
            cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
            break;
        case 2:
            cout<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
            break;
        case 3:
            cout<<num1<<" x "<<num2<<" = "<<(num1*num2)<<endl;
            break;
        case 4:
            cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
            break;
        
        default:
            cout<<"Invalid Operation"<<endl;
            break;
        }
       cout<<"Do you want to conitinue? if yes enter 1:";
       cin>> choice;
   } while (choice==1);
   

    return 0;
}