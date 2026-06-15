#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

public:
    Node(int data) : data(data), next(nullptr) {}
    Node(int data, Node* next) : data(data), next(next) {}

    friend Node* convertArrToLL(vector<int>& arr);
};

Node* reverse(Node* head) {
 	 Node* prev = nullptr;
 	 Node* curr = head;

	  while(curr){
		  Node* temp = curr->next;
		  curr->next = prev;
	 	  prev = curr;
	 	  curr = temp;
 	 }

	 return prev;

	
}

Node* convertArrToLL(vector<int>& arr) {

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head){
	Node* curr = head;
	while(curr){
		cout<<curr->data<<endl;
		curr = curr->next;
	}
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToLL(arr);

 	   head = reverse(head);
	   print(head);

	   

    return 0;
}
