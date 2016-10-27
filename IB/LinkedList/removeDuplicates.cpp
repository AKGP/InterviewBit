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
void deleteNode(){

}
Node* removeDup(Node *head){

}

int main(){
	Node *head = NULL;
	Node* newNode = new Node();
	newNode->val = 1;
	newNode->next = NULL;
	Node* newNode2 = new Node();
	newNode2->val = 2;
	newNode2->next = NULL;
	Node* newNode3 = new Node();
	newNode3->val = 1;
	newNode3->next = NULL;
	head = addNode(head, newNode);
	head = addNode(head, newNode2);
	head = addNode(head, newNode3);
	head = removeDup(head);
}