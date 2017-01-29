#include <iostream>
using namespace std;

class Node {
	public:
		string data;
		Node *left;
		Node *right;
		Node (string d) {
			data  = d;
			left  = NULL;
			right = NULL;
		}
};

class BST {
	private: 
		Node *root;
		void insert(string data, Node *aNode);
		Node *search(string data, Node *aNode);
		void preOrder(Node *aNode);
		void inOrder(Node *aNode);
		void postOrder(Node *aNode);
	public:
		BST();
		void insert(string data);
		Node *search(string data);
		void preOrder();
		void inOrder();
		void postOrder();
};

BST::BST() {
	root = NULL;
}

void BST::insert(string data, Node *aNode) {
	if(data < aNode->data) {
		if(aNode->left != NULL) {
			insert(data, aNode->left);
		}else {
			aNode->left = new Node(data);
			aNode->left->left = NULL;
			aNode->left->right = NULL;
		}
	}else if(data >= aNode->data) {
		if(aNode->right != NULL) {
			insert(data, aNode->right);
		}else {
			aNode->right = new Node(data);
			aNode->right->left = NULL;
			aNode->right->right = NULL;
		}
	}
}

void BST::insert(string data) {
	if(root != NULL) {
		insert(data, root);
	}else {
		root = new Node(data);
		root->left = NULL;
		root->right = NULL;
		
	}
}

Node* BST::search(string data, Node *aNode) {
	if(aNode != NULL) {
		if(data == aNode->data) {
			return aNode;
		}
		if(data < aNode->data) {
			return search(data, aNode->left);
		}else {
			return search(data, aNode->right);
		}
	}else {
		return NULL;
	}
}

Node* BST::search(string data) {
	return search(data, root);
}

void BST::preOrder() {
	preOrder(root);
}
void BST::preOrder(Node *aNode) {
	if(aNode != NULL) {
		cout << aNode->data << " ";
		preOrder(aNode->left);
		preOrder(aNode->right);
	}
}
void BST::inOrder() {
	inOrder(root);
}
void BST::inOrder(Node *aNode) {
	if(aNode != NULL) {
		inOrder(aNode->left);
		cout << aNode->data << " ";
		inOrder(aNode->right);
	}
}

void BST::postOrder() {
	postOrder(root);
}

void BST::postOrder(Node *aNode) {
	if(aNode != NULL) {
		postOrder(aNode->left);
		postOrder(aNode->right);
		cout << aNode->data << " ";
	}
}

int main() {
	BST *btree = new BST;
	btree->insert("apple");
	btree->insert("strawberry");
	btree->insert("orange");
	btree->preOrder();
	cout << endl;
	btree->inOrder();
	cout << endl;
	btree->postOrder();
	cout << endl;
	
	return 0;
}
