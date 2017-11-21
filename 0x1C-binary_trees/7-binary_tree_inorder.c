#include "binary_trees.h"
/**
 * binary_tree_inorder - executes a in-order traversal
 * @tree: pointer to the root of the node we want to traverse
 * @func: pointer function to be executed while traversing easch node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
		{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
		}
}
