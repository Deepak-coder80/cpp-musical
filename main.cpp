#include <iostream>

//using namespace std;

int main(){

    int i=0;
    std::string name = "Deepak";
    
    // std::cout<<name.length()<<std::endl;

    // for(i=0;name[i]!='\0';i++){

    //      std::cout<<name[i]<<std::endl;
    // }

    //std::cout<<name.find("pak",0); //--->for finding a char or string 
    //an string . 2 parameter string or char and starting index

    //for searching substring.
    //also takes two parameters where to start and how many character
    std::string subName = name.substr(3,3);
    std::cout<< subName;

    
    return 0;
}