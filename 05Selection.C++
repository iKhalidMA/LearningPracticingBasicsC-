

    
#include <iostream>
using namespace std;
int main() {
// Is Even or Odd ? Print Different forms of digit:
    // if even -> print last digit 
    int num;
    cin>> num;
    if (num %2 ==0 ){
        cout<< num % 10 << "\n";
    }
    // if odd -> do following :
    // if number < 1000 , print last 2 digits 
    // if number >- 1000 and number < 1000000 , print last 4 digits;
    // Otherwise, print its negative value.

    if (num%2==1){
        if(num<1000){
            cout<< num % 100;
        }else if (num>=1000 & num < 1000000){
            cout<< num % 10000;
        }else{
            cout << -num;
        }   
    }
return 0;
  }