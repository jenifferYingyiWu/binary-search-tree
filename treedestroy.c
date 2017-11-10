/*
 * treedestroy.c
 *
 *  Created on: Nov 10, 2017
 *      Author: jenifferwu
 */
#include "tree.h"
#include <stdlib.h>

void Tree_destroy(TreeNode * n)
{
	if (n == NULL)
	{
		return;
	}
	Tree_destroy(n -> left);
	Tree_destroy(n -> right);
	free(n);
}
