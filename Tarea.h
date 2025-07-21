#ifndef TAREA_H
#define TAREA_H

#include <iostream>
using namespace std;
 class Tarea{
    

 private:
    
 string titulo , fechaLimite;
 bool completada;
 int prioridad, descripcion;

 public:
    Tarea(string _titulo ,int _descripcion, string _fechaLimite, bool _completada,int _prioridad);

    
    void Tarea::setCompletada();
    //GETTERS
      string getTitulo()const;
      int getDescripcion()const;
      string getFechaLimite()const;
      bool getCompletada()const;
      int getPrioridad()const;

      virtual void mostrarTarea()const=0;
      virtual string serializar()const=0;
      virtual ~Tarea(){};
 
 };
   

#endif // TAREA_H

