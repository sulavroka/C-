
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

int main(){
	
	Coordinate a(4, -3);
	Coordinate b(5,-2);

	cout << a.getX()<< endl;

}