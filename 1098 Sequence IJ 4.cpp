#include <bits/stdc++.h>

using namespace std;

int main() {
    for(float i = 0; i<2.1; i+=0.2){
        for(float j = 1; j <= 3; j++){
            if((0<i && i<1) || (1<i && i<2)){
                printf("I=%.1f J=%.1f\n", i, (i+j));
            }else{
                printf("I=%d J=%d\n", (int)i, ((int)i+(int)j));
            }
        }
    }

    return 0;
}
