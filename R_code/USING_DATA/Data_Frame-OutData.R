# install.packages("readxl") 
library(readxl)

df_exam <- read_excel("Sample.xlsx") #프로젝트 폴더가 아닌 다른 폴더에 있는 엑셀 파일은 파일 경로 지정
df_exam
