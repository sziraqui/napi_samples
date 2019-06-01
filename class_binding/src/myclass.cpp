#include <math.h>
#include "myclass.h"

ActualElog::ActualElog(double num) {
    this->value = num;
}

double ActualElog::Exp() {
    this->value = exp(this->value);
    return this->value;
}

double ActualElog::Log() {
    this->value = log(this->value);
    return this->value;
}