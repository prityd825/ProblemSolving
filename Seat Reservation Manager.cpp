Problem_link: https://leetcode.com/problems/seat-reservation-manager/
class SeatManager {

public:
set<int> seats;
int i=0;
    SeatManager(int n) {
        for(int i=0;i<n;i++){
            seats.insert(i+1);
        }

    }

    int reserve() {
        int x= *(seats.begin());
        seats.erase(x);
        return x;

    }

    void unreserve(int seatNumber) {
        seats.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
