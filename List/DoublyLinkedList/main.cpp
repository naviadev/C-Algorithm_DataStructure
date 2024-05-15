#include <iostream>
#include <string>

using namespace std;

class Node
{
private:
    Node* prev;
    Node* next;
};


class NodeManager
{
private :
    Node header;
    Node tail;
public:
    Nodemanager()
    {
            
    }
};




int main(void)
{
    NodeManager *manager = new NodeManager();
    
    return 0;
}
