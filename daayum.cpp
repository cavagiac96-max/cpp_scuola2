#include<iostream>
#include<string>

using namespace std;

struct vocaboli{
    int minuscole ;
    int maiuscole ;
    int numeri;
    int carspec;
    int vocali;
};

ostream & operator<<(ostream &os,vocaboli &p){
    os<<"cose richieste: "<<endl;
    os<<"minuscole "<<p.minuscole<<" MAIUSCOLE   "<<p.maiuscole<<" car spec "<<p.carspec<<" numeri "<<p.numeri<<"vocali "<<p.vocali;
    return os;
}

bool checkvocali(char lettera){
    if(lettera >='A' && lettera <='Z'){
        lettera=lettera+32;
    }
    if(lettera=='a' || lettera=='e' || lettera=='i' || lettera=='o' || lettera=='u' ){
        return true;
    }else{
        return false;
    }
}

vocaboli checkparola(string parola){
    int i,m=0,M=0,c=0,n=0,vocali=0;
    vocaboli diversecose;
    char lettera[1];
    for(i=0;i<parola.size();i++){
        if(parola[i]>='a' && parola[i]<='z' ){
            m++;

        }
        if(parola[i]>='A' && parola[i]<='Z'){
            M++;
        }
        if(parola[i]>='1' && parola[i]<='9'){
            n++;

        }
        //lettera[0]==parola[i];
        if(checkvocali(parola[i])==true){
            vocali++;
        }
    }
    c=parola.size()-(m+M+n);
    diversecose.minuscole=m;
    diversecose.maiuscole=M;
    diversecose.numeri=n;
    diversecose.carspec=c;
    diversecose.vocali=vocali;
    return diversecose;
}
int main(){
    string parola;
    vocaboli a;
    cout<<"dammi parola o frase ";
    getline(cin,parola);
    a=checkparola(parola);
    cout<<a;


    

}