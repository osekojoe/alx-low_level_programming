#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """eturns the perimeter of the island described in grid:
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, & there is one island (or nothing)
    - The island doesn’t have “lakes” (water inside that isn’t connected to
       the water around the island).
    Args:
        grid
    Returns:
        perimeter
    """
    perimeter = 0
    land = 0

    if not grid:
        return 0

    for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    land += 1
    return (land * 2) + 2
