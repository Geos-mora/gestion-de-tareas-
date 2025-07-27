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
                string tipoTarea;
                string descripcion;
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
                cout<<"elija una opccion;  ";cin>>tipoTarea;
                
            if (tipoTarea>="1"&&tipoTarea<="3")
            {
                break;
            }else{
                cout<<"<<---------------------->>\n";
                cout<<"elija una opccion valida\n";
            }
           }
           
            cin.ignore();
                cout<<"Nombre de la tarea: ";getline(cin, titulo) ;
                cout<<"digite fecha limite: ";getline(cin, fechaLimite) ;
                cout<<"prioridad [1 a 5]: ";cin >>prioridad; cin.ignore();
                if (tipoTarea=="1"){
                    
                    descripcion="Personal";
                    cout<<"digite categoria  [hogar, salud, finanzas ,ocio etc.]: ";getline(cin, categoria); 

                    listaTareas.push_back(new TareaPersonal(titulo, descripcion, fechaLimite, Status, prioridad, categoria));
                    
                }else if (tipoTarea=="2"){
                    descripcion="Academica";
                    cout<<"digite asignatura: ";getline(cin, materia);
                    cout<<"digite tipo [ examen,  taller, exposición ]: ";getline(cin, tipo); 

                    
                    listaTareas.push_back(new TareaAcademica(titulo, descripcion, fechaLimite, Status, prioridad, materia,tipo));
                }else if(tipoTarea=="3"){
                    descripcion="Laboral";
                    cout<<"proyecto a realizar: ";getline(cin, proyecto);
                    cout<<"digite responsable del proyecto: ";getline(cin, responsable); cin.ignore();
                    
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
            bool encontrado=false;
            cin.ignore();
            cout<<"digite titulo de la tarea: ";getline(cin, buscarTitulo); 
            for (int i = 0; i < listaTareas.size(); i++){
            
                if (buscarTitulo==listaTareas[i]->getTitulo())
                {
                    listaTareas[i]->setStatus();
                    cout<<"-----------registro encontrado----------\n";
                    listaTareas[i]->mostrarTarea();
                }
            }
            if (!encontrado){
                cout<<"registro no encontrado en la lista \n";
            }
            
            cout<<"presiona ENTER ";
            cin.get();
            break;

        }

        case 4:{
            
            cout<<"abriendo archivo...\n";
            ofstream archivo("tareas.txt"); //abre el archivo

            if (!archivo.is_open())
            {
                cout<<"no se pudo abrir el archivo\n";
                break;
            }

            for (Tarea* tarea :listaTareas){
                archivo<<tarea->serializar()<<endl;
            }

            archivo.close();
            cout<<"archivo guardado correctamente\n";

            break;
        }

        case 5:{


            cout<<"cargar archivos\n";
            ifstream archivo("tareas.txt");

            if (!archivo.is_open()){
                cout<<"el archivo no se abrio correctamente \n";
                break;
            }

            string line;
           while (getline(archivo, line)) {
            stringstream  ss(line);
             
            string titulo,descripcion,fechaLimite, StatusStr,prioridadStr,categoria,materia,tipo, proyecto,responsable;
            getline(ss, descripcion, ',');
            getline(ss, titulo, ',');
            getline(ss, fechaLimite, ',');
            getline(ss, StatusStr, ',');
            getline(ss, prioridadStr, ',');
            getline(ss, categoria, ',');
            getline(ss, materia, ',');
            getline(ss, tipo, ',');
            getline(ss, proyecto, ',');
            getline(ss, responsable, ',');
      
            bool Status=(StatusStr=="1");
            int prioridad=stoi(prioridadStr);

            if (descripcion=="Personal")
            {
                listaTareas.push_back(new TareaPersonal(titulo, descripcion, fechaLimite, Status, prioridad, categoria));
            
            }else if (descripcion=="Academica"){

                listaTareas.push_back(new TareaAcademica(titulo, descripcion, fechaLimite, Status, prioridad, materia,tipo));    
            }else if (descripcion=="Laboral"){

                   listaTareas.push_back(new TareaLaboral(titulo, descripcion, fechaLimite, Status, prioridad, proyecto, responsable));
                
            }
            
            
        }
        archivo.close();
        cout << "Tareas cargadas exitosamente desde 'tareas.txt'.\n";
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

