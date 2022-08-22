#include <bits/stdc++.h>
#include<utility>
#include<vector>
#include<set>
#include<set>
#include<unordered_set>
#include<unordered_map>
#define all(s) s.begin(),s.end()
#define allr(i) i.rbegin(),i.rend()
#define sz(s) (int)(s.size())
#define ceil(x,y) ((x+y-1)/y)
#define F first
#define S second
#define pb push_back
#define pop pop_back
#define vi vector<int>
#define si set<int>
#define uns unordered_set<int>
#define pq_max priority_queue<int>
#define pq_min priorrity_queue<int,pqi,greater<int>>
#define khaled_kasmeri ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef  long long ll;
typedef long double ld;
typedef  double dd;
using namespace std;
class linked_list{
    struct Node{
        int date ;
        Node * next ;
    };
    Node * head = NULL ;
public:
    void appeand(int val){
        Node * newnode = new Node ;
        newnode -> date = val ;
        newnode -> next = NULL;
        // if head is empty
        if( head == NULL){
            head = newnode ;
        }
        // if head not empty
        else{
    // create pointer to node to loop nodes of list
          Node * temp = head ;
          while( temp ->next != NULL){
                temp = temp -> next ;
          }
          temp->next = newnode ;
        }

    }
    void remove_element(int val){
        if(head == NULL)
            return ;
        Node*prev,*temp;
        prev = temp = head ;
        // if element you want to delete in the first
        if( temp ->date == val){
          head = temp->next;
          delete temp;
        }
        // if element are in any position not in first
        while (temp -> date != val && temp!=NULL){
                prev = temp;
               temp = temp -> next ;
               delete temp  ;
        }
        // if user enter element not found in linked_list
        if( temp == NULL)
            cout <<"element you want to delete " <<endl;
        // or return ;
        // if element found in linked_list
        else{
            prev -> next = temp -> next ;
            delete temp ;
        }
    }
    void Display(){
        Node *temp = head ;
        while( temp != NULL){
            cout <<"Value is : " <<  temp->date <<endl;
            temp = temp->next ;
        }
    }
    void insert_at_pos( int val , int pos  ){
        Node* newnode = new Node;
        newnode->date = val;
        newnode->next = NULL;
        // if pos is 0 or in first
        if( pos == 0 ){
        newnode->next = head ;
        head = newnode ;
        return ;
        }
        Node *temp = head ;
        for( int i = 0 ;i < pos -1 ; i++){
                // this condition tp prevent if temp-next arrive to null break to preevent code from error
                if(temp->next == NULL)
                break;
            temp = temp->next;
        }
        newnode ->next = temp->next ;
        temp->next = newnode ;
    }
};
int main(){
    khaled_kasmeri ;
    linked_list ll ;
    ll.appeand(10) ;
    ll.appeand(20) ;
     ll.appeand(30) ;
      ll.appeand(40) ;
       ll.appeand(50) ;
       ll.insert_at_pos(60 , 6 );
       ll.Display();

}
