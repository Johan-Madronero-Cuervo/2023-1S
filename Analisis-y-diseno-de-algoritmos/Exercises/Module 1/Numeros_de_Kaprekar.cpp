// Algorithm provided by tutorialspoint and modified by Johan Madronero Cuervo
// for algorithm analysis 2023 - 1S
#include<bits/stdc++.h>
using namespace std;
bool isKaprekarNumber(int n) {
   if (n == 1) {
      return true;
   }
   int nSquare = n * n, digitsCount = 0;
   while (nSquare) {
      digitsCount++;
      nSquare /= 10;
   }
   nSquare = n * n;
   for (int i = 1; i < digitsCount; i++) {
      int parts = pow(10, i);
      if (parts == n) {
         continue;
      }
      int sum = nSquare / parts + nSquare % parts;
      if (sum == n) {
         return true;
      }
   }
   return false;
}
int main() {
   int casos = 0;
   int n = 0;
   std::cin >> casos;
   
   for (int i = 0; i < casos; i++){
       std::cin >> n;
       
       if (isKaprekarNumber(n)){
           std::cout << "KAP" << std::endl;
           continue;
       }
       
       std::cout << "NO" << std::endl;
   }
}