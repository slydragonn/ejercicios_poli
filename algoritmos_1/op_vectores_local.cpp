#include <iostream>
using namespace std;

int n;

void llenar(int *);				  
void mostrar(int *);               
void busqueda_des(int *, int);          
void insertar_des(int *, int);
void ordenamiento(int, int *);          
void busqueda_ord(int *, int);          
void insertar_ord(int *, int);          
void eliminar(int *, int);

main()
{
    int vec[100] = {0};
    int valor;
    int tipo_ordenamiento;

    cout << "Digite el número de elementos del vector(<= 100): ";
    cin >> n;

    llenar(vec);
    mostrar(vec);

    cout << endl << "Digite un valor a buscar en el vector desorganizado: ";
    cin >> valor;

    busqueda_des(vec, valor);

    cout << endl << "Digite el valor a insertar en el vector desorganizado: ";
    cin >> valor;

    insertar_des(vec, valor);
    mostrar(vec);

    cout << endl << "Digite el tipo de ordenamiento que desea realizar\n" << "1. Burbuja\n" << "2. Burbuja Mejorado\n" << "3. Selección\n" << "4. Inserción o Baraja\n";
    cin >> tipo_ordenamiento;

    ordenamiento(tipo_ordenamiento, vec);
    cout << endl << "El vector ordenado ascendentemente por el método " << tipo_ordenamiento << "queda:" << endl;
    mostrar(vec);

    cout << endl << "Digite un valor a buscar en el vector ordenado: ";
    cin >> valor;
    busqueda_ord(vec, valor);

    cout << endl << "Digite un valor a insertar ordenadamente: ";
    cin >> valor;
    insertar_ord(vec, valor);
    cout << endl << "El nuevo vector queda: " << endl;
    mostrar(vec);

    cout << endl << "Digite un valor a eliminar: ";
    cin >> valor;
    eliminar(vec, valor);
    cout << endl << "El nuevo vector queda: " << endl;
    mostrar(vec);

}

void llenar(int *vector)
{
    int i;

    for(i = 0; i <= n -1; i++)
    {
        cout << endl << "Digite el valor " << i + 1 << endl;
        cin >> vector[i];
    }
}

void mostrar(int *vector)
{
    int i;

    cout << "Los elementos son:" << endl;

    for(i = 0; i <= n - 1; i++)
    {
        cout << vector[i] << "\t";
    }
}

void busqueda_des(int *vector, int num)
{
    int i = 0;
    
    while(i < n && num != vector[i])
    {
        i++;
    }

    if(i < n)
    {
        cout << endl << "El valor " << num << "está en la posición: " << i << endl;
    }
    else
    {
        cout << endl << "El valor no se encuentra en el grupo de datos" << endl;
    }
}

void insertar_des(int *vector, int num)
{
    vector[n] = num;
    n++;
    cout << "hola: " << vector[n];
}

void ordenamiento(int tipo, int *vector)
{
    int i, j, aux, ban, menor, pos;
    switch (tipo)
    {
    case 1:
        for(i = 0; i <= n - 2; i++)
        {
            for(j = 0; j <= n - 2; j++)
            {
                if(vector[j] > vector[j + 1])
                {
                    aux = vector[j];
                    vector[j] = vector[j + 1];
                    vector[j + 1] = aux;
                }
            }
        }
        break;
    case 2:
        i = 0;
        do
        {
            ban = 1;
            for(j = 0; j <= n - 2; j++)
            {
                if(vector[j] > vector[j + 1])
                {
                    aux = vector[j];
                    vector[j] = vector[j + 1];
                    vector[j + 1] = aux;
                    ban = 0;
                }
            }
            i++;
        } while (i < n - 1 && ban != 1);
        
        break;
    case 3:
        for(i = 0; i <= n - 2; i++)
        {
            menor = vector[i];
            pos = i;

            for(j = i + 1; j <= n - 1; j++)
            {
                if(menor > vector[j])
                {
                    menor = vector[j];
                    pos = j;
                }
            }

            aux = vector[i];
            vector[i] = menor;
            vector[pos] = aux;
        }
        break;
    case 4:
        for(i = 1; i <= n - 1; i++)
        {
            aux = vector[i];
            j = i;
            ban = 0;

            while(j > 0 && ban == 0)
            {
                if(vector[j - 1] > aux)
                {
                    vector[j] = vector[j - 1];
                    j--;
                }
                else
                {
                    ban = 1;
                }
            }
            
            vector[j] = aux;
        }
        break;

    default: cout << endl << "No seleccionó un ordenamiento válido" << endl;
    }
}

void busqueda_ord(int *vector, int num)
{
    int li = 0, lf = n - 1, mitad, ban = 0;

    while (li <= lf && ban == 0)
    {
        mitad = (li + lf) / 2;

        if(vector[mitad] == num)
        {
            ban = 1;
        }
        else
        {
            if(num < vector[mitad])
            {
                lf = mitad - 1;
            }
            else
            {
                li = mitad + 1;
            }
        }
    }

    if(num == vector[mitad])
    {
        cout << endl << "El valor " << num << "está en la posición: " << mitad << endl;
    }
    else
    {
        cout << endl << "El valor no se encuentra en el grupo de datos";
    }
    
}

void insertar_ord(int *vector, int num)
{
    int i = 0, j = 0;

    while (i <= n - 1 && num > vector[i])
    {
        i++;
    }

    for(j = n; j >= i + 1; j--)
    {
        vector[j] = vector[j - 1];
    }

    vector[i] = num;
    n++;
}

void eliminar(int *vector, int num)
{
    int i = 0, j;

    while (i < n && num != vector[i])
    {
        i++;
    }

    if(i < n)
    {
        for(j = i; j <= n - 2; j++)
        {
            vector[j] = vector[j + 1];
        }

        n--;
        vector[n] = 0;
    }
    else
    {
        cout << endl << "El valor " << num << "no está en el vector";
    }
}