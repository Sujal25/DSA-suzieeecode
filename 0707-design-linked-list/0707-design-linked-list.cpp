class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };
    
    Node* head;  
    int size;   
public:
    MyLinkedList() {
        head=new Node(0);
        size=0;
        
    }
    
    int get(int index) {
        if(index<0||index>=size) return -1;
        Node* curr=head->next;
        for(int i=0;i<index;i++){
            curr=curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
         if(index<0||index>size) return ;
        Node* curr=head;
        for(int i=0;i<index;i++){
            curr=curr->next;
        }
        Node* temp=curr->next;
        Node* node=new Node(val);
        curr->next=node;
        node->next=temp;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        Node* prev = head;
        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }
        Node* toDelete = prev->next;
        prev->next = toDelete->next;
        delete toDelete;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */