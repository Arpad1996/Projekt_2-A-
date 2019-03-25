
struct elementstruct
{
	int block[9];
	char* str;
	int pathcost;
	int valid;
	int totalcost;
	elementstruct* next;
};


int heur(int block[]);
void prepend(elementstruct* newnode, elementstruct* oldnode, int operator1);
int goal(int* block);
int notonqueue(int block[]);
elementstruct* bestnodefromqueue();
void print_block(int* block);
int apply(int* newstate, int* oldstate, int op);
elementstruct* newelement();
int op(char);
char to_char(int i);
