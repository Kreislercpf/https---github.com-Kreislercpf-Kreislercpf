# https---github.com-Kreislercpf-Kreislercpf
//Name: Kreisler R. Taligatos
//Activity Name:Cpf Prelim Exam
//Description: Write a c++ payroll program
//Date: October 07, 2021

#include <iostream>
#include <string>

const double TAX = 0.12;

using namespace std;

int main(){

    string employee_id, name, date_of_pay;
    double num_hours_work;
    float hourly_pay_rate;
    float gross_pay;
    float net_pay;
    float pag_ibig = 200, phil_health = 150, SSS = 250, With_holding_tax;
 


    cout << "Enter name : ";
    getline(cin,name);
    cout << "Enter employee number : ";
    getline(cin,employee_id);
    cout << "Enter date of pay :";
    getline(cin,date_of_pay);
    cout << "Enter number of hours worked : ";
    cin >> num_hours_work;
    cout << "Enter hourly pay rate : ";
    cin >> hourly_pay_rate;
   

    gross_pay = hourly_pay_rate * num_hours_work;
    With_holding_tax = gross_pay * TAX;
    net_pay = gross_pay - With_holding_tax - pag_ibig - SSS - phil_health;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);




    cout << "\n-----------------------------" << endl;
    cout << "Payroll summary for : " << name << endl;
    cout << "Employee no.        : " << employee_id << endl;
    cout << "Payroll date        : " << date_of_pay << endl;
    cout << "You earned: " << num_hours_work << " at " << hourly_pay_rate << "per hour" << endl;
    cout << "Gross pay               : " << gross_pay << endl;
    cout <<"Withholding tax          : "<< With_holding_tax <<endl;
    cout <<"Philhealth               : "<< phil_health <<endl;
    cout <<"SSS                      : "<< SSS <<endl;
    cout <<"Pag-ibig                 : "<< pag_ibig <<endl;
    cout <<"\n---------------------------------" <<endl;
    cout <<"your net pay             : "<< net_pay <<endl;
    
    
    if (net_pay < 5000.00){
        cout << "Employee status : Contractual"<<endl;
        

    }if (net_pay > 5,001.00 && net_pay < 10000.00){
        cout << "Employee status : Probationary" <<endl;

        
    }if (net_pay >= 10001.00){
        cout << "Employee status : Regular" <<endl;
        return 0;
    }

    

    return 0;
}
