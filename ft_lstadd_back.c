typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst,t_list *new)
{
	if(lst == 0 || new == 0)
		return;

	if(*lst == 0)
	{
		*lst = new;
		return;
	}
	
	t_list *iteration = *lst;
	while(iteration->next != 0)
		iteration = iteration->next;

	iteration->next = new;
}
