//
// Created by ejcal on 10/02/2025.
//
#include <iostream>
using namespace std;
void  lista_contigua() {
    int n,i,k;
    int buscar,posicion;
    int lista[10];
    cout<<"ingrese el numero de elementos (makximo 10)" <<endl;
    cin>>n;
    for (i=0; i<n; i++) {
        cout << " Ingrese el elementoo "<<i<< " :"<<endl;
        cin >> lista[i];


    }
    cout << " Lista contigua:" <<endl;
    for (i=0; i<n; i++) {
        cout << lista[i] <<endl;
    }
    cout <<  "Elija el dato a eliminar :"<<endl;
    cout << "Eliminando datos de la lista:"<<endl;
    cin >> buscar;
    for (i=0; i<n; i++) {
        if (buscar == lista[i]) {
            posicion=i;
            cout << lista[i] <<endl;


            break;
        }
    }
    for (k=posicion; k<n; k++) {


    }
}
void  lista_ligada() {
    int cabeza,actual,fin;
    int nodo[10][2];
    cabeza=-1;
    actual=0;
    fin =0;
    cout << "Ingrese elementos (-1 para terminar )"<< endl;
    while(actual<10 && fin ==0) {

        int valor1;
        cin >> valor1;
        if(valor1==-1) {
            fin =-1;

        }
        else {
            nodo[actual][0] = valor1;
            nodo[actual][1] = cabeza;
            cabeza=actual;
            actual=actual+1;



        }
    }
    cout <<"Lista Ligada:"<< endl;
    actual=cabeza;
    while(actual !=-1) {
        cout << nodo[actual][0] << "-> ";
        actual=nodo[actual][1];

    }
    cout << "Null"<<endl;



}
void lista_doblemente_ligada() {
    int cabeza,actual,fin,previo;
    int nodo[10][3];
    cabeza=-1;
    actual=0;
    previo=-1;
    fin=0;
    cout << "Ingrese elementos (-1 para terminar )"<< endl;
    while(actual<10 && fin ==0) {
        int valor1;
        cin >> valor1;
        if(valor1==-1) {
            fin =-1;
        }else {

            nodo[actual][0] = valor1;
            nodo[actual][1] = cabeza;
            nodo[actual][2]=previo;
            if (cabeza != -1 ){
                nodo[cabeza][2]=actual;

            }
            cabeza=actual;
            previo=actual;
            actual=actual+1;

        }
    }
    cout <<"Lista dobelemente ligada:"<< endl;
    actual=cabeza;
    while(actual !=-1) {
        cout << nodo[actual][0] << "-> ";
        actual=nodo[actual][1];
    }
    cout << "Null"<<endl;


}
void lista_indexada() {
    int  n,i;
    int lista[10],indice[10];
    cout << "ingrese el numero de elementos(maximo 10)"<< endl;
    cin>>n;
    for (i=0; i<n; i++) {
        cout << "Ingrese el elemento "<<i<< " :"<< endl;
        cin >> lista[i];
        indice[i]=i;

    }
    cout << "Lista indexada:"<< endl;
    for (i=0; i<n; i++) {
        cout <<"indice :"<<indice[i]<< "-> valor : "<< lista[i]<<endl;

    }
}

