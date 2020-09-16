#include "Vec3D.hpp"

double Vec3D::get_norm() const{
    return sqrt(this->_x * this->_x + this->_y * this->_y + this->_z * this->_z);
}

std::string Vec3D::to_string() const {
    std::string pontoX = std::to_string(this->_x);
    std::string pontoY = std::to_string(this->_y);
    std::string pontoZ = std::to_string(this->_z);
    std::string retorno = pontoX + " " + pontoY + " " + pontoZ;

    return retorno;
}