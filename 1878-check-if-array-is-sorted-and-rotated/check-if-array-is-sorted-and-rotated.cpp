class Solution {
public:
    bool check(vector<int>& a) {
        int n = a.size();
        int count = 0;


        for(int i = 1; i < n; i++){
            if(a[i-1] > a[i]){
                count++;
            }

            
        }

        if(a[n-1] > a[0])
                        count++;

                        
        if(count <= 1)
            return true;
        else
            return false;
    }
};