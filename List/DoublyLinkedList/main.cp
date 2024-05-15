#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    Node* prev = NULL;
    Node* next = NULL;
    
    int index;
    string name;
    
    Node(){}
    Node(int index, string name){
        this->index = index;
        this->name = name;
    }
    
};


class NodeManager
{
private :
    Node* header;
    Node* tail;
public:
    NodeManager()
    {
        this->header = new Node();
        this->tail = new Node();
        
        this->header->prev = this->header;
        this->header->next = this->tail;
        
        this->tail->prev = this->header;
        this->tail->next = this->tail;
    }
    
    Node* GetHeader(){return this -> header;}
    
    Node* GetTail(){return this -> tail;}
    
    void FirstInput(int index)
    {
        Node* node = new Node();
//        node
        
        this->header->next->prev = node;
        node->next = this->header->next;
        node->prev = this->header;
        this->header->next = node;
    }
    
    void LastInput()
    {
        Node* node = new Node();
        tail->prev->next = node;
        node->next = this->tail;
        node->prev = tail->prev;
        tail->prev = node;
    }
    
    Node* SelectNode()
    {
        //test
        return this->header;
    }
    void DeleteNode()
    {
        
    } 
    
//    ~NodeManager()
//    {
//        bool isTrue = false;
//        
//        while(!isTrue){
//            if(this->header->next != this->tail){
//                Node* selectNode = this->header->next;
//                this->header->next = this->header->next->next;
//                
//            }
//            else if(this->header->next == tail && this->tail->prev == header){
//                isTrue = true;
//            }
//        }
//        
//    }
    
};




int main(void)
{
    NodeManager *manager = new NodeManager();
    
    cout << "testModuel\n";
    return 0;
}
