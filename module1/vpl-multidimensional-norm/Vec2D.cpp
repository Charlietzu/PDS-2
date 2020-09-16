#include "Vec2D.hpp"

double Vec2D::get_norm() const {
    return sqrt(this->_x*this->_x + this->_y*this->_y);
}

std::string Vec2D::to_string() const {
    std::string pontoX = std::to_string(this->_x);
    std::string pontoY = std::to_string(this->_y);
    std::string retorno = pontoX + " " + pontoY;

    return retorno;
}