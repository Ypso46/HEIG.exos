#include "C.h"

C::C() {
    m_c = 0;
}

int C::getC() const {
    return m_c;
}

C::C(int x) : m_c(x) {};

std::ostream& operator<<(std::ostream& lhs, const C& add) {
    std::cout << "n = " << add.m_c;
    return lhs;
}

bool C::operator==(const C& rhs) const {
    return m_c == rhs.m_c;
}

bool C::operator!=(const C& rhs) const {
    return !(m_c == rhs.m_c);
}

C& C::operator++() {
    m_c = m_c + 1;
    return *this;
}

C C::operator++(int) {
    C temp = *this;
    m_c = m_c + 1;
    return temp;
}

C C::operator+(const C& rhs) {
    return C(rhs.m_c + m_c);
}

C& C::operator+=(const C& rhs) {
    this->m_c += rhs.m_c;
    return (*this);
}




