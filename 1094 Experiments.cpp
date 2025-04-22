#include<bits/stdc++.h>
using namespace std;



int main(){
    int t, x, rat=0, rabbit=0, frog=0, total=0;
    char cha;
    cin>>t;
    while(t--){
         cin>>x>>cha;
         if(cha == 'C') rabbit += x;
         if(cha == 'R') rat += x;
         if(cha == 'S') frog += x;
    }
    total = rabbit+rat+frog;
    double rabbit_p = (rabbit*100.0)/total;
    double rat_p = (rat*100.0)/total;
    double frog_p = (frog*100.00)/total;

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<rabbit_p<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<rat_p<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<frog_p<<" %"<<endl;





return 0;
}
