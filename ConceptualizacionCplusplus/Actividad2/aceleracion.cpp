/*
Programa que realiza el calculo de la aceleracion de un vehiculo
Se tienen como datos la velocidad inicial, la velocidad final y el tiempo de medida de la velocidad
Programa para cumplir con la actividad 2 del curso de Conceptualizacion del lenguaje C++ del SENA.

Programa realizado por Ing. Danny Colmenares
@dbcolmenaresp
https://www.github.org/dbcolmenaresp
*/

#include <iostream>

using namespace std;

//Esta es la funcion principal del programa donde comienza la ejecucion del mismo

int main()

{

/*
Se definen dos variables para almacenar valores de tipo real donde se guardan 
los valores de la velocidad inicial, velocidad final y tiempo de medida de las velocidades.
*/

    double velocidad_inicial, velocidad_final, tiempo, aceleracion;

//Se muestra en pantalla el mensaje indicado

    cout << "\nPrograma para calcular el valor de la aceleracion de un vehiculo\n" << endl;


//Se recibe el valor de la velocidad inicial desde el teclado

    cout << "\nIngresa el valor de la velocidad inicial\n" << endl;

    cin >> velocidad_inicial;

//Se recibe el valor de la velocidad final desde el teclado

    cout << "\nIngresa el valor de la velocidad final\n" << endl;

    cin >> velocidad_final;

//Se recibe el valor del tiempo de medicion desde el teclado

    cout << "\nIngresa el valor del tiempo de medicion\n" << endl;

    cin >> tiempo;


    aceleracion = (velocidad_final - velocidad_inicial) / tiempo;

//Se muestra en pantalla el resultado del valor de la aceleracion

    cout << "\nLa aceleracion del vehiculo es: " << aceleracion << endl;

    system("pause");

    return 0;

}