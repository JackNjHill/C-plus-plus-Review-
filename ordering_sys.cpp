#include <iostream>
using namespace std;
int main() {
    int asus = 30000;
    int lenovo = 25000;
    int mac = 80000;
    int dell = 28500;
    int quantity_a,quantity_l,quantity_m,quantity_d,total_a,total_l,total_m,total_d,total,payment;
    cout << "Jhillian's Laptop Store\n" << "Pick out your laptop/s\n"<< "Asus Laptop | 30,000\n\n"<<"Lenovo Laptop | 25,000\n\n"<<"Macbook | 80,000\n\n"<<"Dell Laptop | 28,500\n\n"<<"________________________________________________\n"<<"Put the quantity of item you want:  ";
    cout << "\nAsus Laptop | Quantity: ";
    cin >> quantity_a;
    cout << "\nLenovo Laptop | Quantity: ";
    cin >> quantity_l;
    cout << "\nMacbook | Quantity: ";
    cin >> quantity_m;
    cout << "\nDell Laptop | Quantity: ";
    cin >> quantity_d;
    total_a = asus * quantity_a;
    total_l = lenovo * quantity_l;
    total_m = mac * quantity_m;
    total_d = dell * quantity_d;
    total = total_a +  total_l + total_m+ total_d;
    cout << "________________________________________________"<< "\nTotal:" << total<<"\n";
    cout << "Payment Received: ";
    cin >> payment;
    cout << "\nChange:" << payment - total ;
    return 0;
}
