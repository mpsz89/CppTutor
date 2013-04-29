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

    double w[n]={10,12,16}, c[n]={60,70,80}, x[n]={0,0,0};
    double m = 20;
    greedy(m,w,c,x);
    double p=0;
    for(int i=0 ; i<n; p+=x[i]*c[i], i++){
        printf("\ni = %d w[i] = %d c[i] = %d x[i] = %d",i,w[i],c[i],x[i]);
    }
    printf("\n\nRazem = %e\n\n",p);
    return 0;
}
