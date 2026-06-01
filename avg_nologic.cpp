#include <iostream>
using namespace std;
int main() {
    string f_name;
    string l_name;
    string program;
    int age;
    char middle_initial;
    float gradeDataSci, gradeUTS, gradeCISCO, gradeEMTECH, gradePE, average;
    cout << "What's your First name?\n" ;
    cin >>  f_name;
    cout << "What's your Last name?\n ";
    cin >>  l_name;
    cout << "What's your Program?\n ";
    cin >>  program;
    cout << "_________________________________________________________________\n";
    cout << "Hello!\n" << f_name << " " << l_name << " "<< " | Program: " << program << "\n.";
    cout << "What's your Grade in Data Science?\n";
    cin >> gradeDataSci;
    cout << "What's your Grade in Understanding the Self?\n";
    cin >> gradeUTS;   
    cout << "What's your Grade in CISCO?\n";
    cin >> gradeCISCO;
    cout << "What's your Grade in EMTECH?\n";
    cin >> gradeEMTECH;
    cout << "What's your Grade in PE?\n";
    cin >> gradePE;
    average = (gradeDataSci+ gradeUTS +gradeCISCO+ gradeEMTECH+ gradePE)/5;
    cout << "Here's your Average: "<< average <<"\n";
    cout<< "_____________________DONE_______________________";
    
    return 0;
}
