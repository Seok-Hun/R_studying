x <- c(1,2,3) #변수 제작
x
mean(x)       #함수 적용(mean()은 괄호 안의 숫자들의 평균)
max(x)        #max()는 괄호 안의 숫자들의 최댓값
min(x)        #min()는 괄호 안의 숫자들의 최솟값

str <- c("Hello", "World", "is", "good") #변수 제작
paste(str, collapse=",")                 #paste()는 괄호 안의 문자들을 하나로 합침, collapse로 단어들의 구분 가능
#파라미터: collapse처럼 함수의 옵션을 설정하는 명령어, '매개변수'라고도 함

x_mean <- mean(x)  #함수의 결과물을 변수에 집어넣을 수 있ㅇ