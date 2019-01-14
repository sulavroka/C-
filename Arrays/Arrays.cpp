//
//  globalFunction.cpp
//  C++ Tutorial
//
//  Created by Tekendra Roka on 16/11/2018.
//  Copyright © 2018 Tekendra Roka. All rights reserved.
//
#include <vector>
#include <iostream>
using std ::vector;
using std ::cout;
using std ::endl;


int main(){
    //creating vector size int 10
	vector <int> number(10);

	for(int i =0; i<10; ++i){
		number[i] = i;
		cout<<number[i]<< endl;
	}

    
}


