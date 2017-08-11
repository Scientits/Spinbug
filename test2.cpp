#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
        double real;
        double img;

    void Set(){

        cout << "nhap vao phan thuc: "<< endl; cin >> real;
        cout << "nhap vao phan ao: " << endl; cin >> img;
    }
    void Get(){
        cout << "So phuc: " << "thuc: "<< real << " " <<"ao: " << img  << endl;
    }
    Complex Add(  Complex sp2){
        Complex spn;
        spn.real = real + sp2.real;
        spn.img  = img + sp2.img;
        return spn;
    }
    double Modules(){
       double md = sqrt((real*real) + (img*img));
       return md;
    };
    /*void ComArr(){
        int n;
        cin >> n;
        for( int i= 0; i< n;i++){

        }
    }*/
};
int main(){
    Complex sum, sp1, sp2;
    cout << "nhap so phuc thu nhat: " << endl;
    sp1.Set();
    cout << "nhap so phuc thu hai: " << endl;
    sp2.Set();
    sum = sp1.Add(sp2);
    sum.Get();
    return 0;
}
