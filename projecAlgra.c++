#include <iostream>
#include <math.h>
using namespace std;
int main () {
    char nombres[50];
    int numeroList;
    int numeroListInterna, multiplicaciónEspecifica;
    int ingresaCantidadNumero;
    float suma, resta, multiplicacion, division, longitud, baseUno, baseDos, altura, raizCuadrada, primerLado, segundoLado, tercerLado;
    float primerNumero, segundoNumero, tablaMultiplicacion;
    float resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision, resultadoTrapecio, resultadoSemiperimetro,  media, resultadoFormulaHeron, resultadoRaizCuadrada;
    const float PI = 3.14159;
    

    cout << "INGRESA TUS NOMBRES: ";
    cin.getline(nombres,50);
    cout << endl << "BIENVENIDO " << nombres << endl << endl;

    cout << "1. SUMA - RESTA - MULTIPLIZACIÓN - DIVISION." << endl;
    cout << "2. CALCULA LAS LONGITUDES DE UNA CIRCUNFERENCIA." << endl;
    cout << "3. CALCULE LA MEDIA DE VARIOS NÚMEROS CUALQUIERA." << endl;
    cout << "4. CALCULE LAS ÁREAS DEL TRAPECIO." << endl;
    cout << "5. CALCULE LA RAIZ CUADRADA." << endl;
    cout << "6. CALCULE EL AREA DE UN TRIANGULO (FORMULA DE HERON)." << endl;
    cout << "7. CALCULE EL CAPITAL FINAL DE UN INTERES SIMPLE." << endl;
    cout << "8. CALCULE EL RESTO DE CUALQUIER DIVISIÓN ENTERA." << endl;
    cout << "9. CALCULE EL PRECIO DE UN OBJETO SIN EL IMPUESTO DE VALOR AÑADIDO." << endl;
    cout << "10. CALCULE EL AREA DE UN TRIANGULO." << endl;
    cout << "11. QUE NÚMERO ES MAYOR DE LOS DOS NUMEROS INGRESADOS." << endl;
    cout << "12. EN QUE TEMPERATURA ESTA EL DIA." << endl;
    cout << "13. ECUACIONES DE SEGUNDO GRADO." << endl;
    cout << "14. EN QUE MES ESTAMOS." << endl;
    cout << "15. CAJERO AUTOMATICO." << endl;
    cout << "16. MOSTRAR LOS N NÚMEROS NATURALES." << endl;
    cout << "17. MOSTRAR LOS NÚMEROS PARES HASTA N." << endl;
    cout << "18. MOSTRAR LOS MULTIPLOS DE N." << endl;
    cout << "19. MUESTRE LA CUETA EN RETROCESO DESDE N." << endl;
    cout << "20. MUESTRE EL NÚMERO SI ES PAR O IMPAR." << endl;
    cout << "21. MUESTRE LOS DIVISORES." << endl;

    cout << "QUE OPERACIÓN VAS A REALIZAR, ESCOGE EL NÚMERO: ";
    cin >> numeroList;

    switch (numeroList)
    {
    case 1:
        cout << endl << "******************************************************************" << endl;
        cout << "**** ESCOGISTE HACER SUMA - RESTA - MULTIPLIZACIÓN - DIVISION ****" << endl;
        cout << "******************************************************************" << endl;
        cout << endl << "1. SUMA" <<endl;
        cout << "2. RESTA" <<endl;
        cout << "3. MULTIPLICACIÓM" <<endl;
        cout << "4. DIVISIÓN" <<endl;
        cout << "QUE DESEAS HACER ESCOGE EL NÚMERO: ";
        cin >> numeroListInterna;

            switch (numeroListInterna)
            {
            case 1:
                cout << endl << "****************************" << endl;
                cout << "**** ESCOGISTE LA SUMA *****" << endl;
                cout << "****************************" << endl;
                cout << endl << "Cuantos digitos quieres sumar: ";
                cin >> ingresaCantidadNumero;
                    for (int i = 1; i <= ingresaCantidadNumero; i++)
                    {
                        cout << "Ingresa el " << i << " número: ";
                        cin >> suma;
                        resultadoSuma = resultadoSuma + suma;               
                    }
                    cout << "La suma de los " << ingresaCantidadNumero << " números es: " << resultadoSuma;
                break;

            case 2:
                cout << endl << "****************************" << endl;
                cout << "**** ESCOGISTE LA RESTA ****" << endl;
                cout << "****************************" << endl;
                cout << endl << "Ingresa el primer número para restar: ";
                cin >> primerNumero;
                cout << "Ingresa el segundo número para restar: ";
                cin >> segundoNumero;
                resta = primerNumero - segundoNumero;
                cout << "La resta de " << primerNumero << " - " << segundoNumero << " es: " << resta;
                break;

            case 3:
                cout << endl << "*************************************" << endl;
                cout << "**** ESCOGISTE LA MULTIPLICACIÓN ****" << endl;
                cout << "*************************************" << endl;
                cout << endl << "DESEAS HACER MULTIPLICAR 2 NÚMEROS O DESEAS SACAR LA TABLA DE UN NÚMERO ESPECIFICO" <<endl;
                cout << endl << "1. MULTIPLICACIÓN SIMPLE." << endl;
                cout << "2. TABLA DE MULTIPLICACIÓN DE ?" << endl;
                cout << "QUE DESEAS HACER ESCOGE EL NÚMERO: ";
                cin >> multiplicaciónEspecifica;

                    switch (multiplicaciónEspecifica)
                    {
                    case 1:
                        cout << endl << "*****************************************" << endl;
                        cout << "***** LEGISTE MULTIPLICACIÓN SIMPLE *****" << endl;
                        cout << "*****************************************" << endl;
                        cout << "Ingresa el primer número: ";
                        cin >> primerNumero;
                        cout << "Ingresa el segundo número: ";
                        cin >> segundoNumero;
                        multiplicacion = primerNumero * segundoNumero;
                        cout << "La multiplicación de " << primerNumero << " x " << segundoNumero << " es: " << multiplicacion;
                        break;

                    case 2:
                        cout << endl << "**********************************************" << endl;
                        cout << "***** ELEGISTE TABLA DE MULTIPLICAR DE ? *****" << endl;
                        cout << "**********************************************" << endl;
                        cout << endl << "QUE TABLA DE MULTIPLICACION QUIERES REALIZA: ";
                        cin >> tablaMultiplicacion;
                        cout << "HASTA QUE NÚMERO QUIERES QUE SE MULTIPLIQUE: ";
                        cin >> ingresaCantidadNumero;
                        cout << endl << "ELEGISTE LA TABLA DE MULTIPLICAR NÚMERO " << tablaMultiplicacion << endl;
                            for (int i = 1; i <= ingresaCantidadNumero; i++)
                            {
                                multiplicacion = tablaMultiplicacion * i;
                                cout << i << " x " << tablaMultiplicacion << " = " << multiplicacion << endl;
                            }
                        break;
                    
                    default:
                        break;
                    }
                break;

            case 4:
                cout << endl << "*************************************" << endl;
                cout << "******* ESCOGISTE LA DIVISIÓN *******" << endl;
                cout << "*************************************" << endl;
                cout << "Ingresa el primer número: ";
                cin >> primerNumero;
                cout << "Ingresa el segundo numero: ";
                cin >> segundoNumero;

                division = primerNumero / segundoNumero;
                cout << "La división de " << primerNumero << " / " << segundoNumero << " es: " << division;
                break;
            
            default:
                break;
            }
        break;

    
    case 2:
        cout << endl << "******************************************************************" << endl;
        cout << "**** ESCOGISTE CALCULAR LAS LONGITUDES DE UNA CIRCUNFERENCIA *****" << endl;
        cout << "******************************************************************" << endl;
        cout << "Ingrese la longitud de una circunferencia: ";
        cin >> primerNumero;
        longitud = 2 * PI * primerNumero;
        cout << "La longitud de la circunferencia es de: " << longitud;

        break;
    
    case 3:
        cout << endl << "*******************************************************************" << endl;
        cout << "***** ELEGISTE CALCULAR LA MEDIA DE VARIOS NÚMEROS CUALQUIERA *****" << endl;
        cout << "*******************************************************************" << endl;
        cout << "INGRESE LA CANTIDAD DE NÚMEROS QUE VAS A INGRESAR: ";
        cin >> ingresaCantidadNumero;

            for (int i = 1; i <= ingresaCantidadNumero; i++)
            {
                cout << "Ingrese el " << i << " número: ";
                cin >> suma;
                resultadoSuma = resultadoSuma + suma;
            }
            cout << "La suma de los " << ingresaCantidadNumero << " números es: " << resultadoSuma << endl;
            media = resultadoSuma / ingresaCantidadNumero;
            cout << "La media de " << resultadoSuma << " es: " << media;
            
        break;

    case 4:
        cout << endl << "************************************************************" << endl;
        cout << "********* ELEGISTE CALCULAR EL ÁREA DE UN TRAPECIO *********" << endl;
        cout << "************************************************************" << endl;
        cout << endl << "INGRESA LA PRIMERA BASE: ";
        cin >> baseUno;
        cout << "INGRESA LA SEGUNDA BASE: ";
        cin >> baseDos;
        cout << "INGRESA LA ALTURA: ";
        cin >> altura;
        resultadoTrapecio = ((baseUno + baseDos) * altura) / 2;
        cout << "El area del trapecio es: " << resultadoTrapecio << " m2";

        break;

    case 5:
        cout << endl << "*****************************************************" << endl;
        cout << "*******  ELEGISTE CALCULAR LA RAIZ CUADRADA  ********" << endl;
        cout << "*****************************************************" << endl;
        cout << endl << "INGRESE UN NÚMERO PARA SACAR LA RAIZ CUADRADA: ";
        cin >> raizCuadrada;
        resultadoRaizCuadrada = sqrt(raizCuadrada);
        cout << "La raiz cuadrada de " << raizCuadrada << " es: " << resultadoRaizCuadrada;

        break;

    case 6:
        cout << endl << "*******************************************************************************" << endl;
        cout << "******  ELEGISTE CALCULAR EL AREA DE UN TRIANGULO (FORMULA DE HERON)   ********" << endl;
        cout << "*******************************************************************************" << endl;
        cout << "INGRESA PRIMER LADO: ";
        cin >> primerLado;
        cout << "INGRESA SEGUNDO LADO: "; 
        cin >> segundoLado;
        cout << "INGRESA TERCER LADO: "; 
        cin >> tercerLado;
        resultadoSemiperimetro = (primerLado + segundoLado + tercerLado) / 2;
        cout << "Resultado del semiperímetro es: " << resultadoSemiperimetro << " cm" << endl;
        /* -----********---------************* ojo
        resultadoFormulaHeron = sqrt((resultadoSemiperimetro) (resultadoSemiperimetro - primerLado) (resultadoSemiperimetro - segundoLado) (resultadoSemiperimetro - tercerLado));
        cout << "El área de un triangulo es: ";       
        */

        break;

    case 7:
        break;

    case 8:
        break;

    case 9:
        break;

    case 10:
        break;

    case 11:
        break;

    case 12:
        break;

    case 13:
        break;

    case 14:
        break;

    case 15:
        break;

    case 16:
        break;

    case 17:
        break;

    case 18:
        break;

    case 19:
        break;

    case 20:
        break;

    case 21:
        break;



    default:
        break;

    
    }
    return 0;
}