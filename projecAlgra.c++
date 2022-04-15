#include <iostream>
using namespace std;
int main () {
    char nombres[50];
    int numeroList;
    int numeroListInterna;
    int ingresaCantidadNumero;
    float suma, resta, multiplicacion, division;
    float resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision;

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
        cout << endl << "ESCOGISTE HACER SUMA - RESTA - MULTIPLIZACIÓN - DIVISION." << endl;
        cout << "1. SUMA" <<endl;
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
                cout << "Cuantos digitos quieres sumar: ";
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
                cout << "ESCOGISTE LA RESTA";
                break;

            case 3:
                cout << "ESCOGISTE LA MULTIPLICACIÓN";
                break;

            case 4:
                cout << "ESCOGISTE LA DIVISIÓN";
                break;
            
            default:
                break;
            }
        
        break;
    
    default:
        break;
    }
    return 0;
}