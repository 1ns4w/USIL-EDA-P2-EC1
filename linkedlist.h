#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdlib.h>
#include <vector>
using namespace std;

template <typename T>
class LinkedList
{
  private:
    T size_now;
    T size_max;
    Node *next;
    Node *prev;
    string data;
  public:
    T front(); // Retorna el elemento al comienzo
    T back(); // Retorna el elemento al final
    void push_front(T &elem); // Agrega un elemento al comienzo 
    void push_back(T &elem); // Agrega un elemento al final
    void pop_front(); // Remueve el elemento al comienzo pero no lo retorna
    void pop_back(); // Remueve el elemento al final pero no lo retorna
    T operator[](size_t pos); // Retorna el elemento en la posición indicada
    bool empty(); // Retorna si la lista está vacía o no
    size_t size(); // Retorna el tamaño de la lista 
    void clear(); // Elimina todos los elementos de la lista
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista
};

// Comments #2
template <typename T>
void LinkedList<T>::front(T &elem)
{

}

// Comments #3
template <typename T>
T LinkedList<T>::empty()
{
  bool cola<T>::empty()
{
  return(size_now ==0);
}
 template <typename k>
T cola<T>::size()
{
  return size_now;
}
}
system("clear"); //Limpia la pantalla

#endif
