# 데이터 프레임 직접 만들기

ENG <- c(90,80,60,70)
MAT <- c(50,60,100,20)

df_scores <- data.frame(ENG,MAT) # df_scores에 데이터 프레임 만들기
df_scores

df_scores_2 <- data.frame(ENG = c(90,80,60,70), MAT = c(50,60,100,20)) # 데이터 프레임 한번에 제작 가ㄴ
df_scores_2