int main() {
    int op=0,i=0,n=0, op2=0, op3=0,op4=0, dato,op5=0;
    int n1,i1,k,j,m,l;
    int buscar,cantidad,posicion=0,eliminado1;
    int lista[10];
    int nuevo_valor=0;
    int cabeza,actual,fin;
    int nodo[10][2];
    cabeza=-1;
    actual=0;
    fin =0;
    int cabeza2,actual2,fin2,previo;
    int nodo2[10][3];
    cabeza2=-1;
    actual2=0;
    previo=-1;
    fin2=0;
    int  n2,i2;
    int lista2[10],indice[10];


    while (op!=5) {
        cout << "1. Lista Contigua (arreglo)" << endl;
        cout << "2. Lista Ligada (Simple)" << endl;
        cout << "3. Lista Doblemente Ligada" << endl;
        cout << "4. Lista Indexada" << endl;
        cout << "5. Sair" << endl;
        cout << "Elija una opcion : ";
        cin >> op ;
        switch (op) {
            case 1:
                op2=0;
                while (op2!=4) {
                    cout << "Lista Contigua (arreglo)" << endl;
                    cout << "1.Inssertar datos" << endl;
                    cout << "2.Eliminar datos" << endl;
                    cout << "3.Mostrar datos " << endl;
                    cout <<"4. salir " << endl;
                    cout << "Elija una opcion : "<< endl;
                    cin >> op2;
                    switch (op2) {
                        case 1:
                            cout<<"ingrese el numero de elementos (makximo 10)" <<endl;
                            cin>>n1;
                            for (i1=0; i1<n1; i1++) {
                                cout << " Ingrese el elementoo "<<i1<< " :"<<endl;
                                cin >> lista[i1];


                            }
                            break;
                        case 3:
                            cout <<"__";
                            for (i1=0; i1<n1; i1++) {
                                cout <<"_";
                            }
                            cout <<"_____________";
                        for (i1=0; i1<n1; i1++) {
                            cout <<"_";
                        }
                        cout <<endl;

                            cout << "|";
                            for (i1=0; i1<n1; i1++) {
                                cout <<" ";
                            }

                            cout <<"Lista Contigua";

                            for (i1=0; i1<n1; i1++) {
                                cout <<" ";
                            }
                            cout <<"|"<<endl;


                            cout <<"| indice ";
                            for (i1=0; i1<n1; i1++) {
                                cout << "| "<< i1;
                            }
                            cout << "|" << endl;
                            cout <<"_________";
                            for (i1=0; i1<n1; i1++) {
                                cout <<"___";
                            }
                            cout <<"_";
                            cout << endl;
                            cout <<"| valor  ";
                            for (i1=0; i1<n1; i1++) {

                                cout <<"| " << lista[i1] ;

                            }
                            cout << "|"<< endl;
                        cout <<"__";
                        for (i1=0; i1<n1; i1++) {
                            cout <<"_";
                        }
                        cout <<"_____________";
                        for (i1=0; i1<n1; i1++) {
                            cout <<"_";
                        }
                        cout <<endl;

                            break;
                        case 2:
                            cout <<  "Elija el dato a eliminar :"<<endl;
                            cout << "Eliminando datos de la lista:"<<endl;
                            cin >> buscar;
                            for (i1=0; i1<n1; i1++) {
                                if (buscar == lista[i1]) {
                                    posicion=i1;
                                    cout << lista[i1] <<endl;


                                    break;
                                }
                            }

                            cantidad=n1-1;
                            for (k=posicion; k<cantidad; k++) {
                                lista[k]=lista[k+1];

                            }
                            lista[cantidad]=0;
                            break;
                        case 4:
                            break;
                        default:
                            break;

                    }
                }
                break;
            case 2:
                op3=0;
                 while (op3!=4) {
                    cout << "Lista Ligada (Simple)" << endl;
                    cout << "1.Inssertar datos" << endl;
                    cout << "2.Eliminar datos" << endl;
                    cout << "3.Mostrar datos " << endl;
                    cout <<"4. salir " << endl;
                    cout << "Elija una opcion : "<< endl;
                    cin >> op3;
                    switch (op3) {
                        case 1:
                            cout << "Ingrese elementos (-1 para terminar )"<< endl;
                            while(actual<10 && fin ==0) {

                                int valor1;
                                cin >> valor1;
                                if(valor1==-1) {
                                    fin =-1;

                                }
                                else {
                                    nodo[actual][0] = valor1;
                                    nodo[actual][1] = cabeza;
                                    cabeza=actual;
                                    actual=actual+1;



                                }
                            }
                        break;
                        case 3:
                            cout <<"__";
                        actual=cabeza;

                        while(actual !=-1 ) {
                            if (nodo[actual][0]!=-1) {
                                cout << "__";

                            }
                            actual=nodo[actual][1];

                        }
                        cout <<"________";
                        actual=cabeza;

                        while(actual !=-1 ) {
                            if (nodo[actual][0]!=-1) {
                                cout << "__";

                            }
                            actual=nodo[actual][1];

                        }

                        cout <<"__"<<endl;
                        cout <<"| ";
                        actual=cabeza;

                        while(actual !=-1 ) {
                            if (nodo[actual][0]!=-1) {
                                cout << " ";

                            }
                            actual=nodo[actual][1];
                        }
                        cout <<" Lista Ligada:";
                        actual=cabeza;

                        while(actual !=-1 ) {
                            if (nodo[actual][0]!=-1) {
                                cout << " ";

                            }
                            actual=nodo[actual][1];

                        }
                        cout <<"|"<<endl;

                            actual=cabeza;
                            cout <<"| Indice ";
                        while(actual !=-1 ) {
                            // agregue este if para lo que quedo de corrimiento
                            if (    nodo[actual][0]!=-1) {

                                cout <<"| " <<actual << " " ;

                            }
                            actual=nodo[actual][1];

                        }
                        cout <<"|"<<endl;
                        cout <<"| valor  ";
                        actual=cabeza;
                            while(actual !=-1 ) {
                                // agregue este if para lo que quedo de corrimiento
                                if (    nodo[actual][0]!=-1) {

                                    cout <<"| " <<nodo[actual][0] << " ";

                                }
                                actual=nodo[actual][1];

                            }
                            cout <<"|"<<endl;
                            cout << "Null"<<endl;
                            break;
                        case 2:
                            cout <<"Elija el dato a eliminar :"<< endl;
                            cin >> eliminado1;
                            actual=cabeza;
                            cout << " dato de la cabeza :"<< cabeza<< endl;
                            nuevo_valor =cabeza-1;
                            while (actual !=-1) {
                                if (eliminado1==nodo[actual][0]) {
                                    for (j=actual; j<cabeza; j++) {
                                        nodo[j][0] = nodo[j+1][0];
                                        //nodo[j][1]=nodo[j+1][1];
                                    }
                                    nodo[j][0]=-1;
                                    // para evitar que al mostrar aparezca el valo lo coloque como -1


                                    /*
                                    nodo[actual][0] = valor1;
                                    nodo[actual][1] = cabeza;
                                    cabeza=actual;
                                    actual=actual+1;


                                     */
                                    break;

                                }

                                actual=nodo[actual][1];

                            }
                            break;
                        case 4:
                            break;
                        default:
                            break;

                    }
                }
                break;
            case 3:
                op4=0;
                while (op4!=4){
                cout << "Lista Doblemente Ligada" << endl;
                cout << "1.Inssertar datos" << endl;
                cout << "2.Eliminar datos" << endl;
                cout << "3.Mostrar datos " << endl;
                cout <<"4. salir " << endl;
                cout << "Elija una opcion : "<< endl;
                cin >> op4;
                switch (op4) {
                    case 1:
                        cout << "Ingrese elementos (-1 para terminar )"<< endl;
                    while(actual2<10 && fin2 ==0) {
                        int valor2;
                        cin >> valor2;
                        if(valor2==-1) {
                            fin2 =-1;
                        }else {

                            nodo2[actual2][0] = valor2;
                            nodo2[actual2][1] = cabeza2;
                            nodo2[actual2][2]=previo;
                            if (cabeza2 != -1 ){
                                nodo2[cabeza2][2]=actual2;

                            }
                            cabeza2=actual2;
                            previo=actual2;
                            actual2=actual2+1;

                        }
                    }
                    break;
                    case 2:
                        cout <<  "Elija el dato a eliminar :"<<endl;
                        cin >> dato;
                        actual2=cabeza2;

                        while (actual2!=-1) {
                            if (dato==nodo2[actual2][0]) {
                                for (m=actual2; m<cabeza2; m++) {
                                    nodo2[m][0] = nodo2[m+1][0];
                                    //nodo[j][1]=nodo[j+1][1];
                                }
                                nodo2[m][0]=-1;
                                break;
                            }
                            actual2=nodo2[actual2][1];

                        }
                        break;
                    case 3:
                        cout <<"Lista dobelemente ligada:"<< endl;
                    cout <<"_________";
                    actual2=cabeza2;
                    while (actual2!=-1) {
                        if (nodo2[actual2][0]!=-1) {
                            cout <<"____";
                        }
                        actual2=nodo2[actual2][1];
                    }
                    cout <<"_"<<endl;
                    actual2=cabeza2;
                    cout <<"| Indice ";
                    while (actual2!=-1) {
                        if (nodo2[actual2][0]!=-1) {
                            cout <<"| "<< actual2 << " ";

                        }
                        actual2=nodo2[actual2][1];
                    }
                    cout <<"|"<<endl;
                    cout <<"_________";
                    actual2=cabeza2;
                    while (actual2!=-1) {
                        if (nodo2[actual2][0]!=-1) {
                            cout <<"____";
                        }
                        actual2=nodo2[actual2][1];
                    }
                    cout <<"_"<<endl;
                    actual2=cabeza2;
                    cout <<"| Valor  ";
                    while(actual2 !=-1) {
                        if (nodo2[actual2][0]!=-1) {
                            cout <<"| "<< nodo2[actual2][0] << " ";
                        }
                        actual2=nodo2[actual2][1];
                    }

                    cout << "|"<<endl;
                    cout <<"_________";
                    actual2=cabeza2;
                    while (actual2!=-1) {
                        if (nodo2[actual2][0]!=-1) {
                            cout <<"____";
                        }
                        actual2=nodo2[actual2][1];
                    }
                    cout <<"_"<<endl;

                    break;
                    case 4:
                        break;
                    default:
                        break;
                }
                }
                //lista_doblemente_ligada();
                break;
            case 4:
                op5=0;
                while (op5!=4) {
                    cout << "Lista Indexada" << endl;
                    cout << "1.Inserir datos" << endl;
                    cout << "2.Eliminar datos" << endl;
                    cout << "3.Mostrar datos" << endl;
                    cout << "4. salir " << endl;
                    cout << "Elija una opcion : "<< endl;
                    cin >> op5;
                    switch (op5) {
                        case 1:

                            cout << "ingrese el numero de elementos(maximo 10)"<< endl;
                        cin>>n2;
                        for (i2=0; i2<n2; i2++) {
                            cout << "Ingrese el elemento "<<i2<< " :"<< endl;
                            cin >> lista2[i2];
                            indice[i2]=i2;

                        }
                        break;

                        case 2:
                            l=0;
                            int valor_eliminado;
                            cout <<"escriba el valor a eliminar : "<< endl;
                            cin >> valor_eliminado;
                            for (i2=0; i2<n2; i2++) {
                                if (lista2[i2]==valor_eliminado) {
                                    for (l=i2; l<n2-1; l++) {
                                        indice[l]=indice[l+1];
                                        lista2[l]=lista2[l+1];

                                    }
                                    lista2[l]=-1;
                                    break;
                                }
                            }
                            break;
                        case 3:

                            cout << "Lista indexada:"<< endl;
                            cout <<"| Indice ";
                            for (i2=0; i2<n2; i2++) {
                                if (lista2[i2]!=-1) {
                                    cout <<"| "<< indice[i2]<<" ";
                                }
                            }
                            cout <<"|"<<endl;

                            cout <<"| Valor  ";
                            for (i2=0; i2<n2; i2++) {
                                if (lista2[i2]!=-1) {
                                    cout <<"| "<< lista2[i2]<<" ";
                                }

                            }
                        cout <<"|"<<endl;
                            break;
                        case 4:
                            break;
                        default:
                            break;

                    }
                }
               // lista_indexada();
                break;
            case 5:
                cout << "Sair" << endl;
                break;
            default:
                cout << "Opcion invalida, intente nuevamente " << endl;
                break;

        }

    }
    cout << "Hello, World!" << std::endl;
    return 0;
}