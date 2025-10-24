#include<iostream>
#include<string>
int main(){
    int numIntegers=5;
    
    int*intArray = new int[numIntegers];
    for(int i=0; i<numIntegers; ++i){
        intArray[i]= i+1;
    }
    std::cout<<"integers array elements :";
    for(int i = 0 ;i<numIntegers;i++){
        std::cout<< intArray[i]<<" ";

    }
    std::cout<<std::endl;
    int numstrings =3;
    std::string* stringArray = new std:: string[numstrings];
    stringArray[0]="hello";
    stringArray[1]="world";
    stringArray[2]="!";
    std::cout<<"string array element: ";
    for(int i =0;i<numstrings;++i){
        std::cout<<stringArray[i]<<" ";

    } 
    std::cout<<std::endl;
    delete[] intArray;
    delete[] stringArray;
    return 0;
}
