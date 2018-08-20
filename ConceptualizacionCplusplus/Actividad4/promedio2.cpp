/*

Este es un programa que solicita el numero de notas a ingresar y calcula el valor promedio
Las notas deben estar comprendidas entre 0.0 y 5.0

Programa realizado por Ing. Danny Colmenares
@dbcolmenaresp
https://www.github.org/dbcolmenaresp
*/

#include <iostream>

using namespace std;

//Inicio de la funcion principal
int main()

{

    int i, numero_notas;

    float nota, suma, promedio;

    cout << "\nIngrese el numero de notas a procesar.\nRecuerde que las notas deben estar comprendidas entre 0.0 y 5.0\n" << endl;

    cin >> numero_notas;

    i = 1;

    suma=0;

    while(i <= numero_notas){

        cout << "\nIngrese una nueva nota\n" << endl;

        cin >> nota;

        suma = suma + nota;

        i++;

    }

    promedio = suma / numero_notas;

    cout << "\nEl valor promedio de las notas ingresadas es: \n" << promedio << endl;

    system("pause");

    return 0;

}