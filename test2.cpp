#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        double real;
        double img;
    public:
    void Set(){
        cout << "nhap vao so phuc thu nhat:" << endl;
        cout << "nhap vao phan thuc: "<< endl; cin >> real;
        cout << "nhap vao phan ao: " << endl; cin >> img;
    }
    void Get(){
        cout << "So phuc: " << real << " " << img  << endl;
    }
    void Sum(Complex spn, Complex sp1, Complex sp2){

        spn.real = sp1.real + sp2.real;
        spn.img  = sp1.img + sp2.img;

    }
    void Modules(){
        Complex md = sqrt((a*a) + (b*b));
    };
    void ComArr(){
        int n;
        cin >> n;
        for( int i= 0; i< n;i++){

        }
    }
int main(){
    Complex sp1, sp2;
    cout << "nhap so phuc thu nhat: " << endl;
    cin >> sp1.Set();

    cout << "nhap so phuc thu hai: " << endl;
    cin >> sp2.Set();


}
