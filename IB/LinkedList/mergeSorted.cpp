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
ListNode* merger(ListNode* head1, ListNode* head2){
	ListNode* t1 = head1;
	ListNode* t2 = head2;
	ListNode* head = NULL;
	ListNode* curr;
	curr = head;
	
}
int main(){
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	ListNode *head;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		int val;
		cin>>val;
		head1 = addNode(head1,val);
	}
	for(int i =0;i<n;i++){
		int val;
		cin>>val;
		head2 = addNode(head2,val);
	}
	printLL(head1);
	printLL(head2);
	head = merger(head1,head2);
	printLL(head);
}