#include <iostream>
#include "myObject.h"

int main(){

    TestObject testBoi = TestObject();

    testBoi.setMyPrivateData(1000);

    testBoi.hello();

    std::cout << testBoi.myPublicData << std::endl;

    testBoi.~TestObject();

    delete(&testBoi);

    //this doesn't do anything, testBoi does not exist
    testBoi.hello();


    return(0);
}