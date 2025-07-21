#include "TareaLaboral.h"
#include <iostream>
using namespace std;


TareaLaboral::TareaLaboral(string _titulo ,int _descripcion, string _fechaLimite, bool _completada,int _prioridad, string _proyecto, string _responsable)
             :Tarea(_titulo, _descripcion, _fechaLimite, _completada, _prioridad),proyecto(_proyecto),responsable(_responsable){}

//setters
void Tarea::setCompletada(){ this->completada;}

string TareaLaboral::getProyecto()const{return proyecto;}
string TareaLaboral::getResponsable()const{return responsable;}

//metodos dinamiocos 
void TareaLaboral::mostrarTarea()const{
        cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"Descripcion: tarea personal " <<endl;
        cout<<"Titulo: "<<getTitulo()<<endl;
        cout<<"Fecha limite: "<<getFechaLimite()<<endl;
        cout<<"Estado: "<<(getCompletada()?"Completada":"Pendiente")<<endl;
        cout<<"Prioridad: "<<getPrioridad()<<endl;
        cout<<"Proyecto: "<<getProyecto()<<endl;
        cout<<"Ingeniero a cargo: "<<getResponsable()<<endl;
        

}
string TareaLaboral::serializar()const{return "";}