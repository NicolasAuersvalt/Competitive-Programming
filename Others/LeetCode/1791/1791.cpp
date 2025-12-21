class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);


        unordered_map<int, int> count;

        int qtd = edges.size();

        for(auto l:edges){
            count[l[0]]++;
            count[l[1]]++;
        }

        for(auto t:count){
            if(t.second == qtd)
                return t.first;
        }
        return -1;


    }
};