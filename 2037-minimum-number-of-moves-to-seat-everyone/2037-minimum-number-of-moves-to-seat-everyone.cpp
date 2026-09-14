class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int c=0;
        sort(seats.begin(),seats.end());
        sort(begin(students),end(students));
        int n=seats.size();
        for(int i=0;i<n;i++){
            c+=abs(seats[i]-students[i]);
        }
        return c;
    }
};