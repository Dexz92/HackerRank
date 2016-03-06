ostream& operator<<(ostream& os, const Complex& c){
    os << c.a << "+i" << c.b;
    return os;
}

Complex operator+(const Complex& lhs, const Complex& rhs){
    Complex temp;
    temp.a = lhs.a + rhs.a;
    temp.b = lhs.b + rhs.b;
    return temp;
}
