#include<iostream>
class base {
    public:
    int publicVar;
    protected:
    int protectedVar;
    private:
    int privateVar;
};
class derivedPublic:public base{
    public: 
    void show(){
        publicVar=10;
        protectedVar=20;
        std::cout<<"derivedPublic-- publicVar:"<<publicVar<<"protected:"<<protectedVar<<std::endl;

    }
};
class derivedProtected: protected base {
public:
void show(){
    publicVar=10;
    protectedVar= 20; 
    std::cout<<"derived portected -- public var:"<<publicVar<<"protectedVar:"<<protectedVar<<std::endl;
}
    };
    class DerivedPrivate : private base { public: void show() { publicVar = 10; 
    int main (){
        derivedPublic dp;
        dp.show();
        derivedProtected dpr;
        dpr.show();
        derivedPrivate dprv;
        dprv.show;
        return 0;
        
    
}