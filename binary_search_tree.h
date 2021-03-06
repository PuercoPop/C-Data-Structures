/*
 * author: Sebastian Bauersfeld
 */

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

/* a node within a binary search tree */
typedef struct bst_node{
    int val;
    struct bst_node* parent;
    struct bst_node* left;
    struct bst_node* right;
    int color;                              /* this field is only used by red-black trees */
} bst_node;


/* a binary search tree */
typedef struct bst_tree{
    bst_node* root;
} bst_tree;


typedef enum { BST_PREORDER, BST_POSTORDER, BST_INORDER } bst_order;
extern bst_tree* bst_create();
extern void bst_insert(bst_tree* tree, int val);
extern int bst_contains(bst_tree* tree, int val);
extern void bst_print(bst_tree* tree, bst_order print_order);
extern void bst_assert(bst_tree* tree);
extern void bst_free(bst_tree* tree);
extern int bst_remove(bst_tree* tree, int val);
extern void bst_test();
extern bst_node* bst_find_node(bst_node* start, int val);
extern bst_node* bst_create_node(bst_node* parent, bst_node* left, bst_node* right, int val);

#endif BINARY_SEARCH_TREE_H
