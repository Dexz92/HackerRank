class Student{
    int score = 0;
    public:
    void input(){
        for(int i = 0; i != 5; ++i){
            int temp_score;
            cin >> temp_score;
            score += temp_score;
        }
    }
    int calculateTotalScore(){
        return score;
    }
};
