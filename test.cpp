#include<iostream>

using namespace std;

class TrainStation{
    public:
        char ID;
        char name[30];
        int time;
        string TrainType;
        string ChairType;
        float Fee;

};

void Input(class TrainStation Pes[], int& count){

    again:
        cout << "Nhap vao ID hanh khach: " << endl;
        cin >> Pes[count].ID;
    if(search(Pes, Pes[count].ID,count) != 1){
        cout << "ID da ton tai" << endl;
        goto again;
    }

    cout << "nhap ten hanh khach: " << endl;

    cin >> Pes[count].name;

    cout << " nhap thoi gian tau chay:  "<< endl; cin >> Pes[count].time;
    cout << " nhap loai tau: " << endl; cin >> Pes[count].TrainType;
    cout << " nhap loai ghe: " << endl; cin >> Pes[count].ChairType;
    cout << " nhap gia ve: " << endl; cin >> Pes[count].Fee;

    count ++;


}

void Print(class TrainStation Pes[], int count){
    int i= 0;
    cout << left << setw(4) << "ID" << setw(15) << "Name" << setw(5)<< "Time"<< setw(5) <<  "TrainType" << setw(5) << " ChairType" << setw(5) << "Fee"<< endl;

    cout << "======================================================" << endl;
    while(i < count){
        if(Pes[i].ID != ""){
            cout << left << setw(5) << Pes[i].ID << setw(20) << Pes[i].name << setw(5) << Pes[i].time << setw(5) << Pes[i].TrainType << setw(5) << Pes[i].ChairType << Pes.[i].Fee >> endl;
        }
        i++;
    }
}
int main(){
    int Pes[100];
    int count =0;
    Input();
    Output();
}
