# Ch 4 리스트, 딕셔너리리
```py
array = [1, 2, "문자열", True]

print(array[2][1])
```
>'자'


<br><br>

## 요소의 변경
```py
list_a = [30, 41, 471, "문자열", True, False, 38.1]
list_a[5] = "요소변경"
print(list_a)		# [30, 41, 471, "문자열", True, "요소변경", 38.1]
```
<br><br>

## 리스트 연산 : +, *, len()
```py
list_x = [1, 2, 3]      #리스트 선언
list_y = [4, 5, 6]      #리스트 선언

print(list_x + list_y)  # [1, 2, 3, 4, 5, 6]

print(list_x * 3)       # [1, 2, 3, 1, 2, 3, 1, 2, 3]

print(len(list_y))      # 3
```
<br><br><br>
### 리스트 요소 추가 : append(), insert(), extend()

- _리스트명.append(요소)_     
: 리스트 뒤에 요소 추가

- _리스트명.insert(위치, 요소)_
: 리스트 원하는 위치에 요소 추가

- _리스트명.extend([요소, 요소, ...])_
: 여러개의 요소를 추가 (append() 확장 )
: 매개변수로 리스트를 입력

```py
list_a = [1, 2, 3]      #리스트 선언

list_a.append(4)        # append()
print(list_a)           # [1, 2, 3, 4]

list_a.insert(2, 7)     # insert()
print(list_a)           # [1, 2, 7, 3, 4]

list_a.extend([5, 6]) #extend()
print(list_a)			# [1, 2, 7, 3, 4, 5, 6]
```
<br><br><br>


## 리스트 연결 연산자와 요소 추가의 차이
- 연산자(+, *) 는 원본(변수)에 변화를 주지 않는다. 
하지만 append(), insert(), extend() 와 같은 요소 추가 함수는 원본(변수)에 
직접적인 영향을 준다. 
그러므로 리스트 연결 연산자와 같이 원본에 영향을 주지 않는 것을 **_비파괴적_** 이라 표현하고 append(), insert(), extend()와 같은 함수를 **_파괴적_**이라고 표현한다

<br><br><br>

## 리스트 요소 제거 del, pop(), remove(), clear
- del 리스트명[인덱스]	

- 리스트명.pop[인덱스]

```py
list_a = [0, 1, 2, 3, 4, 5, 6]

# del 사용
del list_a[3]
print(list_a)		# [0 ,1, 2, 4, 5, 6]

#pop() 사용
list_a.pop(2)		
print(list_a)		# [0, 1, 4, 5, 6]

#del은 슬라이싱이 가능함 [:]
list_x = [1, 3 ,5, 7, 9]
del list_x[:3]
print(list_x)		# [7, 9]
```

- 리스트명.remove(값)
```py
list_b = [1, 2, 1, 2]
list_c.remove(2)	# 2라는 요소 삭제
print(list_c)		# [1, 1, 2]
```
- 리스트. clear( )
:리스트 요소 모두 제거

```py
list_a.clear()		#NONE

```
<br><br><br>

## del 과 pop() 차이
- `del` 은 슬라이싱이 가능함
- `pop()` 는 지워진 인덱스의 값을 반환한다
  
<br><br> 

## sort(), in/not in 연산자
- sort()
: 기본 오름차순으로 정렬
```py
#오름차순 정렬
list_a = [86, 389, 4, 85, 39, 443, 274]
list_a.sort()
print(list_a)		# [4, 39, 85, 86, 274, 389, 443]
    
#내림차순 정렬
list_a.sort(reverse = True)
print(list_a)		# [443, 389, 274, 86, 85, 39, 4]
```
<br>

- 값 in/not in 리스트 
: 특정 값이 리스트 내부에 존재하는지 확인

```py
>>> list_a = [1, 2, 3, 4]
>>> 1 in list_a		#TRUE

>>> 3 not in list_a #False
```

<br><br>

## 전개 연산자
	>>> *list_a = list[0], list[1], ... 


## 딕셔너리
```py
a = {
	"name": "David",		#  키:값 (키로 변수나 숫자가 올 수 있다.)
	"age": 29,
	"gender": "man",
	1 : 29
}
print(a)

#딕셔너리 요소 접근 방법
print(a["name"])
print(a[1])
```
> {'name': 'David', 'age': '29', 'gender': 'man'} <Br>
> David <br>
> 29

<br><br>


## 딕셔너리 요소 추가 및 제거
- 추가
```py
dictionary = {} 	#딕셔너리 선언

dictionary["name"] = "홍길동"
dictionart[1] = 5

print(dictionary)
```
>{'name': '홍길동', 1: 5}

<Br><br>

-제거 (del 사용)
```py
del dictionary["name"]
```
> {1: 5}

## 딕셔너리에 for문 적용

```py
a = {
	"name": "David",		
	"age": 29,
	"gender": "man",
	1 : 29
}

for key in a:
	print(key, ":", a[key])
```
>name : David <Br>
age : 29 <Br>
gender : man <Br>
1 : 29 <Br>

<br><Br>

## 

