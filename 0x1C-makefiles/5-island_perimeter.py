#!/usr/bin/python3
"""
The Island Perimeter
"""

def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid."""

    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid)):
            if grid[i][j]:
                perimeter += s_water(grid, i, j)

    return (perimeter)

def s_water(grid, i, j):
    """Function that returns num of surrounding water for a cell in grid."""

    water_count = 0
    if i <= 0 or not grid[i - 1][j]:
        water_count += 1
    if i <= 0 or not grid[i][j - 1]:
        water_count += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        water_count += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        water_count += 1

    return (water_count)
