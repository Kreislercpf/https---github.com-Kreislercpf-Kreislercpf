//Name: Kreisler R. Taligatos
//Activity Name: OE2
//Description:pos computer system that computes at least 3 kinds of product input, plus tax
//Date: September 15, 2021

#include <iostream>
#include <string>

const double TAX = 0.12;

using namespace std;

int main(){

    string cname,pn1,pn2,pn3;
    int pq1,pq2,pq3, qty;
    double pn1_price,pn2_price,pn3_price, t1_price,t2_price,t3_price, price, t_price, VAT, a_paid, ex_changed;

    cout << "Enter Customer Name   :";
    cin >> cname;
    cout << "Enter Product Name    :";
    cin >> pn1;
    cout << "Enter Quantity        :";
    cin >> pq1;
    cout << "Enter Product Price   :";
    cin >> pn1_price;
    cout << "Enter Product Name    :";
    cin >> pn2;
    cout << "Enter Quantity        :";
    cin >> pq2;
    cout << "Enter Product Price   :";
    cin >> pn2_price;
    cout << "Enter Product Name    :";
    cin >> pn3;
    cout << "Enter Quantity        :";
    cin >> pq3;
    cout << "Enter Product Price   :";
    cin >> pn3_price;
    cout << "Enter Amount paid     :";
    cin >> a_paid;

    
    
    t1_price = pq1 * pn1_price;
    t2_price = pq2 * pn2_price;
    t3_price = pq3 * pn3_price;
    price = t1_price + t2_price + t3_price;
    VAT = t_price * TAX;
    t_price = VAT + price;
    ex_changed = a_paid - t_price;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\n-------------------------------" << endl;
    cout << "    KRT'S Pharmacy" << endl;
    cout << "Purchase by:" << cname << endl;
    cout << "\n-----------RECEIPTS------------" << endl;
    cout << "Product name :" << pn1 << endl;
    cout << "Quantity     :" << pq1 << endl;
    cout << "Price        :" << "p" << pn1_price << endl;
    cout << "Product name :" << pn2 << endl;
    cout << "Quantity     :" << pq2 << endl;
    cout << "Price        :" << "p" << pn2_price << endl;
    cout << "Product name :" << pn3 << endl;
    cout << "Quantity     :" << pq3 << endl;
    cout << "Price        :" << "p" << pn3_price << endl;
    cout << "Amount paid  :" << "p" << a_paid << endl;
    cout << "Changed      :" << "p" << ex_changed << endl;
    
    cout << "TOTAL Amount : " << "p" << t_price << endl;
    return 0;

}   







