#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
 b+=a;
    return b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{

    a=a-b;
    return a;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    b=b*a;
    return b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    a=a/b;
    return a;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if((a/b)>1){
    return a;
    }else{
    return b;
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if((a/b)>1){
    return b;
    }else{
    return a;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
     if(a>b){
     if(a>c){
     return a;

    }else{
        return c;
    }
}
if(b>a){
     if(b>c){
     return b;

    }
    if (a=b ){
         if (a>c ){
             return a;
         }
        return c;
    }

}


}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]= valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int a = arreglo[0];
    for(int i=0;  i<tamano; i++){
        if(a<arreglo[i]){
            a=arreglo[i];
        }
    }
    return a;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
     int a = arreglo[0];
    for(int i=0;  i<tamano; i++){
        if(a>arreglo[i]){
            a=arreglo[i];
        }
    }
    return a;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int a=0;
    for(int i=0;  i<tamano; i++){

        a=a+arreglo[i];
    }
    a=a/tamano;
    return a;
   //
    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
