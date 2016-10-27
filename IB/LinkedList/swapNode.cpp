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
}
void print(vector<int>&v){
	int n = v.size();
	for(int i =0;i<n;i++){
		cout<<v[i]<<" ";
	}
}
void swapNodePairs(ListNode* A){
   ListNode* t = A,*x = A;
   // if(t->next==NULL){
   //  return t;
   // }
   int l = 0;
   while(x){
    x = x->next;
    l++;
   }
   ListNode* t1 = t;
   ListNode* t2 = t->next;
   while(t->next&&t2&&t2->next){ 
    int temp = t1->val;
    t1->val = t2->val;
    t2->val = temp;
    t1 = t2->next;
    t2 = t1->next;
    t = t->next;
   }
    if(l%2==0){
        int temp = t1->val;
        t1->val = t2->val;
        t2->val = temp;
    }
   printLL(A);
   cout<<endl;
}
int main(){
	ListNode *head1 = NULL;
	ListNode *head;
	int n1,n2;
	cin>>n1;
	for(int i =0;i<n1;i++){
		int val;
		cin>>val;
		head1 = addNode(head1,val);
	}
	swapNodePairs(head1);
}