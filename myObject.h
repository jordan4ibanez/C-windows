#pragma once

class TestObject{
    private:

    int myPrivateData = 0;

    public:

    int myPublicData;

    TestObject();

    ~TestObject();

    void hello();

    void setMyPrivateData(int input);

};