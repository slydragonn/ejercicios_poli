#include <iostream>

using namespace std;

int vec[100]={0},N,i,j,valor; //Declaro el vector y otras variables que necesito de forma global, para que me funcione en varios subprogramas

void llenar();				  //Procedimiento que llena un vector con los elementos dados por el usuario
void mostrar();               //Procedimiento que me mostrará los elementos del vector
void busqueda_des();          //Procedimiento que hará el búsqueda de un elemento en el vector desordenado
void insertar_des();          //Procedimiento que insertará un elemento en el vector desordenado
void ordenamiento();          //Procedimiento que ordenará los elementos del vector
void busqueda_ord();          //Procedimiento que hará la búsqueda de un elemento en el vector ordenado
void insertar_ord();          //Procedimiento que insertará un elemento en el vector ordenado
void eliminar();              //Procedimiento que eliminará un elemento del vector

main()
{
	cout <<"Digite el número de elementos del vector(<=100)\t";
	cin >> N;

	llenar(); //Llamo al procedimiento llenar

    cout << endl << "Los valores que tiene el vector son" << endl; //Muestro los elementos insertados en el vector para corroborar
    mostrar();
	
	busqueda_des(); //Llamo al Procedimiento que hará el búsqueda de un elemento del vector desordenado
	insertar_des(); //Llamo al Procedimiento que insertará un elemento del vector desordenado
	
    ordenamiento(); //Llamo al Procedimiento que ordenará los elementos de un vector
	
    busqueda_ord(); //Llamo al Procedimiento que hará la búsqueda de un elemento en el vector ordenado
	insertar_ord(); //Llamo al Procedimiento que insertará un elemento en el vector ordenado
	
	eliminar();     //Llamo al Procedimiento que eliminará un elemento del vector

}

void llenar()
{
	for (i=0;i<=N-1;i++)
    {
		cout << "Digite el valor "<< i+1 <<"\t";
		cin >> vec[i];
    }
}

void mostrar() //Muestra los elementos del vector
{
    for (i=0;i<=N-1;i++)
		cout << "\t" << vec[i];
}

void busqueda_des()
{
    //Capturo el valor a buscar en el vector desordenado
    cout << endl << endl <<"Digite un valor a buscar en el vector desorganizado\t";
    cin >> valor;

    //Busqueda Secuencial
    i=0;
    while ( (i<N) && (valor!=vec[i]))
		i++;

    if (i<N) //Muestro el elemento y en qué valor está
		cout << endl << "El valor " << valor << " está en la posición " << i;
    else
		cout << endl << "El valor no se encuentra en el grupo de datos";

}

void insertar_des()
{
    //Capturo el valor a insertar en el vector desordenado
    cout << endl << endl <<"Digite el valor a insertar en el vector desorganizado\t";
    cin >> valor;
    
    //Inserto un elemento en un vector desordenado
    vec[N]=valor;
    N++;

   	cout << endl <<"Los valores que tiene ahora el vector son" << endl; //Muestro el vector con el nuevo elemento
	mostrar();
}

void ordenamiento()
{
    int op,j,aux,ban,menor,pos;
    
	cout << endl << endl <<"Digite el tipo de ordenamiento que desea realizar:\t";
    cout << endl <<" 1. Burbuja";
    cout << endl <<" 2. Burbuja Mejorado";
    cout << endl <<" 3. Seleccion";
    cout << endl <<" 4. Insercion o Baraja\t";
    cin >> op; //Capturo el tipo de ordenamiento a realizar

    switch (op) //Casos de ordenamiento
    {

    case 1:	//Ordenamiento por Burbuja
			for (i=0;i<=N-2;i++)
				for (j=0;j<=N-2;j++)
					if (vec[j]>vec[j+1])
					{
						aux=vec[j];
						vec[j]=vec[j+1];
						vec[j+1]=aux;
					}
			break;

    case 2: //Ordenamiento por Burbuja Mejorado
			i=0;
			do{
				ban=1;
				
				for (j=0;j<=N-2;j++)
					if (vec[j]>vec[j+1])
					{
						aux=vec[j];
						vec[j]=vec[j+1];
						vec[j+1]=aux;
						ban=0;
					}
				
				i++;
			}while ( (i<N-1)&&(ban!=1) );
			
			break;

    case 3:	//Ordenamiento por Seleccion
			for (i=0;i<=N-2;i++)
			{
				menor=vec[i];
				pos=i;
				
				for (j=i+1;j<=N-1;j++)
					if (menor>vec[j])
					{
						menor=vec[j];
						pos=j;
					}
				
				aux=vec[i];
				vec[i]=menor;
				vec[pos]=aux;
			}
			
			break;

    case 4:	//Ordenamiento por Insercion o Baraja
			for (i=1;i<=N-1;i++)
			{
				aux=vec[i];
				j=i;
				ban=0;
				
				while ( (j>0) && (ban==0) )
				{
					if (vec[j-1]>aux)
					{
						vec[j]=vec[j-1];
						j--;
					}
					else
						ban=1;
				}
				vec[j]=aux;
			}
			break;

    default: cout << endl <<"No seleccionó un ordenamiento válido";
    }
    
    cout << endl <<"El vector ordenado ascendentemente por el método " << op << " queda:" << endl; //Muestro el vector ordenado ascendentemente
    mostrar();
}

void busqueda_ord()
{
    int li=0,lf=N-1,mitad,ban;
	
	//Capturo el valor a buscar en el vector ordenado
    cout << endl << endl <<"Digite un valor a buscar en el vector ordenado\t";
    cin >> valor;

    //Busqueda Binaria
    ban=0;
    while ( (li<=lf) && (ban==0) )
    {
		mitad=(li+lf)/2;
		if (vec[mitad]==valor)
			ban=1;
		else
		{
			if (valor<vec[mitad])
				lf=mitad-1;
			else
				li=mitad+1;

		}
    }
    
	if (valor == vec[mitad]) //Muestro el valor y en qué posición está
		cout << endl <<"El valor " << valor << "está en la posición " << mitad;
    else
		cout << endl <<"El valor no se encuentra en el grupo de datos";
}

void insertar_ord()
{
    //Capturo el valor a insertar
    cout << endl << endl <<"Digite un valor a insertar ordenadamente\t";
    cin >> valor;

    //Insertar un elemento en el Vector Ordenado
    i=0;    
    while ( (i<=N-1) && (valor>vec[i]))
		i++;

    for (j=N;j>=i+1;j--)
		vec[j]=vec[j-1];

    vec[i]=valor;
    N++;

    cout << endl << endl << "El nuevo vector queda: " << endl; //Muestro el Vector después que le inserto un elemento
    mostrar();
}

void eliminar()
{
    //Capturo el valor a eliminar
    cout << endl << endl << "Digite un valor a eliminar\t";
    cin >> valor;

    //Eliminar un elemento del vector
    i=0;
    while ( (i<N) && (valor!=vec[i]))
		i++;

    if (i<N)
    {
		for (j=i;j<=N-2;j++)
			vec[j]=vec[j+1];

		N--;
		vec[N]=0;
    }
    else
		cout << endl << "El valor no se encuentra en el grupo de datos";
    
    cout << endl << endl << "El nuevo vector queda " << endl; //Mostrar los elementos del vector despues de la eliminacion
    mostrar();
}