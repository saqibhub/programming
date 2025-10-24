#include<iostream>
class Math{
    public:
     inline int add( int a , int b){
        return a+b;


     }
     int multiply(int a ,int b){
        return a*b;

     }
};
int main(){
    Math Math ;
    int num1= 5, num2= 3;
    std::cout<<"sum:"<<Math.add(num1, num2)<<std::endl;
    std::cout<<"product:"<<Math.multiply(num1, num2)<<std::endl;
    return 0;
}