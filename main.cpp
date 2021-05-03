#include <iostream>
#include "linkedlist.h"
#include "type.h"
using namespace std;

int main() {
  linkedlist<T1>kevin;

  for(T1 i=0; i<5; i++)
  {
    if(i%2)
    {
      kevin.push_front(i);
    }
    else
    {
      kevin.push_back(i);
    }
  }
  kevin.push_posicion(5, 2);
  kevin.pop_posicion(2);
  kevin.pop_front();
  kevin.pop_back();

  return 0;
}
