#include <iostream>
#include <string>
#include <map>
using namespace std;



int main() {
int personas=0,amount=0,regalos=0;
string receptor;
map<string,int> dineros;

while(cin>>personas) {
    string nombres[personas];
    for (int i = 0; i < personas; i++) {
        cin>>nombres[i];
        dineros[nombres[i]]=0;
    }

    for(int i =0;i<personas;i++){
        string dador;
        cin>>dador>>amount>>regalos;

        for(int j=1;j<=regalos;j++){
            cin>>receptor;
            dineros[receptor]+=amount/regalos;
          }
            if (regalos!=0)
                dineros[dador]-=(amount/regalos*regalos);
       }
    for (int i = 1;i<=personas; i++){
        cout << nombres[i-1] << " " << dineros[nombres[i-1]] << endl;
    if(i==personas)
        cout<<endl;}
    }
}




