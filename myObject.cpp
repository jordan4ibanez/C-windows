#include <iostream>
#include "myObject.h"

TestObject::TestObject(){

}

TestObject::~TestObject(){

}

void TestObject::hello(){
    std::cout << this->myPrivateData << std::endl;
}


void TestObject::setMyPrivateData(int input){
    this->myPrivateData = input;
}