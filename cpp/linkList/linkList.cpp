#include <iostream>


using namespace std;

struct node
{
    int num;
    struct node *link;
}*p;

int main () {

    node *root;
    root = new node;
    root -> num = 4;
    root -> link = p;
    p = root;

    node *branch;
    branch = new node;
    root -> link = branch;
    branch -> link = NULL;
    branch -> num = 6;

    node *branch1;
    branch1 = new node;
    branch -> link = branch1;    
    branch1 -> link = NULL;
    branch1 -> num=11;

    node *branch2;
    branch2 = new node;
    branch1 -> link = branch2;
    branch2 -> link = NULL;
    branch2 -> num = 8;
    

    node *q;
    for(q=p; q!=NULL; q=q->link)
    {
        cout<<q->num;
        cout<<endl; 
    }
    return 0;

}


