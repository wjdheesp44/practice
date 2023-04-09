s=input('영어로 아무 문자나 입력하세요:')
word=s.lower() 
vowels=0
consonants=0

if len(s)>0:             
    for char in word:                    
        if char in 'aeiou':              
            vowels=vowels+1
        else:                           
            consonants=consonants+1
print('모음', vowels, '\n자음', consonants)
