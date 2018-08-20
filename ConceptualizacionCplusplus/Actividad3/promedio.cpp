/*

Este es un programa que solicita las cuatro notas y calcula el valor promedio
Las notas entre 3.5 y 5.0 son aprobadas
Las notas entre 3.0 y 3.5 son reprobadas pero tienen una oportunidad
Las notas por debajo de 3.0 son no aprobadas.

Programa realizado por Ing. Danny Colmenares
@dbcolmenaresp
https://www.github.org/dbcolmenaresp
*/

#include <iostream>

using namespace std;

//Inicio de la funcion principal
int main()

{

    cout << "\nIngrese los cuatro valores de las notas\nRecuerde que las notas deben estar comprendidas entre 0.0 y 5.0\n" << endl;

    float nota, suma, promedio;

    suma = 0;

    for (int i = 1; i <= 4; i++){

        cin >> nota;

        suma = suma + nota;

    }

    promedio = suma / 4;


//Se determina el resultado de la calificacion

    if(promedio <= 3.0){

        cout << "\nEl estudiante no esta aprobado" << endl;

    }else if(promedio > 3.0 && promedio <= 3.5){

        cout << "\nEl estudiante no tiene la nota aprobada pero tiene la oportunidad de recuperar" << endl;

    }else if(promedio > 3.5){

        cout << "\nEl estudiante esta aprobado" << endl;

    }else
        cout << "\nRevise si los datos estan correctos" << endl;

    cout << "\nDanny Colmenares" << endl;

    system("pause");

    return 0;
}