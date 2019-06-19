#include <iostream>
#include<stdlib.h>
using namespace std;

class nodo {
   public:
    nodo(int v, nodo *sig = NULL)
    {
       valor = v;
       siguiente = sig;
    }

   private:
    int valor;
    nodo *siguiente;

   friend class pila;
};



class pila {
   public:
    pila() : ultimo(NULL) {}

    void Push(int v);
    int Pop();

   private:
    nodo *ultimo;
};


void pila::Push(int v)
{
   nodo *nuevo;
   nuevo = new nodo(v, ultimo);
   ultimo = nuevo;
}

int pila::Pop()
{

   nodo *nodo;
   int v;

   if(!ultimo) return 0;
   nodo = ultimo;
   ultimo = nodo->siguiente;
   v = nodo->valor;
   delete nodo;
   return v;
}

int main()
{
   pila Pila;

   Pila.Push(1);
   Pila.Push(2);
   cout << "Pop() = " << Pila.Pop() << endl;
   Pila.Push(4);
   Pila.Push(3);
   cout << "Pop() = " << Pila.Pop() << endl;
   cout << "Pop() = " << Pila.Pop() << endl;
   Pila.Push(4);
   cout << "Pop() = " << Pila.Pop() << endl;
   cout << "Pop() = " << Pila.Pop() << endl;
   return 0;
}









//conclase.net
