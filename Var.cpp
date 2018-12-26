#include "Var.h"

//Constructor
Vr::Var(string stringVar) {
    this->var = stringVar;
}

/**
* The function calculate the expression with a given symbol map
*/
double Var::calculate(map<string, double> &assignment) {
    // check if the map contain the var and return thr result
    if (assignment.count(this->var)) {
        return (assignment.find(this->var)->second);
    } else {
        // otherwise,  throw exception
        throw "ERROR - no matching variavle";
    }
}
