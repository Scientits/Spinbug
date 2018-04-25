#include<iostream>

using namespace std;

double factorial(int n){
    
    if(n == 1)
        return 1;
    else
        return n * factorial(n - 1);    // result = n * factorial(n - 1);   
}

int main (){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}