#include<iostream>
	using std::cout;
	using std::endl;

class Passby{

	protected:
	int x;
	int y;

	public:

	Passby(int xIn, int yIn): x(xIn), y(yIn){		
	}

	int getX(){
	  return x; 
	}

	void setX(int xIn){
		x = xIn;
	}

	/*
	Pass by Reference
	pass is a refernce to what is passed to the function it doesn't take a copy,
	and can't be changed to refer to any other object.
					
	Pass by value can't be null because it has to be constructed. Pass by reference 
	can't be null because it is reference to something. 					
	*/

	void moveXToZero(Passby & pass){
		pass.setX(0);
	}

};



int main(){

 Passby p(2,4);
 p.moveXToZero(p);
 cout<<p.getX();

}






