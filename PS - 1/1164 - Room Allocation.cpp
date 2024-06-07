#include <bits/stdc++.h>
using namespace std;

struct event{
    int day;
    bool arrive;
    int customer;
};

bool compare(event &e1, event &e2) {
    if (e1.day == e2.day) return e1.arrive > e2.arrive;
    return e1.day < e2.day;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n), d(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> d[i];

    vector<event> events;
    for (int i = 0; i < n; i++) {
        events.push_back({a[i], true, i+1});
        events.push_back({d[i], false, i+1});
    }

    sort(events.begin(), events.end(), compare);

    priority_queue<int, vector<int>, greater<int> > rooms;
    vector<int> hotel(n+1);
    int max = 0;

    for(auto i : events){
      if (i.arrive){
          int room_no;
            if (!rooms.empty()){
                room_no = rooms.top();
                rooms.pop();
            } 
            else room_no = (++max);
            hotel[i.customer] = room_no;
        } 
      else rooms.push(hotel[i.customer]);

    }

    cout << max << '\n';
    hotel.erase(hotel.begin());
    for(int i : hotel) cout << i << ' ';

    return 0;
}
