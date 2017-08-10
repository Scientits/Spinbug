#include<iostream>

using namespace std;

void input(int &a,int  &b,int  &c,int &d,int &e){
    cout << "nhap vao 5 so: "<< endl;
    cin >> a >> b>> c >> d >> e;
}
float avg(int &a,int  &b,int  &c,int &d,int &e){
    return (a + b + c + d + e) /5;
}
int main(){
    int a,b,c,d,e;
    input(a,b,c,d,e);
    cout << avg(a,b,c,d,e);
}
