# C에서의 문법 특이사항이나 용어들의 개념만을 정리한다. (자세한 건 해당 이름의 폴더)

## 여러가지 문법 특이사항

- printf("%c", a+1); a의 값은 a라고 할때 출력은 b가 나온다. 문자+숫자의 형변환?

## 형변환

- 묵시적 데이터 형변환 : 정수/실수 같이 자동으로 실수형으로 바뀌는 것
  - (float)형 정수 / 정수 또한 실수형으로 변환된다.
- 명시적 데이터 형변환 : 어떤 값이나 결과의 데이터형을 강제로 바꾸는 것

## 연산자

- << , >> : 비트 연산자 a << 1 -> a를 2배, b >> 2 - > b를 1/2^2 배
- ~ : 2진수 기준 0을 1로, 1을 0으로 만든 값을 10진수로 반환

```sh
** 비트단위(bitwise)연산자는,
~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor),
<<(bitwise left shift), >>(bitwise right shift)
```

## lable

- [이름]: 로 되어있다. swich() ~ case: 에서 case: 도 lable이라고 볼 수 있다.
- goto [이름] 을 통해 해당 위치의 lable로 강제 이동이 가능하지만 직관적이지 못할경우 이해가 어려워진다.

## char 와 char\*

- char a= ~~ 로 설정을 하고 싶을때 한 글자만 저장을 하면 char a= 'a' ('', single)
- char a = "asd" 처럼 문자열로 저장을 하면 ("", double) -> char \* 로 문자열 포인터개념

## 배열

- 배열을 전역변수로 선언하면 빈 index속 값이 다 0으로 초기화가 compiler에 의해 자동으로 이루어진다. -> heap 영역에 생성
- 배열을 지역변수로 전언하면 stack 영역에 생성되어 스택의 크기 제한 및 별도로 초기화를 하지 않으면 trash 값이 들어간다.
