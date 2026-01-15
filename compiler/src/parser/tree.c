#include "tree.h"
#include <stdlib.h>

tree_t *new_tree(nodetype_t type, char *data, int child_count,
                 const char *label) {
  tree_t *tree = malloc(sizeof(tree_t));
  tree->type = type;
  tree->data = data;
  tree->child_count = child_count;
  tree->label = (char *)label;

  return tree;
}

void free_tree(tree_t *tree) {
  if (tree) {
    if (tree->data) {
      free(tree->data);
    }
    if (tree->label) {
      free(tree->label);
    }
    if (tree->children) {
      for (size_t i = 0; i <= tree->child_count; i++) {
        if (tree->children[i]) {
          free_tree(tree->children[i]);
        }
      }
    }
  }
}

void add_child(tree_t *tree, tree_t *child) {
  tree->child_count++;
  tree->children[tree->child_count] = child;
}

int tree_contains_child(tree_t *tree, nodetype_t expected) {
  for (size_t i = 0; i < tree->child_count; i++) {
    if (tree->children[i]->type == expected) {
      return 1;
    }
  }
  return 0;
}
