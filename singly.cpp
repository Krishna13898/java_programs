#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void create(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

      void disp()
   {
       node *temp=head;
    cout<<"List is ";

       while(temp!=NULL)
       {
           cout<<temp->data<<" ";
           temp=temp->next;
       }
            
   }
    void search(int val)
{
    int pos = 0;
    bool flag = false;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    
    struct node *s;
    s = head;
    while (s != NULL)
    {
        pos++;
        if (s->data == val)
        {
            flag = true;
            cout<<" \n Element "<<val<<" is found at position "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"\n Element "<<val<<" not found in the list"<<endl;  
}
 

};
int main()
{
    linked_list a;
    a.create(2);
    a.create(3);
    a.create(4);
    a.create(5);

    a.disp();
    a.search(4);
    return 0;
}
