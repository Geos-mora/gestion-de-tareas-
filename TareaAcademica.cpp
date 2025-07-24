#include "TareaAcademica.h"
#include <iostream>
using namespace std;

TareaAcademica::TareaAcademica(string _titulo ,string _descripcion, string _fechaLimite, bool _Status,int _prioridad, string _materia, string _tipo)
               :Tarea(_titulo, _descripcion, _fechaLimite, _Status, _prioridad), materia(_materia),tipo(_tipo){}

    
    //setters


    string TareaAcademica::getMateria()const{return materia;}
    string TareaAcademica::getTipo()const{return tipo;}  

    
    //metodos dinamicos
    void TareaAcademica::mostrarTarea()const{
        cout<<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"Descripcion: "<<getDescripcion() <<endl;
        cout<<"Titulo: "<<getTitulo()<<endl;
        cout<<"Fecha limite: "<<getFechaLimite()<<endl;
        cout<<"Estado: "<<(getStatus()?"completada":"Pendiente")<<endl;
        cout<<"Prioridad: "<<getPrioridad()<<endl;
        cout<<"Materia: "<<getMateria()<<endl;
        cout<<"tipo: "<<getTipo()<<endl;
        


    }
       string TareaAcademica::serializar()const{
           return getDescripcion() + "," + getTitulo() + "," + 
                  getFechaLimite() + "," + (getStatus() ? "1" : "0") + "," + 
                  to_string( getPrioridad()) + "," + getMateria()+"," + getTipo() ;
    };
