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
}ListNode* partition(ListNode* A, int B){

    int l =0;
    vector<int> v1,v2;
    ListNode* t = A;
    while(t!=NULL){
        if(t->val<B){
            v1.push_back(t->val);
        }
        else{
            v2.push_back(t->val);
        }
        t = t->next;
        l++;
    }
    ListNode* head = (ListNode*)malloc(sizeof(ListNode)); ;
    ListNode* curr = head;
    if(v1.size()&&v2.size()){
        head->val = v1[0];
        for(int i =1;i<v1.size();i++){
            ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val = v1[i];
            curr->next = temp;
            curr = temp;
        }
        for(int i =0;i<v2.size();i++){
            ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val = v2[i];
            curr->next = temp;
            curr = temp;
        }
        curr->next = NULL;
    }
    else if(v1.size()==0&&v2.size()!=0){
        head->val = v2[0];
        for(int i =1;i<v2.size();i++){
            ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val = v2[i];
            curr->next = temp;
            curr = temp;
        }
        curr->next = NULL;
    }
   
    return head;
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
    head = partition(head,x);
    printLL(head);
}