#include <bits/stdc++.h>


using namespace std;



int main(){
    float a, b, c, d, avg, f;
    cin>>a>>b>>c>>d;
    a = a*2;
    b = b*3;
    c = c*4;
    d = d*1;

    avg = (a+b+c+d)/10;
    if(avg >= 7){
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl<<"Aluno aprovado."<<endl;
    }
    else if(avg<5){
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl<<"Aluno reprovado."<<endl;
    }
    else if(avg>=5 && avg<7){
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl<<"Aluno em exame."<<endl;
        cin>>f;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<f<<endl;

        avg = (avg+f)/2;
        if(avg>=5){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<avg<<endl;
    }

return 0;

}
