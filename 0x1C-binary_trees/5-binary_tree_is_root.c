#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: node to check
 * Return: 1 if its root, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || (node && node->parent))
		return (0);
	return (1);
}