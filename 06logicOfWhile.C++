#include <iostream>
using namespace std;
int main(){

    // Print Range 
    //      Given a starting Number X and an ending number Y :
    //          Print all numbers between X and Y. Each on a seperate line.

    int X , Y ;

    cin >> X >> Y ;

    while (X<=Y)
    {
        
        /* code */
        cout<<X<<"\n";
        X++;
    }

    /*Print left angled Triangle
        Given a number N, Print a left angled triangle that has N rows.

    */
    
	int N;

	cin >> N;

	int row = 1;
	while (row <= N) {
		int stars_count = 1;

		while (stars_count <= row) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		row++;
	}
     

    return 0;
}