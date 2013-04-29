#include<iostream>
#include<stdio.h>

using namespace std;

const int n = 3;
void greedy(double m, double w[n], double c[n], double x[n]){
    int i;
    double z=m;
    for(i=0;i<n;i++){
        if(w[i]>z)
        break;
        x[i]=1;
        z=z-w[i];
    }
    if(i<n)
        x[i]=z/w[i];

}
int main(){
    double a1,b1,c1;
    double a2,b2,c2;
    double a3,b3,c3;
    double w[n]={a1,b1,c1}, c[n]={a2,b2,c2}, x[n]={a3,b3,c3};
    double m;
    cout<<"Podaj M : ";
    cin>>m;
    cout<<"Dla w[i]"<<endl;
    cout<<"Podaj pierwsza wartosc : ";
    cin>>a1;
    cout<<"Podaj druga wartosc : ";
    cin>>b1;
    cout<<"Podaj trzecia wartosc : ";
    cin>>c1;
    cout<<"\n\n";
    cout<<"Dla c[i]"<<endl;
    cout<<"Podaj pierwsza wartosc : ";
    cin>>a2;
    cout<<"Podaj druga wartosc : ";
    cin>>b2;
    cout<<"Podaj trzecia wartosc : ";
    cin>>c2;
    cout<<"\n\n";
    cout<<"Dla x[i]"<<endl;
    cout<<"Podaj pierwsza wartosc : ";
    cin>>a3;
    cout<<"Podaj druga wartosc : ";
    cin>>b3;
    cout<<"Podaj trzecia wartosc : ";
    cin>>c3;
    cout<<"\n\n";
    greedy(m,w,c,x);
    double p=0;
    for(int i=0 ; i<n; p+=x[i]*c[i], i++){
        printf("\ni = %d w[i] = %d c[i] = %d x[i] = %d",i,w[i],c[i],x[i]);
    }
    printf("\n\nRazem = %e\n\n",p);
    return 0;
}
