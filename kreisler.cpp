//Name: Kreisler R. Taligatos
//Activity Name:
//Description: Input and Output
//Date: September 10, 2021

#include <iostream>
#include <string>

using namespace std;

int main() {

    string name,gen,age,address,yrsc,course,contact;//variable declaration- allocation of memory

    cout << "Hello CS and IT" << endl;
    cout << "Welcome to Computer Programing Fundamentals" << endl;

    cout << "enter your name :";
    getline(cin,name);
    cout << "enter your gender :";
    getline(cin,gen);
    cout << "enter your age :";
    getline(cin,age);
    cout << "enter your address :";
    getline(cin,address);
    cout << "enter your year and section :";
    getline(cin,yrsc);
    cout << "enter your course :";
    getline(cin,course);
    cout << "enter your contact number :";
    getline(cin,contact);


   
    //OUTPUT DISPLAY
    cout << "\n----------------------------------" <<endl;
    cout << "\nYour Name is " << name <<endl; 
    cout << "\nyour Gender is " << gen <<endl; 
    cout << "\nYour are "<<age<<" Years old" <<endl; 
    cout << "\nYour address is " << address <<endl; 
    cout << "\nYour Year and Section is " << yrsc <<endl; 
    cout << "\nYour Course is " << course <<endl; 
    cout << "\nYour Contact Number is " << contact <<endl; 

    return 0;
}