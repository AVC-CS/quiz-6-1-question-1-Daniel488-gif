#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
  if (num <= 1) return false;
for (int i = 2; i * i <= num; ++i) {
if (num % i == 0)
  return false;
}
return true;
}
// Get two integer values from the user, where begin < end
void getTwoValues(int &begin, int &end) {
  do {
cout << "Enter two integers (begin < end): ";
cin >> begin >> end;
  } while (begin >= end);
}
// Find the closest next prime number after 'begin'
int getNextPrime(int begin) {
  int num = begin + 1;
while (!isPrime(num)) {
++num;
}
return num;
}

// Find the closest previous prime number before 'end'
int getPrevPrime(int end) {
  int num = end - 1;
while (num > 1 && !isPrime(num)) {
--num;
}
return num;
}
#endif
