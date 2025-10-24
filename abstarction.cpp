#include <iostream>
using namespace std;

class car {
public:  // Declare the methods as public
    void startengine() {
        cout << "Engine started." << endl;
    }

    void stopengine() {
        cout << "Engine stopped." << endl;
    }
};

int main() {
    car mycar;
    mycar.startengine();  // Now accessible because the methods are public
    mycar.stopengine();

    return 0;
}
