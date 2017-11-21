#include "binary_trees.h"
/**
 * binary_tree_depth - counts nodes depth
 * @node: pointer to node
 * Return: depth of node, 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 1;

	if (!node || !node->parent)
		return (0);
	depth += binary_tree_depth(node->parent);
	return (depth);

}
