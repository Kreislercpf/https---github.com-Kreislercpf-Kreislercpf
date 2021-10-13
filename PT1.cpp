//Name: Kreisler R. Taligatos
//Activity Name:PT1 odd//even number scheme
//Description: using while loop and if conditonal to determine if the number is odd or even
//Date: October, 13, 2021

#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main() {
  int n, n1, n2, n3, n4, n5;

  cout << "Enter Range of number : ";
  cin >> n;
  cout << "Enter 5 consectutive numbers:  ";
  cin >> n1;
  cin >> n2;
  cin >> n3;
  cin >> n4;
  cin >> n5;

  if ( n1 % 2 == 0)
  cout << n1 << " is even number." <<endl;
  else
  cout  << n1 << " is odd number." <<endl;

 if ( n2 % 2 == 0)
  cout  << n2 << " is even number." <<endl;
  else
  cout << n2 << " is odd number." <<endl;
  
 if ( n3 % 2 == 0)
  cout  << n3 << " is even number." <<endl;
  else
  cout << n3 << " is odd number." <<endl;

if ( n4 % 2 == 0)
  cout  << n4 << " is even number." <<endl;
  else
  cout << n4 << " is odd number." <<endl;

if ( n5 % 2 == 0)
  cout  << n5 << " is even number." <<endl;
  else
  cout << n5 << " is odd number." <<endl;

 return 0;
}


