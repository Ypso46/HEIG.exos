#ifndef EX_7_1_et_7_2_POINTONE_H
#define EX_7_1_et_7_2_POINTONE_H


class PointOne {
public:
    PointOne();
    PointOne(float x, float y);
    void afficher() const;
    void deplacer(float x, float y);
private:
    float m_x;
    float m_y;
};


#endif //EX_7_1_et_7_2_POINTONE_H
