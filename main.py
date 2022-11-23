

def set_state(initPos, endPos, state, array):
    y = initPos[0]
    while y <= endPos[0]:
        x = initPos[1]
        while x <= endPos[1]:
            array[y][x] = state
            x += 1
        y += 1

def toggle_state(initPos, endPos, array):
    y = initPos[0]
    while y <= endPos[0]:
        x = initPos[1]
        while x <= endPos[1]:
            array[y][x] = not(array[y][x])
            x += 1
        y += 1