#include "binary_trees.h"
/**
 * binary_tree_postorder - executes a post-order traversal
 * @tree: pointer to the root of the node we want to traverse
 * @func: pointer function to be executed while traversing easch node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
		{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
		}
}
