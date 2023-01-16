# Rat in a Maze problem

def main():
    maze = [
        [True, True, True],
        [True, True, True],
        [True, True, True],
    ]

    print(findPath("", maze, 0, 0))

def findPath(p: str, maze, r: int, c: int):

    # exit condition
    if (r == len(maze) - 1) and (c == len(maze[0]) - 1):
        list = []
        list.append(p)
        return list
    
    list = []

    # if its already visited, go back
    if (maze[r][c] == False):
        return list
    
    # lock the current cell
    maze[r][c] = False 

    if (r < len(maze) - 1):
        list.extend(findPath(p + 'D', maze, r + 1, c))

    if (c < len(maze[0]) - 1):
        list.extend(findPath(p + 'R', maze, r, c + 1))

    if (c > 0):
        list.extend(findPath(p + 'L', maze, r, c - 1))

    if (r > 0):
        list.extend(findPath(p + 'U', maze, r - 1, c))

    # unlock the cell
    maze[r][c] = True

    return list

if __name__=="__main__":
    main()

