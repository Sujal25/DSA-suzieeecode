class ProductOfNumbers {
public:vector<int> pro;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        pro.push_back(num);
    }
    
    int getProduct(int k) {
        int n=pro.size()-1;
        int p=1;
        while(k--){
            p*=pro[n];
            n--;
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */