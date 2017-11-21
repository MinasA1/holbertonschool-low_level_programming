#include "binary_trees.h"
/**
 * binary_tree_preorder - executes a pre-order traversal
 * @tree: pointer to the root of the node we want to traverse
 * @func: pointer function to be executed while traversing easch node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
		{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		}
}
