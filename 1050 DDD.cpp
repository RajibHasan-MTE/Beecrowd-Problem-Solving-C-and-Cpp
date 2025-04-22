#include<bits/stdc++.h>
using namespace std;



int main(){
    int a;
    cin>>a;
    /*
    if(61 == a) cout<<"Brasilia"<<endl;
    else if(71 == a) cout<<"Salvador"<<endl;
    else if(11 == a) cout<<"Sao Paulo"<<endl;
    else if(21 == a) cout<<"Rio de Janeiro"<<endl;
    else if(32 == a) cout<<"Juiz de Fora"<<endl;
    else if(19 == a) cout<<"Campinas"<<endl;
    else if(27 == a) cout<<"Vitoria"<<endl;
    else if(31 == a) cout<<"Belo Horizontes"<<endl;
    else cout<<"DDD nao cadastrado"<<endl;
    */

    switch(a){
    case 61:
        cout<<"Brasilia"<<endl;
        break;
    case 71:
         cout<<"Salvador"<<endl;
         break;
    case 11:
        cout<<"Sao Paulo"<<endl;
        break;
    case 21:
        cout<<"Rio de Janeiro"<<endl;
        break;
    case 32:
        cout<<"Juiz de Fora"<<endl;
        break;
    case 19:
        cout<<"Campinas"<<endl;
        break;
    case 27:
         cout<<"Vitoria"<<endl;
         break;
    case 31:
        cout<<"Belo Horizontes"<<endl;
        break;
    default:
         cout<<"DDD nao cadastrado"<<endl;
         break;
    }


return 0;


}
