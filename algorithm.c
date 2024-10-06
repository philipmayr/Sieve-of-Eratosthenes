// Sieve of Eratosthenes

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    
    struct Node* next_node_pointer;
} Node;

Node* create_node(int value)
{
    Node* new_node = (Node*) malloc(sizeof(Node));
    
    new_node->value = value;
    new_node->next_node_pointer = NULL;
    
    return new_node;
}

void append(struct Node** head_node, int value)
{
    Node* new_node = (Node*) malloc(sizeof(Node));
    Node* last_node = *head_node;
    
    new_node->value = value;
    new_node->next_node_pointer = NULL;
    
    if (*head_node == NULL)
    {
        *head_node = new_node;
        
        return;
    }
    else
    {
        while (last_node->next_node_pointer != NULL)
        {
            last_node = last_node->next_node_pointer;
        }
        
        last_node->next_node_pointer = new_node;
        
        return;
    }
}

int main()
{
    Node* first = create_node(2);
    
    return 0;
}
