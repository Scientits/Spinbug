#include<iostream>
using namespace std;

struct Time{
    int date;
    int  month;
    int year;
};

int main(){
     struct Time p1;
     struct Time p2 ;

     cout << " nhap vao du lieu" << endl;
     cin >> p1.date >> p1.month >> p1.year;
     cout << "nhap vao du lieu nguoi thu 2: " << endl;
     cin >> p2.date >> p2.month >> p2.year;
     cout << "ngay: " << p1.date << "thang: " << p1.month << "nam: " << p1.year << endl;
     cout << "ngay: " << p2.date << "thang: " << p2.month << "nam: " << p2.year << endl;
     //int h1, h2;
    // h1 = 2017 - p1.year;
    // h2 = 2017 - p2.year;
     //int big = 2017-p1.year;
     if((2017 - p1.year) < (2017-p2.year)){
        cout << "nguoi co tuoi lon hon:" <<  p2.year <<endl;
     }
     else
        cout <<"nguoi co tuoi lon hon:" <<  p1.year << endl;

    // cout << "nguoi co tuoi lon hon la: " << big << endl;

}
