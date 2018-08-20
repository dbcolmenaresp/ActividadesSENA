/*

Este es un programa que solicita al usuario el ingreso por teclado de un numero y muestra 
como resultado en pantalla la tabla de multiplicar de dicho numero ingresado.

Programa realizado por Ing. Danny Colmenares
@dbcolmenaresp
https://www.github.org/dbcolmenaresp
*/

/*
Directiva de preprocesador que permite usar la biblioteca de funciones 
de entrada salida del lenguaje C++.
*/

#include <iostream>

using namespace std;

//Inicio de la funcion principal
int main()

{


    int entero;

//Se muestra en pantalla el mensaje indicado

    cout << "\nIndique un numero entero al que se le mostrara la tabla de multiplicar\n" << endl;

//Se recibe el primer operando desde el teclado y se almacena en la variable a

    cin >> entero;

//Se muestra la tabla de multiplicar del numero ingresado por pantalla

    cout << "\nTabla de multiplicar de %d: \n" << entero << endl;

/*
Se ejecuta un ciclo desde el numero 1 hasta el numero 10 y se multiplica sucesivamente el entero ingresado por teclado
por cada valor del ciclo.
*/

    for (int i = 1; i <= 10; i++){

        cout << i << " X " << entero << " = " << i * entero <<"\n" << endl;

    }

    system("pause");

    return 0;

}