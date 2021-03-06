#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>

using namespace std;

/**
    CLASS      :    IF-42-04
    NAME       :    HAURA ATHAYA SALKA
    STUDENT ID :    1301183454
**/

struct mytype
{
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - string name
            - integer rank
            - float score
    */
    //=================================================
    // YOUR CODE STARTS HERE
    int id;
    string name;
    int ranking;
    float score;
    // YOUR CODE ENDS HERE
    //=================================================
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
