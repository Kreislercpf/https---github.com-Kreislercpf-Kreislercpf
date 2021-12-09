//Name: Kreisler R. Taligatos
//Activity Name: Free programming research problem
//Description: Create a program in C++ such that you need to implement the following concepts in your program; conditionals, looping statements, functions (void and with parameters), file stream, array. Also, specify and conceptualize the title or niche of your program (i.e. grading system, game program, string manipulation, array manipulation etc.) .
//Date: December 08, 2021
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() 
{
   
    string name,student_id, date_of_pay;
	int n,i,j;
    float mark, sum=0, avg;
    double discount, discount1, discount2, discount3, discount4;
    double grade, t_fee, r_balance, t_less;
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("gradein.txt");
    out_stream.open("gradeout.txt", ios::app);

    cout << "Enter name : ";
    getline(cin,name);
    cout << "Enter ID number : ";
    getline(cin,student_id);
    cout << "Enter date of pay :";
    getline(cin,date_of_pay);
    cout << "Enter Tuition fee : ";
    cin >> t_fee;
   
    
    cout<<"Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/5;

    out_stream << "\nGrade=";
    if(avg>=96.0 && avg<=100)
        out_stream <<"1.00";
    else if(avg>=91.5 && avg<95.9)
        out_stream<<"1.25";
    else if(avg>=87.0 && avg<91.4)
        out_stream<<"1.50";
    else if(avg>=82.5 && avg<86.9)
        out_stream<<"1.75";
    else if(avg>=78.0 && avg<82.4)
        out_stream<<"2.00";
    else if(avg>=73.5&& avg<77.9)
        out_stream<<"2.25";
    else if(avg>=69.0 && avg<73.4)
        out_stream<<"2.50";
    else if(avg>=64.5&& avg<68.9)
        out_stream<<"2.75";
    else if(avg>=60.0 && avg<64.4)
        out_stream<<"3.00";
    else if(avg>=0.0 && avg<59.9)
        out_stream<<"5.00";
    else
        out_stream<<"Invalid!";
    out_stream <<endl;
    
   {
       if(avg>=96.0 && avg<=100){
       discount = discount1 = 50;
       t_less = t_fee * discount1 / 100;
       }
       else if(avg>=87.0 && avg<=95.9){
       discount = discount2 = 20;
       t_less = t_fee * discount2 / 100;
       }
       else if(avg>=82.5 && avg<=86.9){
       discount = discount3 = 10;
       t_less = t_fee * discount3 / 100;
       }
       else{
       discount = discount4 = 0;
       t_less = t_fee * discount4 / 100;
       }
   }

   r_balance = t_fee - t_less;
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    
    out_stream << "\n-------------Receipt----------------" << endl;
    out_stream << "Student name      : " << name << endl;
    out_stream << "Student number    : " << student_id << endl;
    out_stream << "Payment Date      : " << date_of_pay << endl;
    out_stream << "Total fee         : " << t_fee << endl;
    out_stream <<"Student Discount  : "<< discount << "%" <<endl;
    out_stream <<"Total less amount : "<< t_less <<endl;
    out_stream <<"Remaining Balance : "<< r_balance <<endl;

    in_stream.close();
    out_stream.close();
        
       
       return 0;
}


 