# Ch 3 조건문

- 조건문에서 if, elif, else 등을 사용한다.

  <br>

## False로 변환되는 값

False 로 변환되는 값은 다음과 같다. 
 - None
 - 0
 - 0.0
 - 빈 컨테이너(빈 문자열, 빈 바이트열, 빈 리스트, 빈 튜플, 빈 딕셔너리)

<br>


```py
# 0이 참
if 0:
    print("True")

# 0이 거짓
else:
    print("False")
```
>[실행 결과]<br>
>false

<br><br>

## pass와 raise NotImplementedError
- 미구현 상태일 때 `pass` 를 사용해 미뤄둘 수 있다.
- pass 대신 `raise NotImplementedError` 를 사용하면 미구현 상태임을 쉽게 알 수 있도록 오류를 강제로 발생시킨다.