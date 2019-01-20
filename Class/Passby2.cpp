#include<iostream>
	using std:: cout;
	using std:: endl;


class Coordinate{
	
	protected:
	int x;
	int y;

	public:
	Coordinate(int xIn, int yIn) x(xIn), y(yIn):{
	}

	int getX(){
		return x;
	}

	void setX(int xIn){
		x = xIn;
	}
};

 
 class Journey{

 	private:
	Coordinate start;
	Coordinate end;

 	public:
 	Journey(Coordinate startIn, Coordinate endIn): start(startIn), end(endIn){
 	}

 	//return by reference	
 	Coordinate & getStart(){
 	 return start;
 	}

 };

 int main(){
 
 Coordinate a(4,2);
 Coordinate b(3,4);

 Journey myJourney(a,b);  

 Coordinate startsfrom = myJourney.getStart();


 }

