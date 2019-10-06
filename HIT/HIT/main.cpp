#include <iostream>
#include <string>
using namespace std;

int check(double Xa, double Ya,double X0, double Y0,double R){
    if((X0*Xa)*(X0*Xa)+(Y0*Ya)*(Y0*Ya)<=R*R){
        return 1;
    }else{
        return 0;
    }
}
int main() {
    double Xa, Ya;
    double R,X0,Y0;
    string blank_or_no="";
    R=10;
    X0=5;
    Y0=5;
    cout<< "Введите координаты точки А"<<endl;
    cout<<"x= "; cin >> Xa;
    cout<<"y= "; cin >>Ya;
    if(check(Xa,Ya,X0,Y0,R)!=1){
        blank_or_no="НЕ";
    }
          cout<<"точка А с координатами ("<<Xa<<"; "<<Ya<<")"<<blank_or_no<<" пренадлижит кругу с цетром в точке ("<<X0<<"; "<<Y0<<") и радиусом R= "<<R<<endl;
    
}
