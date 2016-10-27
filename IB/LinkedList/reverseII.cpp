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
ListNode* reverse(ListNode*A){
	ListNode* prev = NULL;
	ListNode* curr = A;
	ListNode* next = A->next;
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
	return A;
} 

void reverseBetween(ListNode* A, int m, int n){
    ListNode* t1 = A;
    ListNode* t2,*t4=NULL;
    ListNode* t3 = A;
    if(A==NULL||A->next==NULL){
        return;
    }
    while(m!=1){
        t4 = t1;
        t1 = t1->next;
    	m--;
    }
    
    while(n!=1){
        t3 = t3->next;
    	n--;
    }
    if(t1==A&&t3->next==NULL){
    	return reverse(A);
    }
    if(t4!=NULL){
    	t4->next = NULL;
    }
    if(t3->next==NULL){
         ListNode* T = reverse(t1);
         if(t4!=NULL){
         	t4->next = T;
         }
    }
    else{
        t2 = t3->next;
        t3->next = NULL;
        ListNode* T = reverse(t1);
        // printLL(T);
       	if(t4==NULL){
       		 A  = T;
       	}
        if(t4!=NULL){
        	t4->next = T;
        }
        t1->next = t2;
    }
    // return A;
    printLL(A);
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
	reverseBetween(head1,1,4);
}