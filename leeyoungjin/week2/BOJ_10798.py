import sys

array = []
for i in range(15):
    line = sys.stdin.readline().rstrip() # input 받기
    if line == "":
        break
    else:
        array.append(list(line))

max_len = max(len(line) for line in array) # 가장 긴 문자열의 길이 구하기

for i in range(max_len): # 행
    for j in range(len(array)): # 열
        if i < len(array[j]):
            print(array[j][i], end = "")
        