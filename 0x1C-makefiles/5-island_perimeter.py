#!usr/bin/python3
""" module for island perimeter function """


def island_perimeter(grid):
    """ calculates the perimeter of an island described in grid """ 
    n_col = len(grid)
    n_row = len(grid[0])
    perimeter = 0
    for a in range(n_col):
        for b in range(n_row):
            if grid[a][b] == 1:
                if b == 0 or grid[a][b-1] == 0:
                    perimeter += 1
                if b == [n_row-1] or grid[a][b+1] == 0:
                    perimeter += 1
                if a == 0 or grid[a-1][b] == 0:
                    perimeter += 1
                if a == [n_col - 1] or grid[a+1][b] == 0:
                    perimeter += 1
    return perimeter