/// TC - o(1)
/// MC - o(1)
class RandomizedSet {
public:

        vector<int>storage;
        unordered_map<int,int>link;
    RandomizedSet() {
       
    }
    
    bool insert(int val) {
        if(link.count(val))
        return false;

        storage.push_back(val);
        link[val]= storage.size()-1;
        return true;
    }
    
    bool remove(int del_val) {
        if(link.count(del_val)==0)
        return false;

        int del_index = link[del_val];
        int last_index = storage.size()-1;
        swap(storage[del_index],storage[last_index]);
        link[storage[del_index]]= del_index;
        storage.pop_back();
        link.erase(del_val);

        return true;

    }
    
    int getRandom() {
        
        int rd_index = rand()%storage.size();
        return storage[rd_index];

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */