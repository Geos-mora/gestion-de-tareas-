#include "TareaLaboral.h"
#include <iostream>
using namespace std;


TareaLaboral::TareaLaboral(string _titulo ,string _descripcion, string _fechaLimite, bool _Status,int _prioridad, string _proyecto, string _responsable)
             :Tarea(_titulo, _descripcion, _fechaLimite, _Status, _prioridad),proyecto(_proyecto),responsable(_responsable){}

//setters


string TareaLaboral::getProyecto()const{return proyecto;}
string TareaLaboral::getResponsable()const{return responsable;}

//metodos dinamiocos 
void TareaLaboral::mostrarTarea()const{
        cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"Descripcion: "<<getDescripcion() <<endl;
        cout<<"Titulo: "<<getTitulo()<<endl;
        cout<<"Fecha limite: "<<getFechaLimite()<<endl;
        cout<<"Estado: "<<(getStatus()?"completada":"Pendiente")<<endl;
        cout<<"Prioridad: "<<getPrioridad()<<endl;
        cout<<"Proyecto: "<<getProyecto()<<endl;
        cout<<"Ingeniero a cargo: "<<getResponsable()<<endl;
        

}

    string TareaLaboral::serializar()const{
           return getDescripcion() + "," + getTitulo() + "," + 
                  getFechaLimite() + "," + (getStatus() ? "1" : "0") + "," + 
                  to_string( getPrioridad()) + "," + getProyecto() + "," + getResponsable();
    };