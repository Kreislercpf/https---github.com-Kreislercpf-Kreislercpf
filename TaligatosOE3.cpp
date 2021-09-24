#include <iostream>
#include <string>

using namespace std;

int main(){

    string employee_id, name;
    int num_hours_work;
    double rate_per_hour;
    double gross_pay;
    int net_pay;
    int t_rate;
 
    
    cout << "Enter emloyee id : ";
    cin >> employee_id;
    cout << "Enter name       : ";
    cin >> name;
    cout << "Enter number of hours worked : ";
    cin >> num_hours_work;
    cout << "Enter rate per hour          : ";
    cin >> rate_per_hour;

    cout << "\n-----------------------------" << endl;
    cout << "Employee id   : " << employee_id << endl;
    cout << "Employee name : " << name << endl;
    cout << "rate per hour : " << rate_per_hour << endl;
    
    
       

    if (num_hours_work == 0 ||rate_per_hour == 0) {
        cout << "you did not input anything!";
        return 0;
    }
    if(num_hours_work <= 40){
        gross_pay = rate_per_hour * num_hours_work;
    }else if(num_hours_work > 40){
        gross_pay = rate_per_hour * 40 + 1.5 * rate_per_hour * (num_hours_work - 40);
    }   

    else{
        cout << "invalit input!";

    
    }
    if(gross_pay < 20000){
    net_pay=gross_pay*0.05;
    cout<<"your tax rate : " << 5 << "%" <<endl;

    
    }else if(gross_pay >= 30000 && gross_pay <= 40000){
    net_pay=gross_pay*0.10;
    cout<<"your tax rate : " << 10 << "%" <<endl;
    
    }else if(gross_pay > 40000){
    net_pay = gross_pay * 0.12;
    cout<<"your tax rate : " << 12 << "%" <<endl;
    }

    

    

    cout << "your gross pay : " << gross_pay << endl;
    cout<<"your net pay : "<< net_pay <<endl;

    return 0;
}
