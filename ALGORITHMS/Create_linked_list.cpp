/*
    1. Create linked list
    2. Traverse: Print the linked list value's
*/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ll>          vll;

#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)

class Node {
public:
    int data;
    Node* next;
};

void printList(Node *head){
    while(head != NULL){
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        //Create Nodes of Linked List
        Node* head = NULL;
        Node* second = NULL;
        Node* third = NULL;

        //Allocates 3 nodes in the heap
        head = new Node();
        second = new Node();
        third = new Node();

        //Insert data in head and point to next position
        head->data = 1;
        head->next = second;

        //Insert data in second heap and point to next position
        second->data = 2;
        second->next = third;

        //Insert data in third heap and point to NULL
        third->data = 3;
        third->next = NULL;

        //Linked list Traversal
        printList(head);
 
    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}