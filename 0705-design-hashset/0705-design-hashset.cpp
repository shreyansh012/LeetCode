class MyHashSet {
    bool hashset[10000001]={0};
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        hashset[key]=1;
    }
    
    void remove(int key) {
        hashset[key]=0;
    }
    
    bool contains(int key) {
        return hashset[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */