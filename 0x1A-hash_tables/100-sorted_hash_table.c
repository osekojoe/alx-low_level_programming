#include "hash_tables.h"

/**
* shash_table_create - creates a hash table
* @size: size of array
* Return: created hash table*
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

/**
* add_n_shash - add node at begining of shash at given index
* @h: head of list
* @key: hash key
* value: hash value
* Return: created node
*/
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));
	if (tmp == NULL)
        	return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;
	*h = tmp;

	return (tmp);
}

/**
* add_i_shash - adds a node on the DLL of the shash table
* @ht: hash table
* @new: new node to add
* Return: None
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	while (tmp1 != NULL)
	{
		ret = strcmp(new->key, tmp1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}

	new->sprev = tmp2;
	new->snext = NULL;

	if (ht->shead)
		tmp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 * @ht: shash table
 * @key: shash key
 * @value: shash value
 * Return: 1 on success, 0 on fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_idx;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_idx = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[k_idx]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(ht, new);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: shash table
 * @key: shash key
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k_idx;
	shash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k_idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the keys and values of the shash table
 * @ht: shash table
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the key-value pairs in reverse *
 * @ht: pointer to the shash table
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: shash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
