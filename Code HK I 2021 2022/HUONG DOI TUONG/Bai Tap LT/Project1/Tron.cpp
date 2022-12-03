#include "Tron.h"
#include <cmath>
Tron::Tron(float bk)
{
    this->banKinh = bk;
}

float Tron::chuVi()
{
    return 2 * M_PI * this->banKinh;
}

float Tron::dienTich()
{
    return M_PI * pow(this->banKinh, 2);
}
