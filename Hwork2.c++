#include <iostream>
using namespace std;

int main() {
        //\\//
        //write a ptogram reads 2 numbers and print theire + * / - 
        //\\//
     int num1, num2;
        cin >> num1>> num2;
        cout << "The Addition is equal : "<< num1 + num2 <<"\n";
        
        cout << "The Subtraction is equal : "<< num1 - num2 <<"\n";
        
        cout << "The Multiblition is equal : "<< num1 * num2 <<"\n";
        
        cout << "The Divition is equal : "<< num1 / num2 ;
        //\\//
        // write a program for your teacher to read info about name, id , grade his students and print them
        //\\//
        string name; 
        int id;
        int grade;
        cout << "Enter Your Name ";
        cin >> name ;
        cout <<"Enter Your id ";
        cin >> id;
        cout << "Enter Your Grade ";
        cin >> grade ;

        cout << name << " ( With iD:  "<< id <<")"<< " got grade : " << grade;

        return 0;
}