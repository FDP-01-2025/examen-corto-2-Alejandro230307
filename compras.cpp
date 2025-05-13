#include <iostream>
using namespace std;
int main( void ){
    int edad, talla, prenda;
    string genero;

    cout <<"Coloque cual es su edad \n";
    cin >> edad;
    if(edad <= 10){
        cout <<"Su talla recomendada es talla 8 \n";
    }
    else if ( edad >= 11 && edad <= 15 ){
        cout <<"Su talla recomendad es talla 12 \n ";
    }
    else if ( edad >= 16 && edad <= 60 ){
        cout <<"Su talla recomendad es talla 16\n ";
    }
    else {
        cout <<"Su talla recomendad es talla 18\n ";
    }


    cout <<"Ropa de que genero desea comprar? \n";
    cout <<"Masculino\n";
    cout <<"Femenino \n";
    cout <<"Ambos \n"
    cin >> genero;
    if (genero == Masculino ){
        cout <<"Que prenda desea comprar?\n";
        cout <<"1- Camisa Casual: $90 (descuento del 30%).\n";
        cout <<"2- Pantalón Formal: $130 (descuento del 30%).\n";
        cout <<"3- Chaqueta Premium: $900 (descuento del 30%).\n";
        cin >> prenda;

        switch ( prenda)
        case 1:
        cout <<"El precio de la camisa casual es de $63\n";
        cout <<"Compra exitosa! Tu saldo restante es de $237 \n";
        break;
        case 2:
        cout <<"Pantalón Formal es de $91\n";
        cout <<"Compra exitosa! Tu saldo restante es de $209 \n";
        break;
        case 3:
        cout <<"Pantalón Formal es de $603\n";
        cout <<"Compra Fallida! Saldo insuficiente \n";
        break;
        default: 
        cout <<"Opcion invalida, vuelve a intentarlo \n";
    
    }
    if (genero == Femenino ){
        cout <<"Que prenda desea comprar?\n";
        cout <<"1- Blusa Moderna: $80 (descuento del 20%).\n";
        cout <<"2-  Falda Elegante: $110 (descuento del 20%).\n";
        cout <<"3-  Abrigo Premium: $250 (descuento del 20%).\n";
        cin >> prenda;

        switch ( prenda )
        case 1:
        cout <<"El precio de la camisa casual es de $64\n";
        cout <<"Compra exitosa! Tu saldo restante es de $236 \n";
        break;
        case 2:
        cout <<"Pantalón Formal es de $88\n";
        cout <<"Compra exitosa! Tu saldo restante es de $212 \n";
        break;
        case 3:
        cout <<"Pantalón Formal es de $200\n";
        cout <<"Compra exitosa! Tu saldo restante es de $100  \n";
        break;
        default: 
        cout <<"Opcion invalida, vuelve a intentarlo \n";
    
    }
    if (genero == Ambos){
        cout <<"Que prenda desea comprar?\n";
        cout <<"1- Camisa Casual: $90 (descuento del 30%).\n";
        cout <<"2- Pantalón Formal: $130 (descuento del 30%).\n";
        cout <<"3- Chaqueta Premium: $900 (descuento del 30%).\n";
        cout <<"4- Blusa Moderna: $80 (descuento del 20%).\n";
        cout <<"5-  Falda Elegante: $110 (descuento del 20%).\n";
        cout <<"6-  Abrigo Premium: $250 (descuento del 20%).\n";

        cin >> prenda;

        switch ( prenda )
        case 1:
        cout <<"El precio de la camisa casual es de $64\n";
        cout <<"Compra exitosa! Tu saldo restante es de $236 \n";
        break;
        case 2:
        cout <<"Pantalón Formal es de $88\n";
        cout <<"Compra exitosa! Tu saldo restante es de $212 \n";
        break;
        case 3:
        cout <<"Pantalón Formal es de $200\n";
        cout <<"Compra exitosa! Tu saldo restante es de $100  \n";
        break;
        default: 
        cout <<"Opcion invalida, vuelve a intentarlo \n";
        case 4:
        cout <<"El precio de la camisa casual es de $63\n";
        cout <<"Compra exitosa! Tu saldo restante es de $237 \n";
        break;
        case 5:
        cout <<"Pantalón Formal es de $91\n";
        cout <<"Compra exitosa! Tu saldo restante es de $209 \n";
        break;
        case 6:
        cout <<"Pantalón Formal es de $603\n";
        cout <<"Compra Fallida! Saldo insuficiente \n";
        break;
        default: 
        cout <<"Opcion invalida, vuelve a intentarlo \n";
    
    }





    return 0;
}