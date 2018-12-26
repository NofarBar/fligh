#include "Expression.h"

#ifndef PROJECTNUM1_NEG_H
#define PROJECTNUM1_NEG_H


class Neg : public Expression {
    //Members
    Expression *negativeNumber;
public:

    //Constructor
    Neg(Expression *negativeNumber);

    /**
     * calculate negative by map
     */
     virtual double calculate(map<string, double> &assignment);


    ~Neg(){
        delete this;
    }

};


#endif //PROJECTNUM1_NEG_H
