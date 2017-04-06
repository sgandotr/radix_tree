#include <stdlib.h>
#include <stdio.h>
#include "radix.h"

Tree* tree_create()
{
        Tree* branch = malloc(sizeof(Tree));
        if(branch == NULL)
        {
                fprintf(stderr, "out of memory\n");
                exit(42);
        }

        branch->data = 0;
        branch->left = NULL;
        branch->right = NULL;
        return branch;
}

float find_largest(Point* points[], int total){
	
	int i;
	float largest, var2;
	largest = points[0]->x;

	for(i =0; i < total; i++){
		var2 = points[i]->x;
		if(largest < var2){
			largest = var2;
		}
	//	i++;
	}

        for(i =0; i < total; i++){
                var2 = points[i]->y;
                if(largest < var2){
                        largest = var2;
                }
        //        i++;
        }

	return largest;
}

void search(int query){
	Tree* transverse = malloc(sizeof(Tree));
	int found = 0;
	
//	while(transverse != NULL

}

Tree * sort(Point* points[], int total, float largest){


}

Tree * insert(Tree * tree, Point * p){


}


Tree * delete(){


}

Point * normalize_data(Point * points[], float largest, int total){
	int i;
	
	for(i = 0; i< total; i++){
		points[i]->x = points[i]->x/largest;
		points[i]->y = points[i]->y/largest;
	}
	
	return points;
}

void print(Point * points[], int total){
	int i;
		
	for(i =0; i < total; i++){
		printf("point %f %f\n", points[i]->x, points[i]->y);
	}
}

void readFile(){

       // Tree* root = tree_create();
        int total_nodes, count = 0;
        Point *input, *query;
	float largest_node;

        FILE *in = fopen("test.txt", "r");
        if(in == NULL){
                fprintf(stderr, "Warning: the file, cannot be read.\n");
                exit(42);
        }

        fscanf(in, "%f", &query->x);
        fscanf(in, "%f", &query->y);

        fscanf(in, "%d", &total_nodes);
        Point *points[total_nodes], new_arr[total_nodes];

        while(in != NULL){
                fscanf(in, "%f", &input->x);
                fscanf(in, "%f", &input->y);
                points[count] = input;
                count++;
        }

        largest_node = find_largest(points, total_nodes);
 	normalize_data(points, largest_node, total_nodes);
	//sort(points, total_nodes, largest_node);


}



