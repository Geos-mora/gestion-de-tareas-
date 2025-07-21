#include "TareaPersonal.h"
#include <iostream>
using namespace std;

TareaPersonal::TareaPersonal(string _titulo ,int _descripcion, string _fechaLimite, bool _completada,int _prioridad, string _categoria)
              :Tarea(_titulo, _descripcion, _fechaLimite, _completada, _prioridad),categoria(_categoria){}


   void Tarea::setCompletada(){ this->completada;}
   string TareaPersonal::getCategoria()const{return categoria;} 
    
   
   void TareaPersonal::mostrarTarea()const{
        cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"Descripcion: tarea personal " <<endl;
        cout<<"Titulo: "<<getTitulo()<<endl;
        cout<<"Fecha limite: "<<getFechaLimite()<<endl;
        cout<<"Estado: "<<(getCompletada()?"Completada":"Pendiente")<<endl;
        cout<<"Prioridad: "<<getPrioridad()<<endl;
        cout<<"categoria: "<<getCategoria()<<endl;
        




   }
    string TareaPersonal::serializar()const{return "";}