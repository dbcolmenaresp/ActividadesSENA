//este es un ejemplo de comentario

/*

este es otro ejemplo de comentario


*/

/*
Directiva de preprocesador que permite usar la biblioteca de funciones 
de entrada salida del lenguaje C++.

En este punto se incluye el contenido del archivo indicado por la directiva
para poder usarse en el programa.

Esta libreria brinda las funciones necesarias para mostrar informacion y 
recibirla a traves de los flujos de entrada y salida, por defecto el monitor y el teclado.
*/

#include <iostream>

//Con el uso de la siguiente sentencia se le indica al compilador que use el espacio de nombres std

using namespace std;

//Esta es la funcion principal del programa donde comienza la ejecucion del mismo

int main()

{

/*
Se definen dos variables para almacenar valores de tipo entero donde se guardan 
los operandos que van a ser usados en las operaciones dureante la ejecucion del programa.

El tipo de dato entero es el que permite almacenar valores numericos sin parte decimal.
*/

    int a,b;

//Se muestra en pantalla el mensaje indicado

    cout << "Ingresa el primer numero\n" << endl;

//Se recibe el primer operando desde el teclado y se almacena en la variable a

    cin >> a;

//Se muestra en pantalla el mensaje indicado

    cout << "Ingresa el segundo numero\n" << endl;

//Se recibe el segundo operanto desde el teclado y se almacena en la variable b

    cin >> b;


//Se muestra en pantalla el resultado de la primera operacion aritmetica, la suma de los operandos

    cout << "\nLa suma de los numeros es: \n" << a + b << endl;

//Se muestra en pantalla el resultado de la primera operacion aritmetica, la resta de los operandos

    cout << "La resta de los numeros es: \n" << a - b << endl;

//Se muestra en pantalla el resultado de la primera operacion aritmetica, la multiplicacion de los operandos

    cout << "La multiplicacion de los numeros es: \n" << a * b << endl;

//Se muestra en pantalla el resultado de la primera operacion aritmetica, la division de los operandos

    cout << "La division de los numeros es: \n" << a / b << endl;

//Se muestra en pantalla el resultado de la primera operacion aritmetica, el modulo de los operandos

    cout << "El residuo es: \n" << a % b << endl;



    system("pause");

    return EXIT_SUCCESS;

}