/*
 * treeprint.c
 *
 *  Created on: Nov 10, 2017
 *      Author: jenifferwu
 */
#include "tree.h"

static void TreeNode_print(TreeNode * tn)
{
	printf("%d ", tn -> value);
}

static void Tree_printPreorder(TreeNode * tn)
{
	if (tn == NULL)
	{
		return;
	}
	TreeNode_print(tn);
	Tree_printPreorder(tn -> left);
	Tree_printPreorder(tn -> right);
}

static void Tree_printInorder(TreeNode * tn)
{
	if (tn == NULL)
	{
		return;
	}
	Tree_printInorder(tn -> left);
	TreeNode_print(tn);
	Tree_printInorder(tn -> right);
}

static void Tree_printPostorder(TreeNode * tn)
{
	if (tn == NULL)
	{
		return;
	}
	Tree_printPostorder(tn -> left);
	Tree_printPostorder(tn -> right);
	TreeNode_print(tn);
}

void Tree_print(TreeNode * tn)
{
	printf("\n\n=======================Preorder=======================");
	Tree_printPreorder(tn);
	printf("\n\n=======================Inorder=======================");
	Tree_printInorder(tn);
	printf("\n\n=======================Postorder=======================");
	Tree_printPostorder(tn);
}
