#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

//#include <iostream>
// #include <vector>
// using namespace std;

template <typename T>
//by jose terrones
class Node
{
  private:
    //Declarar punteros
    T valor;
    Node *next;
    Node *prev;
    friend class LinkedList;
};

template <typename T>
class LinkedList
{
  private:
  // TM tamaño maximo, TA tamaño actual
  //front comienzo de la lista, fin es final de la lista
    Node *comienzo;
    Node *fin;
    T TA;   
    T TM;
  // members here
  public:
    T front(); // Retorna el elemento al comienzo //completo
    T back(); // Retorna el elemento al final //completo
    void push_front(T); // Agrega un elemento al comienzo // completo
    void push_back(T); // Agrega un elemento al final //completo
    void pop_front(); // Remueve el elemento al comienzo //completo
    void pop_back(); // Remueve el elemento al final // completo
    T operator[](int); // Retorna el elemento en la posición indicada //completo
    bool empty(); // Retorna si la lista está vacía o no //completo
    int size(); // Retorna el tamaño de la lista //completo
    void clear(); // Elimina todos los elementos de la lista // completo
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista 
};

//Crear lista
template <typename T>
LinkedList<T>::LinkedList(T TM)
{
  comienzo = new Node;
  fin = new Node;
  comienzo->next = fin;
  fin->prev = comienzo;
  comienzo->prev= null;
  fin->next = null;
  TA=0;
}

template <typename T>
T LinkedList<T>::front();
{
  return comienzo->next->valor; //elemento del comienzo
}

template <typename T>
T LinkedList<T>::back();
{
  return fin->prev->valor; //elemento del final
}


template <typename T>
void LinkedList<T>::push_front(T &elem);
{
  //colocar nuevo nodo
  Node *nuevo = new Node;
  //posicionarlo
  nuevo->valor = &elem;
  nuevo->prev = comienzo;
  nuevo->next = comienzo->next;
  //actualizar puntero comienzo
  comienzo->next->prev=nuevo;
  comienzo->next=nuevo;
  TA++;// sumar 1 termino
}

template <typename T>
void LinkedList<T>::push_back(T &elem);
{
  //colocar nuevo nodo
  Node *nuevo = new Node;
  //posicionarlo
  nuevo->valor = &elem;
  nuevo->next = fin;
  nuevo->prev = fin->prev;
  //actualizar puntero comienzo
  fin->prev->next=nuevo;
  fin->prev=nuevo;
  TA++;// sumar 1 termino
}

template <typename T>
void LinkedList<T>::pop_front();
{
  Node *nuevofront = comienzo -> next -> next; //nuevofront nodo anterior al que se borrara
  delete comienzo->next; //borrar primer nodo
  comienzo->next=nuevofront; 
  nuevofront->prev= comienzo;//actualizar punteros
  TA--;// quitar 1 termino
}

template <typename T>
void LinkedList<T>::pop_back();
{
  Node *nuevoback = fin -> prev -> prev; //nuevoback nodo anterior al que se borrara
  delete fin->prev; //borrar ultimo nodo
  fin->next=nuevoback; 
  nuevoback->prev= fin;//reorganizar los punteros
  TA--;// quitar 1 termino
}

// 
template <typename T>
bool LinkedList<T>::empty()
  {
    estadolista = false
    if(comienzo->next=fin)
    {
      estadolista = true;
    }
    return estadolista;
    //estadolista=false hay elementos
    //estadolista=true no hay elementos
  }
template <typename T>
T LinkedList<T>::size()
  {
    return(TA) //TA cantidad de terminos actual
  }

void LinkedList<T>::clear();
{
  while(comienzo->next != fin)
    {
      pop_front();
    }
  TA=0;
  delete comienzo;
  delete fin;
}

T operator[x](T);
{
  //el valor de busqueda debe estar entre 1 y TA
  if (x<=TA && x>0){
    //contador y y nodo busqueda
    Node *busqueda = new Node;
    Node *busqueda = comienzo->next;
    T y=1;
    while(x != y)
    {
      busqueda->next = busqueda;
      y++;
    }
    return busqueda->valor;
  }
  delete busqueda;
}

template <typename T>
void reverse(); 
{
}

#endif
