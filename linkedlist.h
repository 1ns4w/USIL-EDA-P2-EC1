#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include <stdio.h>  
#include <assert.h> 
using namespace std;

//KEVIN DE LAMA HUACCO 
template <typename T>
class linkedlist
{
  private:

  size_t tam = 0;
      struct Node  
      {
        T data;
        Node* next;
        Node* link;
        Node(T elem)
        {
          data = elem;
          next = nullptr;
        }
      };

      Node *head;

  public:
      linkedlist()
      {
        head = nullptr;
      }
      void push_front(T elem); //listo
      void push_posicion(T elem, T elem2); //listo
      void push_back(T elem); //listo

      void pop_front(); //listo
      void pop_posicion(T elem);//listo
      void pop_back(); //listo

      bool empty(); // listo
      void clear(); // listo
      void reverse(); // listo
      void printList();//listo

      T front(); // listo
      T back(); // falta - en proceso

      size_t size(ostream &os);//listo
      T &operator[](size_t pos); // listo

      void sort(); //listo
};
template <typename T>
void linkedlist<T>::sort()
{
  
}

template <typename T>
T &linkedlist<T>::operator[](size_t pos)
{
  Node *ptr=head;
  T x=0;
  while (x<pos)
  {
    ptr=ptr->next;
  x++;
  }
  return ptr->data;
}

template <typename T>
size_t linkedlist<T>::size(ostream &os){
  os<<" \nEl tamaño de la lista es: "<<tam<<endl;
  return tam; 
}

template <typename T>
void linkedlist<T>::reverse()
{
  Node *prev=nullptr;
  Node *next=nullptr;
  while(head != nullptr)
  {
    next=head->link;
    head->link=prev;
    prev=head;
    head=next;
  }
  head=prev;
}

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

template <typename T>
T linkedlist<T>::front()
{
  Node *first=head;
  if(head==nullptr)
  {
    cout<<"La lista esta vacia, no hay datos"<<endl;
    return 0;
  }
  else
  {
    first->data=head->data;
    cout<<"El primer numero es: "<<first->data<<endl;
    return first->data;
  }
  printList();
}
template <typename T>
T linkedlist<T>::back()
{
  Node *last= nullptr;
  if(head==nullptr)
  {
    head=last;
    cout<<"El ultimo elemento es NULL o esta vacio"<<endl;
    return 0;
  }
}

template <typename T>
bool linkedlist<T>::empty()
{
  if(head==nullptr)
  {
    cout<<"La lista esta vacia"<<endl;
    return true;
  }
  else
  {
    return false;
  }
}


template <typename T>
void linkedlist<T>::push_front(T elem)
{
  Node *newHead=new Node(elem);

  newHead->next=head;
  head=newHead;
  
  cout<<"head insertada con el dato: "<<elem<<endl;
  printList();
}
template <typename T>
void linkedlist<T>::push_posicion(T elem, T elem2)
{
  Node *newNode=new Node(elem);

  if(head==nullptr)
  {
    if(elem2==0)
    {
      head=newNode;
    }
    else
    {
      assert(head==nullptr && elem2==0);
    }
  }
  else
  {
    Node *temp = head;
    Node *prev = nullptr;
    for (int i=0; i<elem2; i++)
    {
      assert(temp != nullptr);
      prev=temp;
      temp=temp->next;
    }
    if(prev==nullptr)
    {
      head=newNode;
      head->next=temp;
    }
    else
    {
      newNode->next=prev->next;
      prev->next=newNode;
    }
  }
  cout<<"Posicion: "<<elem2<<" insertar con dato: "<<elem<<endl;
  printList();
}
template <typename T>
void linkedlist<T>::push_back(T elem)
{
  Node *newTail=new Node(elem);

  if(head==nullptr)
  {
    head=newTail;
  }
  else
  {
    Node *temp=head;
    while(temp->next != nullptr)
    {
      temp=temp->next;
    }
    temp->next=newTail;
  }
  cout<<"La cola insertada con dato: "<<elem<<endl;
  printList();
}
template <typename T>
void linkedlist<T>::pop_front()
{
  assert(head != nullptr);

  Node *temp=head;
  head=temp->next;
  delete temp;
  cout<<"Cabeza eliminada: "<<endl;
  printList();
}
template <typename T>
void linkedlist<T>::pop_posicion(T elem2)
{
  assert(head != nullptr);

  Node *temp=head;
  Node *prev=nullptr;

  for(T i=0; i<elem2; i++)
  {
    assert(temp != nullptr);
    prev=temp;
    temp=temp->next;
  }
  if(prev==nullptr)
  {
    head=temp->next;
  }
  else
  {
    prev->next=temp->next;
  }
  delete temp;

  cout<<"Posicion: "<<elem2<<" eliminado"<<endl;
  printList();
}
template <typename T>
void linkedlist<T>::pop_back()
{
  assert(head != nullptr);
  Node *temp=head;
  Node *prev=nullptr;
  while(temp->next != nullptr)
  {
    prev=temp;
    temp=temp->next;
  }
  if(prev==nullptr)
  {
    head = nullptr;
  }
  else
  {
    prev->next=temp->next;
  }
  delete temp;
  cout<<"Cola eliminada"<<endl;
  printList();
}
template <typename T>
void linkedlist<T>::printList()
{
  for(T i=0; i<1; i++)
  {
    cout<<'-';
  }
  cout<<endl;

  Node *temp=head;
  cout<<"lista"<<endl;
  while(temp != nullptr)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<endl;

  for(T i=0; i<1; i++)
  {
    cout<<'-';
  }
  cout<<endl;
}
#endif
