#ifndef EX_7_7_C_H
#define EX_7_7_C_H
#include <iostream>

class C {
    friend std::ostream& operator<<(std::ostream& lhs, const C& rhs);

public:
    C();
    C(int x);
    bool operator==(const C& rhs) const;
    bool operator!=(const C& rhs) const;
    C& operator++();
    C operator++(int);
    C operator+(const C& rhs);
    C& operator+=(const C& rhs);


    int getC() const;
private:
    int m_c;
};

#endif // EX_7_7_C_H