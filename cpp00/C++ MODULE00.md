# string



<br>



## header

`# include <string>`



<br>



## Syntax

```c++
1. string str("kchoi");
2. string str1;
   str1 = "kchoi";
3. string str2(str1);
```



<br>



## .length()

```c++
// size_t length()
cout << str.length();
// 5
```



<br>



# toupper()



<br>



## header

`# include <locale>`



<br>



## syntax

```c++
std::toupper(char var);
```



<br>



## ex)

```c++
std::string str("kchoi");
for (size_t i = 0; i < str.length(); i++)
	std::cout << (char)std::toupper(str[i]);
// == toupper(str[i].begin(), str[i].end())
// kchoi
```







<br>



# Public, Private



public - 클래스 외부에서도 접근이 가능

private - 해당 클래스에서만 접근이 가능



<br>



## 예제1 - public 및 클래스 사용해보기

```c++
class Test {
  public:
  	int numa;
  private:
  	int numb;
}

int main() {
  Test t; // 클래스 생성
  t.numa = 5; // ok
  t.numb = 2; // error!
}
```



<br>



## 예제2 - private 값 변경하고 출력하기

```c++
class Test {
  private:
  	int numb;
  public:
  	int numa;
  	void set_numb(int num) {
      numb = num;
    }
  	int get_numb() {
      return numb;
    }
}

int main() {
  Test t;
  t.numa = 5;
  t.set_numb(3);
  
  cout << "numb : " << t.get_numb() << "\n";
  // numb : 3
  return (0);
}
```



<br>



# C++에서의 ::



<br>



## 정의

범위 지정 연산자 Scope Operator



<br>



## 용도

1. 클래스이름::
2. namespace이름::
3. ::



<br>



## 용도 1 - 클래스명::

```c++
class A{
	public:
  	void Print();
};
```



<br>



클래스 A안에 있는 변수 및 함수는 객체를 생성하지 않고서 접근할 수 없다.

이 경우 클래스 내 메소드를 정의하기 위해서 `::`을 다음과 같이 사용할 수 있다.



<br>



```c++
class Name {
  public:
  	void Print();
}

void Name::Print() {
  ...
}
```



<br>



## 용도 2 - namespace::



<br>



```c++
namespace a
{
  void func() {
    ...
  }
}

namespace b
{
  void func() {
    ...
  }
}
```



<br>



위의 코드에 대해

 `a::func()`는 namspace 영역 a에 있는 func를,

`b::func()`는 namspace 영역 b에 있는 func를 호출.



<br>



## 용도3 - ::



존재하는 모든 전역함수, 전역변수를 지역변수와 구분하여 사용할 수 있게 함.





<br>



# cin.ignore

입력 버퍼를 초기화 하는 함수. 



<br>



## syntax

`std::cin.ignore(arg1, arg2)`



<br>



## description

cin.ignore는 입력 버퍼를 초기화할 때 주로 사용하는 것으로써,

첫 번째 인자는 초기화 할 최대 길이

두 번째 인자는 delimiter로 '\n'을 주로 사용한다. (cin은 '\n'을 기준으로 무언가를 받기 때문.)



<br>



## ex

```c++
# include <iostream>
# include <string>

int main()
{
	std::string hello;
	std::cin >> hello;
	// 해당 cin에 대해 "test1" 입력
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
  // 입력 버퍼 초기화
	std::cin >> hello;
	// 해당 cin에 대해 "test2" 입력
	std::cout << hello << "\n";
  // 출력. 결과는:
  // test2
}
```





<br>



# setw

출력할 width를 설정하는 함수.



<br>



## syntax

`std::setw(int width)`



<br>



## header

`# include <iomanip>`



<br>



## ex

```c++
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string test = "12345";
	std::cout << test << '\n';
	std::cout << std::setw(10) << test << '\n';
}
```



<br>



결과는

```
12345
     12345
```



<br>







https://blockdmask.tistory.com/338

https://en.cppreference.com/w/cpp/string/byte/toupper

http://blog.daum.net/art_code/678157

https://zoonvivor.tistory.com/92

https://stackoverflow.com/questions/25020129/cin-ignorenumeric-limitsstreamsizemax-n

https://dodnet.tistory.com/488

https://tang1993.tistory.com/1

https://yeolco.tistory.com/115

https://boycoding.tistory.com/244

