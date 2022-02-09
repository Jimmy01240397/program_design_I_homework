// TODO: fill the route matrix with 0's or 1‘s.
// If there isn't any route, return false; otherwise, return true.
bool visit(char maze[][n], int route[][n], int originX, int originY)
{
    route[originX][originY] = 1;
    if(originX == n - 1 && originY == n - 1) return true;
	for(int i = -1; i < 2; i++)
    {
        for(int k = -1; k < 2; k++)
        {
			if((i && !k || !i && k) && originX + i >= 0 && originY + k >= 0 && originX + i < n && originY + k < n && !route[originX + i][originY + k])
            {
                if(maze[originX + i][originY + k] == 'r')
                {
                    if(visit(maze, route, originX + i, originY + k)) return true;
                }
            }
        }
    }
    route[originX][originY] = 0;
    return false;
}

