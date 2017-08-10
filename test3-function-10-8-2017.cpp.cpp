#include<iostream>

using namespace std;

int get_min(int a, int b){
    int min = a;
    if(a> b){
        min = b;
    }

}
int get_min(int a, int b, int c){
    int min = c;
    get_min(a,b);
    if(min > get_min(a,b)){
        min = get_min(a,b);
    }cout << min << endl;
}

int main(){
    int a,b,c;
    cin >> a >> b >>c ;
    get_min(a,b,c);
    return 0;
}
