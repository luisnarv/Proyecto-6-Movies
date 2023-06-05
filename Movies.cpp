#include <iostream>
#include <vector>

using namespace std;

int mostrarMenu()
{
    int opcion;

    cout <<endl<< "               ========================" << endl;
    cout <<endl<< "                   MENÚ PRINCIPAL      " << endl;
    cout <<endl<< "               ========================" << endl;
    cout << "      1. Opcion 1: Mostrar películas desde las más viejas a las más nuevas." << endl;
    cout << "      2. Opcion 2: Mostrar películas desde las más nuevas a las más viejas." << endl;
    cout << "      3. Opcion 3: Mostrar películas de un año en concreto." << endl;
    cout << "      4. Salir" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcion;

    return opcion;
}

int main()
{
    string aux, aux2;
    string fecha;
    string matriz[20][2];
    int count = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << endl
             << "Ingresa el nombre de la pelicula: ";
        cin >> matriz[i][0];
        cout << "Ingresa Fecha de la pelicula: ";
        cin >> matriz[i][1];
    }

    int opcionSeleccionada;

    do
    {
        opcionSeleccionada = mostrarMenu();

        switch (opcionSeleccionada)
        {
        case 1:
            cout << "      Ha seleccionado la opción 1." << endl;

            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    if(matriz[j][1] < matriz[i][1]){
               

                    aux = matriz[i][0];
                    aux2 = matriz[i][1]; 
                    matriz[i][0] = matriz[j][0]; 
                    matriz[i][1] = matriz[j][1];
                    matriz[j][0] = aux;
                    matriz[j][1] = aux2;

                    }
                }
                
            }
            for (int i = 0; i < 20; i++)
            {
                cout << endl
                     << "   Pelicula: " << matriz[i][0] << " ";
                cout << endl
                     << "   Fecha: " << matriz[i][1];
            }

           
            break;
        case 2:
            cout << "      Ha seleccionado la opción 2." << endl;


           for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    if(matriz[j][1] > matriz[i][1]){

                    aux = matriz[i][0];
                    aux2 = matriz[i][1]; 
                    matriz[i][0] = matriz[j][0]; 
                    matriz[i][1] = matriz[j][1];
                    matriz[j][0] = aux;
                    matriz[j][1] = aux2;
                    }
                }
                
            }
            for (int i = 0; i < 20; i++)
            {
                cout << endl
                     << "   Pelicula: " << matriz[i][0] << " ";
                cout << endl
                     << "   Fecha: " << matriz[i][1];
            }




            break;
        case 3:
            cout << "      Ha seleccionado la opción 3." << endl;
            cout << "   Ingresa el año de la pelicula:"<<" ";
            cin >> fecha;
          
            for (int i = 0; i < 20; i++)
            {
                if (matriz[i][1] == fecha)
                {
                    cout << endl
                         << "   Nombre: " << matriz[i][0] << " ";
                    cout << "   Fecha: " << matriz[i][1];
                    count ++;
                }
            }
            if(count == 0){
                cout<<"      Not found. "<<endl;
            }

            count = 0;

            break;
        case 4:
            cout << "   ...Saliendo del programa..." << endl;
            break;
        default:
            cout << "      Opción inválida. Por favor, seleccione una opción válida." << endl;
            break;
        } 
      

    } while (opcionSeleccionada != 4);
     

    return 0;
}