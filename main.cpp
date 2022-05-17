#include <iostream>
using namespace std;

void descuento();
double compra, precio;

int main() {

    descuento();

    return 0;
}

void descuento(){
    cout<<"Ingresar el total de la compra: "<<endl;cin>>compra;
    if(compra > 10000){
        precio = compra - (compra * 0.25);
    }
    else if(compra <= 10000)
        precio = compra - (compra * 0.10);

    cout<<"El total a pagar es: "<<precio <<endl;
}