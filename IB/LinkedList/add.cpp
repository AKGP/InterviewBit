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
void addTwoNumbers(ListNode* A, ListNode* B){
	 int n1=0,n2=0;
    vector<int> v1,v2,v;
    ListNode* t1 = A, *t2 = B;
    while(t1!=NULL){
        v1.push_back(t1->val);
        t1=t1->next;
    }
    while(t2!=NULL){
        v2.push_back(t2->val);
        t2=t2->next;
    }
    int l1 = min(v1.size(),v2.size());
    int l2 = max(v1.size(),v2.size());
    int c = 0,r;
    for(int i =0;i<l1;i++){
        r = c+v1[i]+v2[i];
        if(r>=10){
            c = 1;
            v.push_back(r-10);
        }
        else{
            v.push_back(r);
            c = 0;
        }
    }
    if(v1.size()>v2.size()){
        for(int i =l1;i<l2;i++){
        	r = v1[i]+c;
        	if(r>=10){
				v.push_back(r - 10);
				c = 1;
        	}
        	else{
        		v.push_back(r);
        		c = 0;
        	}
        }
    }
    else{
         for(int i =l1;i<l2;i++){
        	r = v2[i]+c;
        	if(r>=10){
				v.push_back(r - 10);
				c = 1;
        	}
        	else{
        		v.push_back(r);
        		c = 0;
        	}
        }
    }
    if(c==1){
    	v.push_back(1);
    }
    print(v);
    ListNode* head; 
    if(v.size()){
    	head = (ListNode*)malloc(sizeof(ListNode));
    	head->val = v[v.size()-1];
    	head->next = NULL;
    }
    else{
    	head = NULL;
    }
    ListNode* curr = head;
    for(int i =v.size()-2;i>=0;i--){
        ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
        temp->val = v[i];
        curr->next = temp;
        curr = temp;
    }
    curr->next = NULL;
    printLL(head);
}
int main(){
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	ListNode *head;
	int n1,n2;
	cin>>n1>>n2;
	for(int i =0;i<n1;i++){
		int val;
		cin>>val;
		head1 = addNode(head1,val);
	}
	for(int i =0;i<n2;i++){
		int val;
		cin>>val;
		head2 = addNode(head2,val);
	}
	// head = 
	addTwoNumbers(head1,head2);
}