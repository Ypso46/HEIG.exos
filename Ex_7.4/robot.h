#ifndef EX_7_4_ROBOT_H
#define EX_7_4_ROBOT_H

class Robot {
public:
    Robot(int x = 0);
    void deplacer(int x);
    int getPosition();
    void demiTour();
private:
    int m_position;
    int m_mouvement = 1;
};

#endif //EX_7_4_ROBOT_H