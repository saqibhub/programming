#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Input the number of test cases
    while (T--) {
        int N, M;
        cin >> N >> M; // Input the number of students and available tickets
        if (N <= M) {
            cout << "0" << endl; // If available tickets are more than or equal to the number of students, no student will be unable to book tickets
        } else {
            cout << N - M << endl; // If available tickets are less than the number of students, the difference represents the number of students who won't be able to book tickets
        }
    }
    return 0;
}
