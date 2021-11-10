#include<iostream>
using namespace std;
int main(){
    int unit;
    float amt =0, total_amt, sur_charge;
    cout<<"Enter Unit"<<endl;
    cin>>unit;
    if(unit <= 50){
        amt = unit * 0.50;
    }
    else if( unit <= 150){
        amt = 25 + (unit - 50) * 0.75;
    }
    else if( unit <= 250){
        amt = 100 + (unit - 150 ) * 1.20;
    }
    else{
        amt = 220 + (unit -  250 ) * 1.50;
    }
    sur_charge = amt * 0.20;
    total_amt = amt + sur_charge;
    cout<<"Electricity Bill = Rs"<<total_amt<<endl;
}

