class Student{
    public:
    int scores[5];
    void input(){
        for(int i=0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScore();
};
int Student::calculateTotalScore(){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=scores[i];
    }
    
    return sum;
    
}
