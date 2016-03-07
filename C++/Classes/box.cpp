class Box {
    public:
        int l = 0;
        int b = 0;
        int h = 0;

        Box(){
            ++BoxesCreated;
        }
        Box(int l_a,int b_a, int h_a) : l(l_a), b(b_a), h(h_a) {
            ++BoxesCreated;
        }
        Box(const Box& rhs){
            l = rhs.l;
            b = rhs.b;
            h = rhs.h;
            ++BoxesCreated;
        }
        ~Box(){
            ++BoxesDestroyed;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return (long long)l * h * b;
        }
        bool operator<(Box &b) {
        if(this->l != b.l) return this->l < b.l;
        if(this->b != b.b) return this->b < b.b;
        return this->h < b.h;
    }

};

ostream& operator<<(ostream& os, const Box b) {
    os << b.l << " " << b.b << " " << b.h;
    return os;
}
