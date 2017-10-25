#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if binary tree is leaf
 * @node: pointer to binery tree node
 * Return: 1 if it's leaf, 0 if not 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
  if (node && (!node->left && !node->right))
    return (1);
  return(0);
}
