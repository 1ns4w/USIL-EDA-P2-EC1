#include <iostream>
#include "linkedlist.h"
#include "type.h"
using namespace std;

int main() {
  LinkedList<E> list;

  for(int i = 0; i<10; i++){
    list.push_back(E(i));
  }

  cout<<"Front: "<<list.front()<<endl;
  cout<<"Back: "<<list.back()<<endl;

  cout<<"Antes de push_front(): ";
  list.show();
  list.push_front(10);
  cout<<"Despues de push_front(): ";
  list.show();

  cout<<"Despues de pop_front(): ";
  list.pop_front();
  list.show();

  cout<<"Despues de pop_back(): ";
  list.pop_back();
  list.show();

  cout<<"list[3]: "<<list[3]<<endl;

  cout<<"esta vacio?: " << list.empty()<<endl;

  cout<<"size: "<<list.size()<<endl;

  cout<<"Antes de clear(): ";
  list.show();
  list.clear();
  cout<<"Despues de clear(): ";
  list.show();
  cout<<"esta vacio?: "<< list.empty();
  list.show();

  return 0;
}
