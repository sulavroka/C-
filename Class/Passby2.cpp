#include<iostream>
	using std:: cout;
	using std:: endl;


class Coordinate{
	
	protected:
	int x;
	int y;

	public:
	Coordinate(int xIn, int yIn): x(xIn), y(yIn){
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

 	//return by reference	taking a copy from the journey class
 	Coordinate getStart(){
 	 return start;
 	}

 };

 int main(){
 
 Coordinate a(6,2);
 Coordinate b(3,8);

 Journey myJourney(a,b);  

 Coordinate startsfrom = myJourney.getStart();
 startsfrom.setX(0);

 cout<<startsfrom.getX()<<endl;
 cout<<myJourney.getStart().getX()<<endl;

 }

