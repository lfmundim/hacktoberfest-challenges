value = int(input())

hours = value//3600

minutes = value//60 % 60

seconds = value%60

print(f'{hours}:{minutes}:{seconds}')