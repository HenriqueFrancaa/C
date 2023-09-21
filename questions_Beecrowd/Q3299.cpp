#include <iostream>
#include <string>
using namespace std;


int main(){
    string n;
    int cont = 0;

    cin >> n;

    for(int i = 0; i < n.size()-1; i++){
        if(n[i] == '1' && n[i+1] == '3'){
            cont++;
            break;
        }
    }

    if(cont != 0){
        cout << n << " es de Mala Suerte" << endl;
    }

    else{
        cout << n << " NO es de Mala Suerte" << endl;
    }

    return 0;
}