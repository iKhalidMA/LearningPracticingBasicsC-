

    
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

    // Read 2 integers, A B and print based on following case:
    // - if both are odd print their product A*B;

    int num1 , num2 ;
    cin>> num1 >>num2;

    if (num1&num2 % 2 == 1){
        cout<< num1*num2;
    
    // - if both are even print their divisson A/b
    } else if ( num1&num2 % 2 ==0){
        cout << (double)num / num2;
    
    // - if the first is odd and the second is even then find thier sumition A+B;
    } else if (num1 %2 ==1 & num2 % 2 ==0){
        cout << num1 +num2;
    
    // - if the first is even and the second is odd then find thier subtraction  A-B
    } else if ( num1 %2 == 0 & num2 % 2 == 1){
        cout << num1 - num2;
    } // --------------- 

    // SORT 3 NUMBERS
    //  Given 3 integrs , Sort (order) them in ascending order and print them.

    int a, b, c, tmp;
	cin >> a >> b >> c;

    if (b < a) { // Swap them

		tmp = a;
		a = b;
		b = tmp;
	}

    if (c < b) { // Swap them

		tmp = b;
		b = c;
		c = tmp;

   if (b < a) {	// Swap them{
			tmp = a;
			a = b;
			b = tmp;
		}
   cout<<a<<", "<<b<<", "<<c<<"\n";

// Maximum but Constrained 
//   Given 3 integers, you have to find the biggest one of them which is < 100;
//      print -1 if no such number 

    int int1, int3, int3, temp;
    cin >> int1>> int2>> int3;
    int res = -1;

    if (int1>100 && int1 > res)
        res = int1;

      if (int2>100 && int2> res)
        res = int2;

         if (int3>100 && int13 > res)
        res = int3;

       cou<< res; 
return 0;
  }