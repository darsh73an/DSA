class Solution {
public:
    void pb(deque<int>& dq, int x) {
        dq.push_back(x);
    }

    void ppb(deque<int>& dq) {
        if (!dq.empty())
            dq.pop_back();
    }

    int front_dq(deque<int>& dq) {
        if (dq.empty())
            return -1;
        return dq.front();
    }

    void pf(deque<int>& dq, int x) {
        dq.push_front(x);
    }
};