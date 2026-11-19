class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> v(2);
        int s=0,c=0,i=0;
        int n=events.size();
        while(c<10 && i<n){
            if(events[i]=="W") c++;
            else if(events[i]=="WD" || events[i]=="NB") s++;
            else s+=stoi(events[i]);
            i++;
        }
        v[0]=s;
        v[1]=c;
        return v;
    }
};