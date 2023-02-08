# 🍳 scanf() : 공백만나기전 까지만 입력받는 함수

## 🟢 입력받기

prinf와 문법은 비슷하나 2번째 매개변수 인자에 & 를 붙인다.

- pointer 개념 ( 나중에 공부 )

```c
int a; //문자 1개 char
scanf("%d", &a); // 문자 1개 %c
```

## 🟢 2개 이상 입력

```c
int a; int b;
scanf("%d %d", &a, &b);
```

# 🍳 fgets() : 공백 포함 입력받는 함수

## 🟢 사용방법

```c
fgets(s, sizeof(s), stdin);
```
