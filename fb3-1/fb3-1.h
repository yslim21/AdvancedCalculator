/*
* Declarations for a calculator fb3-1
*/

extern int yylineno;
void yyerror(char *s, ...);

struct ast {
	int nodetype;
	struct ast *l;
	struct ast *r;
};

struct numval {
int nodetype; /* type K for constant */
double number;
};
/* build an AST */
struct ast *newast(int nodetype, struct ast *l, struct ast *r);
struct ast *newnum(double d);
/* evaluate an AST */
double eval(struct ast *);
/* delete and free an AST */
void treefree(struct ast *);
