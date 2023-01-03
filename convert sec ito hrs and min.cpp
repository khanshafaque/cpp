#include <cstdio>
#include <iostream>
using namespace std;
int main ()
{
  int total, seconds, hours, minutes;
cin >> total;
minutes = total / 60;
seconds = total % 60;
hours = minutes / 60;
minutes = minutes % 60;
cout << total << " seconds is equivalent to " << hours << " hours " << minutes
<< " minutes " << seconds << " seconds.\n" ;

 

    return 0;
    }