#include<iostream>
using std::cout;
using std::endl;

class ComparingObjects{

protected:
 int x;
 int y;

public:

 ComparingObjects(int xIn, int yIn) :x(xIn), y(yIn){
 }
 
 int getX(){
 	return x;
 }

 int getY(){
 	return y;
 }


 bool operator ==(ComparingObjects other){
 	return(x ==other.x && y == other.y);
 }

};

int main(){

 ComparingObjects a(2,3);
 ComparingObjects b(2,3);

 if(a == b){
 	cout<<"a equals b";
 }

}

