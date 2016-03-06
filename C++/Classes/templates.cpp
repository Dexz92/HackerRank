template <typename T>
class AddElements {
    public:
            AddElements(const T& value) : value(value) {
            }
            T add(const T& other){
                return value + other;
            }
    private:
            T value;
};

template <>
class AddElements<string> {
    public:
           AddElements(const string& value) : value(value){

           }
           string concatenate (const string& other){
               return value + other;
           }
    private:
            string value;
};
