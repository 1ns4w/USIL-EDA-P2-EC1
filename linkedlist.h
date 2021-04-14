#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
using namespace std;

template <typename T>
class Node{
  public:
    T key;
    T data;
    Node* next;

    Node(){
      key=0;
      data=0;
      next= NULL;
    }
    Node(int k, int d){
      key = k;
      data = d;
    }

};

//fatla terminar
class LinkedList{
  public:
    Node* head;

    LinkedList(){
      head = NULL;
    }
    LinkedList(Node *n){
      head=n;
    }
    Node* nodeExists(int k);

    Node* temp =NULL;

    Node* ptr = head;
}





// Comments #2
template <typename T>
void LinkedList<T>::front(T &elem)
{

}

// Comments #3
template <typename T>
T LinkedList<T>::back()
{

}

#endif
