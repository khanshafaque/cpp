#include <iostream>

#include <sstream>

#include <cmath>

using namespace std;

class Complex {

 private:

 int real, imag;

 public:

 Complex(){

 real = imag = 0;

 }

 Complex (int r, int i){

 real = r;

 imag = i;

 }

 string to_string(){

 stringstream ss;

 if(imag >= 0)

 ss << "(" << real << " + " << imag << "i)";

 else

 ss << "(" << real << " - " << abs(imag) << "i)";

 return ss.str();

 }

 Complex operator+(Complex c2){

 Complex ret;

 ret.real = real + c2.real;

 ret.imag = imag + c2.imag;

 return ret;

 }

 Complex operator*(Complex c2){

 Complex ret;

 ret.real = (real*c2.real) - (imag*c2.imag);

 ret.imag = (real*c2.imag) + (imag*c2.real);

 return ret;

 }

};

int main(){

 Complex c1(8,-5), c2(2,3);

 Complex res1 = c1 + c2;

 Complex res2 = c1 * c2;

 cout << res1.to_string();

 cout<<endl;

 cout << res2.to_string();
}
