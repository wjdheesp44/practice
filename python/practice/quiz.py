print('아래 메뉴에서 원하여 번호를 입력하세요')

while(True):
  print('[*** 메뉴 ***]')
  menu = int(input('1. 두 수 사이의 홀수 합 구하기  2. 구구단 : '))
  
  if(menu == 1):
    num1 = int(input('** 첫 번째 숫자를 입력하세요 : '))
    num2 = int(input('** 두 번째 숫자를 입력하세요 : '))
    sum = 0
    
    for i in range(num1, num2+1):
      if(i % 2 == 1):
        sum = sum + i
        print(i, end=' ')
      else:
        continue
      
    print()
    print('3과 34사이의 홀수 합 :', sum)
    
  elif(menu == 2):
    times_table = int(input('원하는 단을 입력하세요 : '))
    
    for i in range(3, 10, 3):
      print(f'{times_table} x {i} = {times_table*i}')
      
  else:
    print('입력오류!! 1 또는 2만 입력하세요')

  question = str(input('계속하시겠습니까?(y/n):'))
  if(question == 'y'):
    continue
  elif(question == 'n'):
    print('프로그램을 종료합니다.!')
    break
