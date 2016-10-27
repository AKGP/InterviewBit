#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;

typedef struct node{
	int val;
	struct node* next;
}Node;

Node* addNode(Node* head,Node* newNode){
	if(head==NULL){
		head = newNode;
		return head;
	}
	else{
		Node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		return head;
	}
}
void printLL(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp = temp->next;
	}
}
Node* reverse(Node*A){
	Node* prev = NULL;
	Node* curr = A;
	Node* next = A->next;
	if(A==NULL){
		return A;
	}
	while(curr->next!=NULL){
		curr->next = prev;
		prev = curr;
		curr = next;
		next = next->next;
	}
	curr->next = prev;
	A = curr;
	// printLL(A);
	return A;
} 
void detectPalindrom(Node* A){
	Node* t1 = A;
	Node* new_head = (Node*)malloc(sizeof(Node));
	new_head->val = t1->val;
	t1 = t1->next;
	Node* curr = new_head;
	while(t1!=NULL){
		Node* temp = (Node*)malloc(sizeof(Node));
		temp->val = t1->val;
		curr->next = temp;
		curr = temp;
		t1 = t1->next;
	}
	curr->next = NULL;
	Node* T = reverse(A);
	Node* t2 = T;
	t1 = new_head;
	while(t2!=NULL){
		if(t2->val!=t1->val){
			return 0;
		}
		t2 = t2->next;
		t1 = t1->next;
	}
	if(t1==NULL){
		return 1;
	}
}
int main(){
	Node *head = NULL;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		int val;
		cin>>val;
		Node* newNode = new Node();
		newNode->val = val;
		head = addNode(head,newNode);
	}
	detectPalindrom(head);
	return 0;
}