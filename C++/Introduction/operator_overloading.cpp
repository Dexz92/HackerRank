class Matrix {
    public:
    Matrix operator+(const Matrix& other){
        Matrix sum(*this);
        for(unsigned int i = 0; i < sum.a.size(); ++i){
            for(unsigned int j = 0; j < sum.a[i].size(); ++j){
                sum.a[i][j] += other.a[i][j];
            }
        }
        return sum;
    }
    vector<vector<int>> a;
};
