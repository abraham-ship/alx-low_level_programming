# C - Singly linked lists

## Tasks
0. Print list<br>
Write a function that prints all the elements of a list_t list.<br>
	* Prototype: size_t print_list(const list_t *h);<br>
	* Return: the number of nodes <br>
	* Format: see example<br>
	* If str is NULL, print [0] (nil)<br>
	* You are allowed to use printf<br>

1. List length<br>
Write a function that returns the number of elements in a linked list_t list.<br>
	* Prototype: size_t list_len(const list_t *h);

2. Add node<br>
Write a function that adds a new node at the beginning of a list_t list.<br>
	* Prototype: list_t *add_node(list_t **head, const char *str);<br>
	* Return: the address of the new element, or NULL if it failed<br>
	* str needs to be duplicated<br>
	* You are allowed to use strdup<br>

3. Add node at the end<br>
Write a function that adds a new node at the end of a list_t list.<br>
	* Prototype: list_t *add_node_end(list_t **head, const char *str);<br>
	* Return: the address of the new element, or NULL if it failed<br>
	* str needs to be duplicated<br>
	* You are allowed to use strdup<br>

4. Free list<br>
Write a function that frees a list_t list.<br>
	* Prototype: void free_list(list_t *head);<br>
