int nametocost(char* str)
{
    for(int i = 0; i < 15; i++)
        if(strcmp(str, avaliable_items[i].item_name) == 0) return avaliable_items[i].cost;
    return 0;
}

void sum_total_costs(order_t orders[], unsigned order_cnt)
{
	for(int i = 0; i < order_cnt; i++)
    {
        orders[i].total_cost = 0;
        for(int k = 0; k < orders[i].item_cnt; k++)
        	orders[i].total_cost += orders[i].items[k].cnt * nametocost(orders[i].items[k].item_name);
    }
}

int cmp(order_t *a, order_t *b)
{
    int now = (*a).pick_up_time.hour - (*b).pick_up_time.hour;
    if(!now) return (*a).pick_up_time.minute - (*b).pick_up_time.minute;
    return now;
}

void reorder(order_t orders[], unsigned order_cnt)
{
	qsort(orders, order_cnt, sizeof(order_t), cmp);
}
