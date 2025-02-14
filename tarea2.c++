#include <iostream>
#include<string>
using namespace std;

int main(){
int edad;
cout<<"ESCRIBA SU EDAD"<<endl;
    cin>>edad;

    if(edad<=0) {
        cout<<"escoja un numero valido para la comprobacion!";
        exit(0);
    }
    if(edad>=18) {
        cout<<"ERES MAYOR DE EDAD"<<endl;
    }else {
        cout<<"NO ERES MAYOR DE EDAD "<<endl;
    }


    cout<<"CUAL ES EL NUMERO MAYOR"<<endl;
    int num1;
    int num2;
    cout<<"ESCRIBA DOS NUMEROS PARA SABER CUAL ES EL MAYOR"<<endl;
    cin>>num1;
    cin>>num2;


    if (num1==num2) {
        cout<<"AMBOS NUMEROS SON IGUALES!"<<endl;
    }else if (num1>num2) {
        cout<<"el numero: "<<num1 <<" es mayor que el numero:"<<num2<<endl;
    }else {
        cout<<"el numero: "<<num2 <<" es mayor que el numero:"<<num1<<endl;
    }


cout<<"SABER SI UN NUMERO ES PAR O IMPAR"<<endl;

    int numero1;
    int residuo;
    cout<<"INGRESE UN NUMERO PARA SABER SI ES PAR O IMPAR"<<endl;
    cin>>numero1;
    residuo=numero1%2;
    if (residuo==1) {
        cout<<"el numero que ha ingresado es IMPAR"<<endl;
    }else if (residuo==0) {
        cout<<"El numero ingresado es PAR"<<endl;
    }



cout<<"FACTORIAL DE UN NUMERO INGRESADO"<<endl;
    
    int numero2;
    int factorial= 1;

    cout<<"INGRESAR UN NUMERO PARA CALCULAR SU FACTORIAL"<<endl;
    cin>>numero2;

    int i=1;

    while (i<=numero2) {
    factorial*=i;
        i++;
    }
    cout << "El factorial de " << numero2 << " es: " << factorial << endl;


    cout<<"NUMEROS IMPARES DEL 1 HASTA EL 30 (con bucle for)"<<endl;

    int numero3;
    cout<<"INGRESE UN NUMERO MAYOR A 10 Y QUE SEA MENOR QUE 30"<<endl;
    cin>>numero3;
    if(numero3<10 or numero3>30) {
        cout<<"ESTE DATO ES INVALIDO, PORFAVOR INGRESE OTRO"<<endl;
    }else if (numero3>=10 and numero3<=30) {
        int residual= numero3%2;
        if (residual==1) {
            for (int i=1; i<=numero3; i+=2) {
                cout<<i<<endl;
            }
        }else if (residual==0) {
            for (int i=1; i<=numero3; i+=2) {
                cout<<i<<endl;
            }
        }
    }

    cout<<"NUMEROS IMPARES DEL 1 HASTA EL 30 (con bucle while)"<<endl;
    
    int dato;
    cout << "Ingrese un numero mayor que 10 y menor que 30: ";
    cin >> dato;
    if (dato <= 10 || dato >= 30) {
        cout << "El numero ingresado no esta en el rango valido." << endl;
    } else {
        cout << "Numeros impares desde 1 hasta " << dato << ":" << endl;
        int i = 1;
        while (i <= dato) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i++;
        }
        cout << endl;
    }


    cout<<"DIA DE LA SEMANA DEL 1 AL 5"<<endl;

    int dia;
    cout<<"INGRESE UN NUMERO PARA SABER EL DIA DE LA SEMANA!"<<endl;
    cin>>dia;
    switch (dia) {
        case 1:
            cout<<"DIA LUNES"<<endl;
        break;
        case 2: cout<<"DIA MARTES"<<endl;
        break;
        case 3:cout<<"DIA MIERCOLES"<<endl;
        break;
        case 4: cout<<"DIA JUEVES"<<endl;
        break;
        case 5: cout<<"DIA VIERNES"<<endl;
        break;
        default:cout<<"ESE DIA NO PERTENECE AL ORDEN DE LA SEMANA"<<endl;
    }






    int opcion;
    cout << "Opciones disponibles:" << endl;
    cout << "1. Programa de edad" << endl;
    cout << "2. Programa determinar numero mayor" << endl;
    cout << "3. Programa determinar numero par o impar" << endl;
    cout << "4. Programa determinar el factorial de un numero" << endl;
    cout << "5. Programa mostrar numeros impares del 1 hasta un rango indicado" << endl;
    cout << "6. Programa mostrar numeros impares del 1 hasta un rango indicado (bucle while)" << endl;
    cout << "7. Programa determinar el dia de la semana" << endl;
    cout << "Ingrese un numero para realizar uno de los programas anteriores: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            int edad;
            cout << "Escriba su edad: ";
            cin >> edad;

            if (edad <= 0) {
                cout << "Escoja un numero valido para la comprobacion!" << endl;
            } else if (edad >= 18) {
                cout << "ERES MAYOR DE EDAD" << endl;
            } else {
                cout << "NO ERES MAYOR DE EDAD" << endl;
            }
            break;
        }

        case 2: {
            int num1, num2;
            cout << "Escriba dos numeros para saber cual es el mayor: ";
            cin >> num1 >> num2;

            if (num1 == num2) {
                cout << "AMBOS NUMEROS SON IGUALES" << endl;
            } else if (num1 > num2) {
                cout << "El numero " << num1 << " es mayor que el numero " << num2 << endl;
            } else {
                cout << "El numero " << num2 << " es mayor que el numero " << num1 << endl;
            }
            break;
        }

        case 3: {
            int numero1;
            cout << "Ingrese un numero para saber si es par o impar: ";
            cin >> numero1;

            if (numero1 % 2 == 0) {
                cout << "El numero ingresado es PAR" << endl;
            } else {
                cout << "El numero ingresado es IMPAR" << endl;
            }
            break;
        }

        case 4: {
            int numero2;
            int factorial = 1;

            cout << "Ingrese un numero para calcular su factorial: ";
            cin >> numero2;

            for (int i = 1; i <= numero2; i++) {
                factorial *= i;
            }
            cout << "El factorial de " << numero2 << " es: " << factorial << endl;
            break;
        }

        case 5: {
            int numero3;
            cout << "Ingrese un numero mayor a 10 y menor que 30: ";
            cin >> numero3;

            if (numero3 < 10 || numero3 > 30) {
                cout << "Este dato es invalido. Por favor, ingrese otro." << endl;
            } else {
                cout << "Numeros impares desde 1 hasta " << numero3 << ":" << endl;
                for (int i = 1; i <= numero3; i += 2) {
                    cout << i << endl;
                }
            }
            break;
        }

        case 6: {
            int dato;
            cout << "Ingrese un numero mayor que 10 y menor que 30: ";
            cin >> dato;

            if (dato <= 10 || dato >= 30) {
                cout << "El numero ingresado no esta en el rango valido." << endl;
            } else {
                cout << "Numeros impares desde 1 hasta " << dato << ":" << endl;
                int i = 1;
                while (i <= dato) {
                    if (i % 2 != 0) {
                        cout << i << " ";
                    }
                    i++;
                }
                cout << endl;
            }
            break;
        }

        case 7: {
            int dia;
            cout << "Ingrese un numero para saber el dia de la semana: ";
            cin >> dia;

            switch (dia) {
                case 1: cout << "DIA LUNES" << endl; break;
                case 2: cout << "DIA MARTES" << endl; break;
                case 3: cout << "DIA MIERCOLES" << endl; break;
                case 4: cout << "DIA JUEVES" << endl; break;
                case 5: cout << "DIA VIERNES" << endl; break;
                default: cout << "ESE DIA NO PERTENECE AL ORDEN DE LA SEMANA" << endl;
            }
            break;
        }

        default: {
            cout << "Opcion ingresada no registrada. Intente de nuevo." << endl;
            break;
        }
    }



    return 0;

}