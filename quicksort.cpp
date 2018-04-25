#include <bits/stdc++.h>
using namespace std;

/*this function: last element as pivot then places all smaller elements to the left, the others to the right*/

int partitioN(int a[], int low, int high){
    int pivot = a[high]; // this is pivot
    int i = (low - 1);   // index of smaller elements

    for(int j = low; j <= high - 1; j++){
        if(a[j] <= pivot){
            i++; // index of low++
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);
    return (i + 1);
}
void quick_sort(int a[], int low, int high){
    if(low < high){
        int p_index = partitioN(a, low, high);
        quick_sort(a, low, high);
        quick_sort(a, p_index + 1, high);
    }
}

void prinT(int a[], int n){
    int i;
    for(int i = 0; i < n; i ++){
        cout << a[i];
    }cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    return 0;

}