#!/usr/bin/python3
"""Solve Technical Interview Quws"""


def count_edges(grid, i, j, rows, cols):
    """Calc the number of water edges"""
    up, down = (i - 1, j), (i + 1, j)
    left, right = (i, j - 1), (i, j + 1)
    sm = 4
    for k in (up, down, left, right):
        if (rows > k[0] >= 0) and (cols > k[1] >= 0):
            sm -= grid[k[0]][k[1]] == 1

    return sm


def island_perimeter(grid):
    """Calc The Perimeter"""

    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    sm = 0

    for i in range(rows):
        for j in range(cols):
            sm += count_edges(grid, i, j, rows, cols) if grid[i][j] == 1 else 0

    return sm
