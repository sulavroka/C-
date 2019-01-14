//
//  globalFunction.cpp
//  C++ Tutorial
//
//  Created by Tekendra Roka on 16/11/2018.
//  Copyright © 2018 Tekendra Roka. All rights reserved.
//
#include <stdio.h>
#include <iostream>
using std ::cout;
using std ::endl;
// always define global function at the top you have to see them before you use them
void printAnswer(int x);

int main(){
    printAnswer(43);
    return 0;
}

void printAnswer(int x){
    cout <<"hello";
    cout << x;
}

