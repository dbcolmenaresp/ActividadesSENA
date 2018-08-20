/*
Programa que realiza el calculo de la ubicacion de un individuo en grupos de edad
Se tienen como datos la edad de niño
Programa para cumplir con la actividad 3 del curso de Conceptualizacion del lenguaje C++ del SENA.

Programa realizado por Ing. Danny Colmenares
@dbcolmenaresp
https://www.github.org/dbcolmenaresp
*/

#include <iostream>

using namespace std;

//Esta es la funcion principal del programa donde comienza la ejecucion del mismo

int main()

{

//Se define una variable para almacenar el valor de la edad del niño 

    int edad;

//Se muestra en pantalla el mensaje del funcionamiento del programa

    cout << "\nPrograma para ubicar el niño en el grupo en funcon del valor de la edad\n" << endl;


//Se recibe el valor de la edad del niño desde el teclado

    cout << "\nIngrese el valor de la edad del niño. El valor de edad correcto debe estar comprendido entre 0 y 18 años\n" << endl;

    cin >> edad;

    cout << "\nLa edad indicada es: " << edad << endl;


//Se determina la pertenencia del niño a un grupo dependiendo de la edad indicada

    if(edad <= 6){

        cout << "\nEl niño pertenece al grupo de la primera infancia" << endl;

    }else if(edad <= 12){

        cout << "\nEl niño pertenece al grupo de la segunda infancia" << endl;

    }else if(edad <= 18){

        cout << "\nEl niño pertenece al grupo de los adolescentes" << endl;

    }else
        cout << "\nPertenece a un grupo de edades diferente" << endl;


    system("pause");

    return 0;

}