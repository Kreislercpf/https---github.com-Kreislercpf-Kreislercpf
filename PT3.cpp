#include <iostream>
#include <string>
#include <fstream>

const double TAX = 0.12;
using namespace std;
int main(){
 
 string cname,pn1,pn2,pn3;
 int pq1,pq2,pq3, qty;
 double pn1_price,pn2_price,pn3_price, t1_price,t2_price,t3_price, price, t_price, VAT, a_paid, ex_changed;
 ifstream in_stream;
 ofstream out_stream;
 in_stream.open("customerin.txt");
 out_stream.open("customerout.txt", ios::app);

 
 
 

 cout << "Enter Customer Name :";
 getline(cin,cname);    
 cout << "Enter Product Name :";
 getline(cin,pn1);
 cout << "Enter Quantity :";
 cin >> pq1;
 cin.ignore();
 cout << "Enter Product Price :";
 cin >> pn1_price;
 cin.ignore();
 cout << "Enter Product Name :";
 getline(cin,pn2);
 cout << "Enter Quantity :";
 cin >> pq2;
 cin.ignore();
 cout << "Enter Product Price :";
 cin >> pn2_price;
 cin.ignore();
 cout << "Enter Product Name :";
 getline(cin,pn3);
 cout << "Enter Quantity :";
 cin >> pq3;cin.ignore();
 cout << "Enter Product Price :";
 cin >> pn3_price;
 cin.ignore();
 cout << "Enter Amount paid :";
 cin >> a_paid;
 cin.ignore();
 
 
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

 out_stream << "\n-------------------------------" << endl;
 out_stream << " KRT'S Pharmacy" << endl;
 out_stream << "Purchase by:" << cname << endl;
 out_stream << "\n-----------RECEIPTS------------" << endl;
 out_stream << "Product name :" << pn1 << endl;
 out_stream << "Quantity :" << pq1 << endl;
 out_stream << "Price :" << "p" << pn1_price << endl;
 out_stream << "Product name :" << pn2 << endl;
 out_stream << "Quantity :" << pq2 << endl;
 out_stream<< "Price :" << "p" << pn2_price << endl;
 out_stream << "Product name :" << pn3 << endl;
 out_stream << "Quantity :" << pq3 << endl;
 out_stream << "Price :" << "p" << pn3_price << endl;
 out_stream << "Amount paid :" << "p" << a_paid << endl;
 out_stream << "Changed :" << "p" << ex_changed << endl;
 
 out_stream << "TOTAL Amount : " << "p" << t_price << endl;

 in_stream.close();
 out_stream.close();
 return 0;

}