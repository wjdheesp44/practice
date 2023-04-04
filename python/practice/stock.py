i_prices = list(input('학번을 입력하세요:'))

def solution(prices):                 
    for i in range(len(prices)):          
      cnt = 0                         
      for j in range(i+1, len(prices)):  
        if prices[i] <= prices[j]:    
          cnt += 1           
        else:
          cnt += 1              
          break
      prices[i] = cnt         

    answer = prices       
    return answer     

print("초당 주식 가격 표: ", i_prices)
print(solution(i_prices))   
