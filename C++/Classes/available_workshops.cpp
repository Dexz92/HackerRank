struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops{
    int n;
    Workshop* arr = new Workshop[100000];
};

Available_Workshops* initialize (int start_time[], int duration[], int n) {
    Available_Workshops* temp = new Available_Workshops;
    temp->n = n;
    for(int i = 0; i < n; ++i){
        (temp->arr[i]).start_time = start_time[i];
        (temp->arr[i]).duration = duration[i];
       (temp->arr[i]).end_time = start_time[i] + duration[i];
    }
    return temp;
}

bool end_time_compare(const pair<int,int>& a, const pair<int,int>& b){
    return a.second < b.second;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int max_count = 1;
    int min;
    int n = ptr->n;
    vector<pair<int,int>> store;
    for(int i = 0; i < n; ++i){
         store.push_back(pair<int, int>((ptr->arr[i]).start_time, (ptr->arr[i]).end_time));
    }
    sort(store.begin(),store.end(),end_time_compare);
    min = store[0].second;
    for(int i = 1; i < n; ++i){
        if(store[i].first >= min){
            ++max_count;
            min = store[i].second;
        }
    }
    return max_count;
}
