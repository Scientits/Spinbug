#include<iostream>

using namespace std;
void input(int a[]){
    cout << "nhap vao 5 so: "<< endl;
    for(int i = 0; i< 5;i++){
        cin >> a[i];
    }
}
void sum50(int a[]){
    for(int i = 0; i < 5;i++){
        for(int j =i+1; j < 5; j++){
            if(a[i]+a[j] == 50){
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}
int main(){
    int a[5];
    input(a);
    sum50(a);
    return 0;
}
