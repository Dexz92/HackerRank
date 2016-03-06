#include <iostream>
#include <sstream>
using namespace std;

class Student{
  public:
    int get_age() const{
        return age;
    }
    void set_age(int a){
        age = a;
    }
    string get_first_name() const{
        return first_name;
    }
    void set_first_name(string first){
        first_name = first;
    }
    string get_last_name() const{
        return last_name;
    }
    void set_last_name(string last){
        last_name = last;
    }
    int get_standard() const {
        return standard;
    }
    void set_standard(int s){
        standard = s;
    }
    string to_string() const {
        stringstream ss;
        ss << age << ","<< first_name << "," << last_name << ","<< standard;
        string temp = ss.str();
        return temp;
    }
  private:
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
