#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b < c || a + c < b || b + c < a){
        cout << " incorrect input" << endl;
    }
    else{
        float C = a + b + c;
        float p = C/2;
        float S = sqrt(p*(p-a)*(p-b)*(p-c));
        float ha = 2 * S / a;
        float ma = 1/2*(sqrt(2 * b*b + 2 * c*c - a*a));
        float ga = 2/(b+c)*sqrt(b*c*p*(p-a));
        float r = S/p;
        float R = a*b*c / (4*S);

       cout << " chu vi hinh tam giac: " << C << endl;
       cout << " dien tich tam giac: " << S << endl;
       cout << " do dai 3 duong cao: " << ha << endl;
       cout << " do dai 3 duong trung tuyen: " << ma << endl;
       cout << " do dai 3 duong phan giac: " << ga << endl;
       cout << " ban kinh duong tron noi tiep: " << r << endl;
       cout << " ban kinh duong tron noi tiep: " << R << endl;  

    }

    
}