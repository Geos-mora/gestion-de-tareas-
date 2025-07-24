#ifndef TAREA_H
#define TAREA_H

#include <iostream>
using namespace std;
 class Tarea{
    

 private:
    
 string titulo , fechaLimite;
 bool Status;
 int prioridad;
string descripcion;

 public:
    Tarea(string _titulo ,string _descripcion, string _fechaLimite, bool _Status,int _prioridad);

    
    void setStatus();
    //GETTERS
      string getTitulo()const;
      string getDescripcion()const;
      string getFechaLimite()const;
      bool getStatus()const;
      int getPrioridad()const;

      virtual void mostrarTarea()const=0;
      virtual string serializar()const=0;
      virtual ~Tarea(){};
 
 };
   

#endif // TAREA_H

