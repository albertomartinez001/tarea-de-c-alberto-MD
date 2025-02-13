#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int main()
    {
    int numero=4;
    cout<< "TABLA DEL 4" <<endl;
    for(int i=1;i<=10; i++) {
        int resultado=i*numero;
        cout<< i << "x"<< numero<<"=";
        cout<<resultado <<endl;
    }
    cout<<"------------------------------------"<<endl;

    cout<< "TABLA DEL 6" <<endl;

    int numero2=6;
    for(int i=1;i<=10; i++) {
        int resultado2=i*numero2;
        cout<< i << "x"<< numero2<<"=";
        cout<<resultado2 <<endl;
    }
    cout<<"------------------------------------"<<endl;

    cout<< "NUMERO A FACTORIAL" <<endl;

    int numero3;
    long long factorial = 1;


    cout << "Ingrese un numero : ";
    cin >> numero3;


    if (numero3 < 0) {
        cout << "SOLO NUMEROS POSITIVOS!!!" << endl;
    } else {

        for (int i = 1; i <= numero3; ++i) {
            factorial *= i;
        }


        cout << "El factorial de " << numero3 << " es " << factorial << endl;
    }

    cout<< "SERIE DE FIBONACCI" <<endl;

    int n, t1 = 0, t2 = 1, siguienteTermino = 0;

    cout << "Ingrese el numero de terminos de la serie de Fibonacci: ";
    cin >> n;

    cout<<"------------------------------------"<<endl;

    cout << "Serie de Fibonacci: ";

    for (int i = 1; i <= n; ++i) {

        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        siguienteTermino = t1 + t2;
        t1 = t2;
        t2 = siguienteTermino;

        cout << siguienteTermino << ", ";
    }

    cout<<"------------------------------------"<<endl;

    cout << "Saber si un numero es primo o no" <<endl;


    int numero4;
    cin >> numero4;

    bool esPrimo = true;


    if (numero4 <= 1) {
        esPrimo = false;
    }
    else {

        for (int valor = 2; valor <= sqrt(numero4); valor++) {
            if (numero4 % valor == 0) {
                esPrimo = false;
                break; 
            }
        }
    }


    if (esPrimo) {
        cout << "El numero ingresado es primo" << endl;
    }
    else {
        cout << "EL NUMERO INGRESADO NO ES PRIMO" << endl;
    }

    cout<<"------------------------------------"<<endl;

    cout << "Saber si un numero es PAR O NO" <<endl;

    int numero5;

    cout << "Ingrese un numero entero: ";
    cin >> numero5;

    bool esPar = (numero5 % 2 == 0);

    if (esPar) {
        cout << "El numero " << numero5 << " es PAR." << endl;
    } else {
        cout << "El numero " << numero5 << " es IMPAR." << endl;
    }

    cout<<"------------------------------------"<<endl;

    cout << "tabla de multiplicar indicada por usuario" <<endl;

    int numero6;

    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> numero6;

    
    cout << "Tabla de multiplicar del " << numero6 << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero6 << " x " << i << " = " << (numero6 * i) << endl;
    }

    return 0;
    }
