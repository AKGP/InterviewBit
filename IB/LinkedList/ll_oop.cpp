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
ListNode* RemoveDuplicate(ListNode* head){
	ListNode* temp = head;
	vector<int> v;
	while(temp!=NULL){
		int flag = 0;
		if(v.empty()){
			v.push_back(temp->val);
		}
		else if(!v.empty()){
			if(v[v.size()-1]!=temp->val){
				v.push_back(temp->val);
			}
			else if(v[v.size()-1]==temp->val){
				flag = 1;
				while(temp!=NULL&&v[v.size()-1]==temp->val){
					temp = temp->next;
				}
				if(v.size()){
					v.pop_back();
				}
			}
		}
		if(flag==0){
			temp = temp->next;
		}
	}
	// cout<<v.size()<<endl;
	ListNode* curr = head;
	if(v.size()){
		curr->val = v[0];
		for(int i =1;i<v.size();i++){
			ListNode* t = (ListNode*)malloc(sizeof(ListNode));
			t->val = v[i];
			// cout<<v[i]<<endl;
			curr->next = t;
			curr = t;
		}
		curr->next = NULL;
	}
	else{
		head = NULL;
	}
	
	return head;
}
int main(){
	ListNode *head = NULL;
	 // = new ListNode();
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		int val;
		cin>>val;
		head = addNode(head,val);
	}
	// printLL(head);
	head = RemoveDuplicate(head);
	printLL(head);
}