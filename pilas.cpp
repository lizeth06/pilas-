# incluye  < iostream >
# incluye < conio.h >
utilizando  namespace  std ;
estructura  nodo {
    int nro;
    struct  nodo * sgte;
};
 int  main ()
{
	 
	int nodo, p, * ptrPila;
// 	ptrPila = p;
    ptrPila = NULL ;
    int dato;
    int op;
    int x;
     hacer
    {
        cin >> op;
         interruptor (op) {
            caso  1 :
                 cout << " \ n NUMERO A APILAR: " ; cin >> dato;
                 empuje (p, dato);
                 cout << " \ n \ n \ t \ t Numero " << dato << " apilado ... \ n \ n " ;
            romper ;
            caso  2 :
                 x = pop (p);
                 cout << " \ n \ n \ t \ t Numero " << x << " desapilado ... \ n \ n " ;
            romper ;
            caso  3 :
                  cout << " \ n \ n MOSTRANDO PILA \ n \ n " ;
                 si (p! = NULL )
                    mostrar_pila (p);
                 más
                    cout << " \ n \ n \ t Pila vacia ..! " << endl;
            romper ;
            caso  4 :
                  destruir_pila (p);
                 cout << " \ n \ n \ t \ t Pila eliminada ... \ n \ n " ;
            romper ;
           }
         cout << endl << endl;
        sistema ( " pausa " );  sistema ( " cls " );
    } while (op! = 5 );
    devuelve  0 ;
}

 empuje del vacío (ptrPila & p, int valor) {
     ptrPila aux;
     aux = nuevo ( struct  nodo );  // apuntamos al nuevo nodo creado
     aux-> nro = valor;
     aux-> sgte = p;
     p = aux;
}

int  pop (ptrPila & p) {
     int num;
     ptrPila aux;
     aux = p;
     num = aux-> nro ;
     p = aux-> sgte ;
     eliminar (aux);
     volver num;
}

void  mostrar_pila (ptrPila p) {
     ptrPila aux;
     aux = p;     // apunta al inicio de la lista
     while (aux! = NULL ) {
            cout << " \ t " << aux-> nro << endl;
            aux = aux-> sgte ;
     }    
}

void  destruir_pila (ptrPila & p)
{
     ptrPila aux;
     
     while (p! = NULL )
     {
           aux = p;
           p = aux-> sgte ;
           eliminar (aux);
     }
}

 menú vacío ()
{
    cout << " \ n \ t IMPLEMENTACION DE PILAS EN C ++ \ n \ n " ;
    cout << " 1. APILAR                                 " << endl;
    cout << " 2. DESAPILAR                              " << endl;
    cout << " 3. MOSTRAR PILA                           " << endl;
    cout << " 4. DESTRUIR PILA                          " << endl;
    cout << " 5. SALIR                                  " << endl;
 
    cout << " \ n INGRESE OPCION: " ;
}
