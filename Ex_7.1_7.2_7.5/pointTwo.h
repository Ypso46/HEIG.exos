#ifndef EX_7_1_et_7_2_POINTTWO_H
#define EX_7_1_et_7_2_POINTTWO_H


#include "pointOne.h"

class PointTwo {
public:
    PointTwo();
    PointTwo(int x, int y);
    int abscisse() const;
    int ordonnee() const;
    PointTwo addition(PointTwo p4);

private:
    int m_x;
    int m_y;
};

#endif //EX_7_1_POINTTWO_H
