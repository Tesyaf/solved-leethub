class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for (int i = 0; i < names.size(); i++){
            for (int j = i+1 ; j < names.size(); j++){
                if (heights[i] < heights[j]){
                    string name = names[j];
                    names[j] = names[i];
                    names[i] = name;
                    int height = heights[j];
                    heights[j] = heights[i];
                    heights[i] = height;
                }
            }
        }
    return names;
    }
};