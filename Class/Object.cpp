// Accedently making object

#include<iostream>
using std::cout;
using std::endl;

class Object{

 protected:
 int x;
 int y;

 public:
 Object(int xIn, int yIn):x(xIn), y(yIn){
 }

 int getX(){
 	return x;
 }

 void setX(int xIn){
 	x = xIn;
 }
 

};

/*this creates an object X and set's object x to 0. Note if you 
 pass an object it will only copy that object and set that copy of that object to 0. but it will not change the object.*/

/*
A method is a member function of a class, but in C++ they are more commonly called member functions than methods (some programmers coming from other languages like Java call them methods).

A function is usually meant to mean a free-function, which is not the member of a class.

So while a member function is a function, a function is not necessarily a member function.
void blah() { } // function

class A {
    void blah() { } // member function (what would be a "method" in other languages)
};

blah(); // free functions (non-member functions) can be called like this

A ainst;
ainst.blah(); // member functions require an instance to invoke them on
*/

 void moveXToZero(Object x){
    x.setX(0);
 }

 


int main(){
  Object a(2,3);
  moveXToZero(a);
  cout<< a.getX();
}




