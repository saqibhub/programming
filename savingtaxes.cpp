  #include <iostream>

 using namespace std;

 int main() {
     int T;
     cin >> T; // Input number of test cases

     while (T--) {
         int X, Y;
         cin >> X >> Y; // Input earnings (X) and tax threshold (Y) for each test case

         // Calculate the minimum amount to invest to avoid taxes
         int minimum_investment = ( Y - X);

         cout << minimum_investment << endl; // Output the minimum investment required for each test case
     }

     return 0;
 }