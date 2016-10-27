#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};
void printLL(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
}
ListNode* addNode(ListNode* head, int val){
    if(head==NULL){
        head = new ListNode(val);
    }
    else{
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new ListNode(val);
    }
    return head;
}ListNode* insertionSort(ListNode* A){
    ListNode* curr = A;
    ListNode* ins = A;
    while(ins->next){
        curr = ins->next;
        while(curr){
            if(curr->val<ins->val){
                int temp = curr->val;
                curr->val = ins->val;
                ins->val = temp;
            }
            curr = curr->next;
        }
        ins = ins->next;
    }
    return A;
}


int main(){
    ListNode *head = NULL;
     // = new ListNode();
    int n,x;
    cin>>n>>x;
    for(int i =0;i<n;i++){
        int val;
        cin>>val;
        head = addNode(head,val);
    }
    // printLL(head);
    head = insertionSort(head);
    printLL(head);
}