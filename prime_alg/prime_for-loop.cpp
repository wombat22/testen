#include <iostream>



using namespace std;

bool prime(int a){
    //Einfacher Primzahltest
    if(a < 2) return false;
    
    for(int n = 2; n < a; n++){
   
    if((a % n) == 0){
        return false;
    }
    }
    return true;
}



int main(){
    cout<< prime(15);
}



