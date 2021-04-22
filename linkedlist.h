#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

// #include
#include <vector>
using namespace std;

template <typename T>
class LinkedList
{
  private:
  // members here
  size_t list_size;
  vector<T> list_data;

  public:
    //Constructor
    LinkedList(){ list_size = 0; }
    ~LinkedList(){}
    T front(); // Retorna el elemento al comienzo
    T back(); // Retorna el elemento al final
    void push_front(T &&elem); // Agrega un elemento al comienzo 
    void push_back(T &&elem); // Agrega un elemento al final
    void pop_front(); // Remueve el elemento al comienzo pero no lo retorna
    void pop_back(); // Remueve el elemento al final pero no lo retorna
    T operator[](size_t pos); // Retorna el elemento en la posición indicada
    bool empty(); // Retorna si la lista está vacía o no
    size_t size(); // Retorna el tamaño de la lista 
    void clear(); // Elimina todos los elementos de la lista
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista
    void show(); //Muestra la lista
};

template <typename T>
T LinkedList<T>::front(){
  return list_data[0];
}

template <typename T>
T LinkedList<T>::back(){
  return list_data[list_size-1];
}

template <typename T>
void LinkedList<T>::push_front(T &&elem){
  list_data.insert(list_data.begin(), elem);
  list_size++;
}

template <typename T>
void LinkedList<T>::push_back(T &&elem)
{
  list_data.insert(list_data.end(), elem);
  list_size++;
}

template <typename T>
void LinkedList<T>::pop_front(){
  list_data.erase(list_data.begin());
  list_size--;
}

template <typename T>
void LinkedList<T>::pop_back(){
  list_data.erase(list_data.end()-1);
  list_size--;
}

template <typename T>
T LinkedList<T>::operator[](size_t pos){
  return list_data[pos];
}

template <typename T>
bool LinkedList<T>::empty(){
  return list_data.empty();
}

template <typename T>
size_t LinkedList<T>::size(){
  return list_size;
}

template <typename T>
void LinkedList<T>::clear(){
  while(list_size > 0){
    pop_back();
  }
}

template <typename T>
void LinkedList<T>::sort(){
  //Ordena la lista
}

template <typename T>
void LinkedList<T>::show(){
  for(int i =0 ; i<list_size; i++){
    if(i < list_size - 1){
     cout<<list_data[i]<<",";
    } else{
      cout<<list_data[i];
    }
  }
  cout<<endl;
}
#endif
