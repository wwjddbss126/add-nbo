## 1. line7
fopen 실패 시에 대한 코드를 작성하지 않았음
fopen return 값이 null 일 경우 처리하는 로직이 없음

## 2. line20
현재 fread()의 return type: 어떤 파일에 대한 4byte -> fread 리턴 타입 = integer

7바이트가 존재하는 경우 4byte를 1번밖에 못 읽으므로 1이 return 됨
-> fread funtion을 쓸 때는 fread 두번째 인자에 1, 세번째 인자에 버퍼 크기 주어서 byte 단위로 받아야

제대로 읽지 못했을 경우 에러 처리

\+
- 변수는 a, b보다 n1, n2 처럼 한계가 없게
- 같은 코드는 함수로 묶어서 최대한 줄이기
- fopen 했으면 fclose 꼭 
- 실행파일(add-nbo)과 빌드파일(main.o)은 안올려도 됨 
- Makefile도 딱히 필요 없음
- .pro.user도 지우기
- (.pro + .cpp) or (Makefile + .cpp)만 올리기
