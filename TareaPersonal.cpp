#include "TareaPersonal.h"
#include <iostream>
using namespace std;

TareaPersonal::TareaPersonal(string _titulo ,string  _descripcion, string _fechaLimite, bool _Status,int _prioridad, string _categoria)
              :Tarea(_titulo, _descripcion, _fechaLimite, _Status, _prioridad),categoria(_categoria){}



   string TareaPersonal::getCategoria()const{return categoria;} 
   
   
   void TareaPersonal::mostrarTarea()const{
        cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"Descripcion: "<<getDescripcion() <<endl;
        cout<<"Titulo: "<<getTitulo()<<endl;
        cout<<"Fecha limite: "<<getFechaLimite()<<endl;
        cout<<"Estado: "<<(getStatus()?" completada":"Pendiente")<<endl;
        cout<<"Prioridad: "<<getPrioridad()<<endl;
        cout<<"categoria: "<<getCategoria()<<endl;
           
     }

     string TareaPersonal::serializar()const{
          return getDescripcion() + "," + getTitulo() + "," + 
                 getFechaLimite() + "," + (getStatus() ? "1" : "0") + "," + 
                 to_string( getPrioridad()) + "," + getCategoria();
     };