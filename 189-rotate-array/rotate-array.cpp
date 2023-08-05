class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n= arr.size();
        k = k %n;
        vector<int> temp;

        for(int i = n-k; i < n ; i++){
            temp.push_back(arr[i]);
        }

        for(int i = n - k - 1; i >= 0; i--){
            arr[i + k] = arr[i];
        }

        int j = 0;
        for(int i = 0; i < temp.size();  i++){
            arr[i] = temp[j];
            j++;
        }



    }
};