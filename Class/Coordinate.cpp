
#include<iostream>
	using std::cout;	
	using std::endl;

class Coordinate{
	
	protected: 
		 int x;
		 int y;

	public :
	     Coordinate(int xIn, int yIn):
	       x(xIn), y(yIn){
		 }

		 int getX(){
		 	return x;
		 }

};


class Journey{

	protected:	
		Coordinate start;
		Coordinate end; 

	public: 

		Journey(){
		}

};

int main(){
	//Copying Objects
	Coordinate a(4, -3);
	Coordinate b = a;

	cout << b.getX()<< endl;

	/*
	This won't compile as there is no default Constructor
		Coordinate a(4,2);
		Coordinate b;
	*/


}