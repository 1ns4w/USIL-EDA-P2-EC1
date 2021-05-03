#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include <iostream>
#include <stdio.h>  
using namespace std;


template <typename T>
class linkedlist
{
  private:
      size_t m_tam = 0;
      struct *Node  
      {
        T data;
        Node* next;
        Node* link;
        Node(T _elem)
        {
          data = _elem;
          next = _nullptr;
        }
      };

      Node *head;

  public:
      linkedlist()
      {
        head = nullptr;
        nail = nullptr;
      }
      T front(); // Retorna el elemento al comienzo
      T back(); // Retorna el elemento al final
      void push_front(T &elem); // Agrega un elemento al comienzo 
      void push_back(T &elem); // Agrega un elemento al final
      void pop_front(); // Remueve el elemento al comienzo pero no lo retorna
      void insert(T &elem);
      void insert2(T &elem);
      void internal_insert(RPNODE pPrev, T &elem);
      void pop_back(); // Remueve el elemento al final pero no lo retorna
      T &operator[](size_t pos); // Retorna el elemento en la posición indicada
      bool empty(); // Retorna si la lista está vacía o no
      size_t size(); // Retorna el tamaño de la lista 
      void clear(); // Elimina todos los elementos de la lista
      void sort(); // Ordena la lista
      void reverse(); // Revierte la lista

      size_t size(ostream &os);//listo
      T &operator[](size_t pos); // listo

      void sort(); //listo
};

  // Retorna el elemento al comienzo
  template <typename T>
  T linkedlist<T>::front()
  {
  Node *first=head;
  if(head==nullptr)
  {
    cout<<"List empty"<<endl;
  }
  else
    {
    first->data=head->data;
    cout<<"El primer elemtno es: "<<first->data<<endl;
    return first->data;
     }
  printList();
  }

  // Retorna el elemento al final
  template <typename T>
  T linkedlist<T>::back()
  {
   Node *nail= nullptr;
    if(head==nullptr)
   {
    head=last;
    cout<<"NULL"<<endl;
    }
    else
    {
      cout << nail;  
    }

  // Agrega un elemento al comienzo 
  template <typename T>
  void linkedlist<T>::push_front(T &&elem)
  {
  Node *newHead=new Node(elem);

  newHead->next=head;
  head=newHead;

  cout<<"Dato insertado satisfactoriamente al comienzo: "<<elem<< endl;
  printList();
  }
    
   // Agrega un elemento al final
   template <typename T>
  void linkedlist<T>::push_back(T &&elem)
  {
  Node *newTail=new Node(&&elem);

  if(head==nullptr)
  {
    head=newTail;
    cout<<"Dato insertado satisfactoriamente al final: "<<elem<< endl;
    printList();
  }

   // Remueve el elemento al comienzo pero no lo retorna
    template <typename T>
    void linkedlist<T>::pop_front()
   {
   assert(head != nullptr);

   Node *temp=head;
   head=temp->next;
   delete temp;
   cout<<"Cabeza eliminada: "<< endl;
   printList();
   }
    
    
 //delete
template <typename T>
void linkedlist<T>::clear()
{
  Node *temp=head;
  while(temp != nullptr)
  {
    temp=temp->link;
    free(head);
    head=temp;
  }
  return head;
}

//Lista vacia o no¿?
template <typename T>
bool linkedlist<T>::empty()
{
  if(head==nullptr)
  {
    cout<<"Empty list"<< endl;
    return true;
  }
  else
  {
    return false;
  }
}



//tamaño de lista
template <typename T>
size_t linkedlist<T>::size(ostream &os){
  os<<"  El tamaño de la lista es: "<< size_ll<< endl;
  return size_ll;
}

template <typename T>
T &LinkedList<T>::operator[](size_t pos)
{
  Node **pPrev = &m_pRoot;
  for(size_t i = 0; i < pos ; i++)
    pPrev = &(*pPrev)->getpNext();
  return (*pPrev)->getData();
} 
}
#endif
