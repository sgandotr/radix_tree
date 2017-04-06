#include <stdlib.h>
#include <stdio.h>

typedef struct node Node;
typedef struct point Point;
typedef Node Tree;

struct node{
	float data;
	Tree* left;
	Tree* right;
};

struct point{
	float x;
	float y;
};

Tree* tree_create();
float find_largest(Point* points[], int total);
void search(int query);
Tree * sort(Point* points[], int total, float largest);
Tree * insert(Tree * tree, Point * p);
Tree * delete();
Point * normalize_data(Point * points[], float largest, int total);
void print(Point * points[], int total);
void readFile();
