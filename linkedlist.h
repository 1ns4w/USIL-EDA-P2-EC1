#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

/#include <iostream>
using namespace std;

template <typename T>
class Node
{
  public:
      T data; //valor
      Node<T> *next; //type Node - apunta a next
      Node<T> *before; 

};  
template <typename T>
class LinkedList
{
  private:
      Node<T> *first;
      Node<T> *last;
  public:
      LinkedList()//constructor
      {
        first = new Node<T>;
        last = new Node<T>;
        first->next=last;
        last->before=first;
        first->before=NULL;
        last->next=NULL;
      }

      bool empty();// Retorna si la lista está vacía o no
      void push_front(T &elem); // Agrega un elemento al comienzo 
      void push_back(T &elem); // Agrega un elemento al final
      void pop_front(); // Remueve el elemento al comienzo pero no lo retorna
      void pop_back(); // Remueve el elemento al final pero no lo retorna
      T get_front(); //Retorna el elemento al comienzo
      T get_back(); //Retorna el elemento al final
      void reverse(); // Revierte la lista
      void sort();//Ordena la lista
};
template <typename T>
bool LinkedList<T>::empty()
{
  if (first->next=last)
    return true;
  else
    return false;

template <typename T>
T LinkedList<T>::get_front()
{
  return first->next->data;
}
template <typename T>
T LinkedList<T>::get_back()
{
  return last->before->data;
}
template <typename T>
void LinkedList<T>::push_front(T &elem)
{ 
  //creadon el nuevo nodo
  Node<T> *nd = new Node<T>;
  nd->data=elem;
  nd->before=first;
  nd->next=first->next;

  //cambiando los punteros 
  first->next->before=nd;
  first->next=elem;
}
template <typename T>
void LinkedList<T>::push_back(T &elem)
{
  //creadon el nuevo nodo
  Node<T> *nd = new Node<T>;
  nd->data=elem;
  nd->before=last->before;
  nd->next=last;

  //cambiando los punteros
  last->before->next= nd;
  last->before-> nd;
}
template <typename T>
void LinkedList<T>::pop_front()
{
  Node<T> *nd = first->next->next;

  delete first->next;

  //actualizacion
  first->next=nd;
  nd->before=first;
}
template <typename T>
void LinkedList<T>::pop_back()
{
  Node<T> *nd = last->before->before;

  delete last->before;

  //actualizacion
  last->before=nd;
  nd->next=last;
}
template <typename T>
void LinkedList<T>::reverse()
{
  Node<T> *nd = last->before;

  while(nd!=first)
  {
    cout<<nd->data<<" ";
    nd=nd->before; 
  }
}
template <typename T>
void LinkedList<T>::sort()
{
  Node<T> *nd = first->next;

  while(nd!=last)
  {
    cout<<nd->data<<" ";
    nd=nd->next; 
  }
}
#endif
