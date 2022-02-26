using namespace std;
#include "iostream"
#include "string"
// Densell Andres Guevara Morales 9090-20-11193

using namespace std;

int main()

{

    float num1, num2;
    int opc;

    cout << "Bienvenido" << "\n";
    cout << "A continuacion se le pedira que escoga una funcion para poder ejecutar el programa" << "\n";



    printf ("         					  	\n");
    printf ("        1)- Suma. 		  		\n");
    printf ("        2)- Resta.		  		\n");
    printf ("        3)- Multiplicacion.	\n");
    printf ("        4)- Division.			\n");
    printf ("        5)- Salir              \n");


    printf ( "Porfavor eliga una operacion de la calculadora \n");
    cin >> ( opc);

    switch (opc) {

        case 1:

            printf("Ingrese el primer numero:");
            cin >> (num1);
            printf("Ingrese el segundo numero: ");
            cin >> (num2);

            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;


    }

    return 0;
}
