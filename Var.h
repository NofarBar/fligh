#include "Expression.h"

#ifndef PROJECTNUM1_VAR_H
#define PROJECTNUM1_VAR_H

class Var : public Expression {

    string var;

public:
    //Constructur
    Var(string var);

    /**
     * The function calculate the expression with a given symbol map
     */
    double calculate(map<string, double> &assignment);

    ~Var() {
        delete this;
    }
};


#endif //PROJECTNUM1_VAR_H
