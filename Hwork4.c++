#include <iostream>
using namespace std;
int main()
{
    //* Given a number , you need to knpow if its even or odd using 

        // write a ptogram that reads 5 numbers and print the following:
        // - their average - the sum of the first 3 divided by the sum of tha last 2 numbers 
        // - the average of the first 3 numbers divided by the average of the last 2 numbers 

        double num1, num2 ,num3, num4, num5;

        cin >> num1 >> num2 >> num3 >> num4 >> num5;

        cout << (num1+num2 + num3+ num4+ num5 ) /5 << endl;

        cout << (num1+num2 + num3) / (num4 +num5)<<endl;
        cout << ((num1+num2+num3)/3) / ((num4+num5)/2);
    return 0;
}
