#include <stdlib.h>
#include <stdio.h>


typedef struct node Node;
typedef Node Tree;
typedef Node Point;

struct node{
	float data;
	Tree* left;
	Tree* right;
}Tree;

struct node{
	float x;
	float y;

}Point;

void readFile(){
	
	Tree* root = tree_create();
	float input;
	float largest_node;
	
	FILE *in = fopen("data.txt", "r");
	if(in == NULL){
		fprintf(stderr, "Warning: the file, cannot be read.\n");
		exit(42);
	}
	
	

	fscanf(in, "%f", largest_node);
	while(in != NULL){
		fscanf(in, "%f", input);
		find_largest(largest_node, input); // fix this ask eastman about the normalization later
	}
}

Tree* find_largest(float var1, float var2){
	
	if(var1 < var2){
        	largest_node = input;
	}

}

Tree* tree_create(Tree* leaf)
{
	Tree* branch = malloc(sizeof(Tree));
	if(branch==NULL)
	{
		fprintf(stderr, "out of memory\n");
		exit(42);
	}

	branch->root = leaf;	
	branch->left = NULL;
	branch->right = NULL;
	return branch;
}

void search(int query){
	Tree* transverse = malloc(sizeof(Tree));
	int found = 0;
	
//	while(transverse != NULL

}

Tree * insert(){


}


Tree * delete(){


}
