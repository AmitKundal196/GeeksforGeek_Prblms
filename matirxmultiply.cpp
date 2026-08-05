#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    int e,f,g,h;

    cout<<"enter first 2*2 matrix elements"<<endl;
    cin>>a>>b>>c>>d;
    cout<<endl;
     cout<<"enter second 2*2 matrix elements"<<endl;
    cin>>e>>f>>g>>h;
    cout<<endl;

    int P1=a*(f-h);
    int P2=(a+b)*h;
    int P3=(c+d)*e;
    int P4=d*(g-e);
    int P5=(a+d)*(e+h);
    int P6=(b-d)*(g+h);
    int P7=(a-c)*(e+f);

    int C1=P5+P4-P2+P6;
    int C2=P1+P2;
    int C3=P3+P4;
    int C4=P1+P5-P3-P7;
    cout<<"result of multiplciaton of 2 matrix"<<endl;

    cout << C1 <<" "<<C2<< endl;
    cout<< C3<<" "<<C4 <<endl;


}