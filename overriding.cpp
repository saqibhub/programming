#include<iostream>
class base1{
    public:
    void dispaly(){
        std:: cout<<"display from base1"<<std:: endl;
    }
};
class base2{
    public:
    void display(){
        std:: cout<<"display fromm base2"<< std::endl;
    }
    };
    class derived: public base1, public base2{
        public:
        void display(){
            std:: cout<<"display from derived (overriden)"<<std::endl;
        }
    };
    int main(){
        derived obj;
        obj.display();
        return 0;
    }
