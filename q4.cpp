#include <iostream>
using namespace std;
class Fibonacci {
 int number;
public:
 void getN() {
 cout << "Enter n : ";
 cin >> number;
 }
 void fibonacci() {
 int term_1 = 0, term_2 = 1;
 int term_3 = term_1 + term_2;
 cout << "Fibonacci series upto " << number << " terms is ";
 cout << term_1 << "," << term_2 << ",";
 for (int index = 3; index <= number; index++) {
 cout << term_3 << ",";
 term_1 = term_2;
 term_2 = term_3;
 term_3 = term_1 + term_2;
 }
 }
};
int main() {
 Fibonacci F;
 F.getN();
 F.fibonacci();
 return 0;

}

