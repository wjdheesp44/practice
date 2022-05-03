import random   # 랜덤 모듈

dic = {'apple':'사과', 'bakery':'빵집', 'corner':'모퉁이', 'size':'크기', 'basis':'기초'}     # 맞춰야 하는 단어와 뜻


print('안녕하세요')
def hangman_game():
  global answer         # 단어의 뜻을 저장하기 위한 변수

  word = random.choice(list(dic.keys()))  # 단어 중 하나를 랜덤하게 뽑음

  word2 = str(word)     # 리스트를 문자열로 변환
  answer = dic[word]    # 단어의 뜻 저장

  letters = ''      # 입력한 알파벳 중 맞는 것을 여기에 저장

  while True:      # 맞힐 때까지 반복
    success = True    # 성공 확인
    print()
    print()

    for key in word:    # 답인 단어를 알파벳 하나하나 비교
      if key in letters:    # 입력했던 알파벳에 답인 단어의 알파벳 중 하나가 있으면
        print(key, end="")    # 그 알파벳 출력
      else:   # 아니면
        print("_", end="")  # 언더바 출력
        success = False   # 알파벳을 다 맞추지 않아 while문 반복
    print()

    if success:
      print("성공!")
      print()
      break

    print()

    letter = input("알파벳을 쓰세요. : ", )   # 알파벳 입력
    if letter not in letters:   # 입력했던 알파벳 중 방금 입력한 알파벳이 없으면
      letters += letter     # 입력했던 알파벳에 새로운 알파벳 추가

    print()

    if letter in word:    # 입력했던 글자가 답인 단어에 있으면
      print("맞습니다.")    # 정답 처리
    else:   # 없으면
      print("틀렸습니다.")    # 오답 처리
    
    print()

def word_game():
  while True:
    w = input("앞의 게임에서 맞춘 단어의 뜻은 무엇인가요? : ", )

    if answer == w:   # 입력한 값과 답이 맞으면
      print("맞습니다!")    # 정답 처리
      break
    else:   # 아니면
      print("아쉽네요. 틀렸습니다")  # 오답 처리


hangman_game()
word_game()
print()
print("게임 끝!")