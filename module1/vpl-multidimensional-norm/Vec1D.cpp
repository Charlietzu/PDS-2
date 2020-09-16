#include "Vec1D.hpp"

double Vec1D::get_norm() const {
    return this->_x;
}

std::string Vec1D::to_string() const {
    std::string pontoX = std::to_string(this->_x);
    return pontoX;
}