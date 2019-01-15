#include <iostream>
	using std::cout;
	using std::endl;

class ErrorExample{

	int main(){
		Coordinate a(4,2);
		Coordinate b; // this code won't compile because it looks for default constructor coordinate ()
		
		//implicit default constructor calls

	vector <coordinate> coords (2);// it makes a vector of size 2. Use the default constructor for each Coordinate. only works if there is a default constructor
	coords [0] = Coordinate(4,2);//replace  the coordinates in the vectors wtih these ones anyway.  
	coords [1] = Coordinate(2,3);// note if your making object c++ look if you have constructed an object.

	//Alternative Solution

	vector<Coordinate> coords; // make an empty vector(size 0). Don't pass anything to the Constructor.
	//There is nothing trying to default construct if there isn't anything.
	coords.push_back(Coordinate(4,2));// add an extra Coordinate to the vector (size now 1)
	coords.push_back(Coordinate(4,3));//add another (size now 2)


	// More error tips

	protected:

	Coordinate start;
	Coordinate end;

	public:

		Journey (Coordinate startIn, Coordinate endIn):start(startIn), end(endIn){
			// if you put member variable here you will error because when c++ tries to 
			// get the variable to be initialised and looks for default constructor.
			// if you have an mem variable which is an object and don't have a default constructor than you have to use an initialisation syntax.
		}

	}
}