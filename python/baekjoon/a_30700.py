s = input()
answer = 'KOREA'

index = 0
cnt = 0
for i in s:
    if i == answer[index]:
        index += 1
        cnt += 1
        if index == 5:
            index = 0

print(cnt)