#include "Tarea.h"
#include "TareaAcademica.h"
#include "TareaLaboral.h"
#include "TareaPersonal.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    vector<Tarea*>listaTareas;
    int opcion;
    do{
        
        cout<<"======= MENÚ DE TAREAS =======\n";
        cout<<"1. Agregar tarea\n";
        cout<<"2. Ver tareas\n";
        cout<<"3. Marcar tarea como completada\n";
        cout<<"4. Guardar tareas en archivo\n";
        cout<<"5. Cargar tareas desde archivo\n";
        cout<<"0. Salir\n";
        cout<<"elija una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:{

                string titulo;
                int descripcion;
                string fechaLimite; 
                bool Status=false;
                int prioridad;
                string categoria;
                string materia;
                string tipo; 
                string proyecto;
                string responsable;

           while (true){     
             cout <<"############ ELECCIONE TIPO DE TAREA#########\n";
                cout<<"1. Tarea personal\n";
                cout<<"2. Tarea academica\n";
                cout<<"3. Tarea laboral\n";
                cout<<"elija una opccion;  ";cin>>descripcion;
                
            if (descripcion>=1&&descripcion<=3)
            {
                break;
            }else{
                cout<<"<<---------------------->>\n";
                cout<<"elija una opccion valida\n";
            }
           }
           
            
                cout<<"Nombre de la tarea: ";cin >>titulo;
                cout<<"digite fecha limite: ";cin >>fechaLimite;
                cout<<"prioridad [1 a 5]: ";cin >>prioridad;


                if (descripcion==1)
                {
                    cout<<"digite categoria  [hogar, salud, finanzas ,ocio etc.]: ";cin>>categoria;

                    listaTareas.push_back(new TareaPersonal(titulo, descripcion, fechaLimite, Status, prioridad, categoria));
                    
                }else if (descripcion==2)
                {
                    cout<<"digite asignatura: ";cin>>materia;
                    cout<<"digite tipo [ examen,  taller, exposición ]: ";cin>>tipo;
                    
                    listaTareas.push_back(new TareaAcademica(titulo, descripcion, fechaLimite, Status, prioridad, materia,tipo));
                }else if(descripcion==3){
                    cout<<"proyecto a realizar: ";cin>>proyecto;
                    cout<<"digite responsable del proyecto: ";cin>>responsable;
                    
                    listaTareas.push_back(new TareaLaboral(titulo, descripcion, fechaLimite, Status, prioridad, proyecto, responsable));
                    
                }
                
                
                


            break;
        }
        case 2:{
            for (int i = 0; i < listaTareas.size(); i++)
            {
                listaTareas[i]->mostrarTarea();
            }
            
            break;
        }
        case 3:{
            string buscarTitulo;
            cout<<"digite titulo de la tarea: ";cin>>buscarTitulo;
            for (int i = 0; i < listaTareas.size(); i++){
            
                if (buscarTitulo==listaTareas[i]->getTitulo())
                {
                    listaTareas[i]->setStatus();
                    listaTareas[i]->mostrarTarea();
                }  
            }
            
            break;
        }
            case 4: {
    cout << "Cargando tareas desde archivo...\n";

    ifstream archivo("tareas.txt");

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo 'tareas.txt'. Verifica que exista.\n";
        break;
    }
    string line;

    while (getline(archivo,line))
    {
        /* code */
    }
    
    break;
}


            cout <<"ingresa una opcion validad \n";        
        default:
            break;
        }

    } while (opcion!=0);
    

    for (int i = 0; i < listaTareas.size(); i++)
    {
        delete listaTareas[i];
    }
    


    return 0;
}

