# C++을 이용한 blockchain tutorial 학습
참고 사이트 - https://github.com/mingrammer/blockchain-tutorial  

go를 사용해도 되지만 튜토리얼이라 C++을 사용.

https://4irelabs.com/articles/top-blockchain-programming-languages/  

나의 경우 상황에 따라 C++, Go, Rust 중 하나를 사용하면 될 듯하다. 
https://www.ibm.com/topics/blockchain-iot -> iot에서 blockchain의 역할

임베디드와 암호, 블록체인 + 영지식증명, 네트워크 등을 섞어서 커리어를 만들어보면 어떨까 싶다.

C++의 `vector`에서 `begin()`과 `data()`의 차이에 대해 설명드리겠습니다.

### `begin()`
- **설명**: `begin()` 함수는 벡터의 첫 번째 요소를 가리키는 반복자를 반환합니다.
- **반환 타입**: `iterator` 또는 `const_iterator` (벡터가 `const`인 경우)
- **용도**: 벡터의 요소들을 순회(iterate)할 때 주로 사용됩니다.
- **예시**:
  ```cpp
  std::vector<int> vec = {1, 2, 3, 4, 5};
  auto it = vec.begin(); // 'it'는 vec의 첫 번째 요소를 가리킵니다.
  for (auto it = vec.begin(); it != vec.end(); ++it) {
      std::cout << *it << " ";
  }
  ```

### `data()`
- **설명**: `data()` 함수는 벡터의 내부 배열을 가리키는 포인터를 반환합니다.
- **반환 타입**: `T*` 또는 `const T*` (벡터가 `const`인 경우), 여기서 `T`는 벡터 요소의 타입입니다.
- **용도**: 벡터의 내부 데이터를 배열처럼 직접 접근할 때 사용됩니다. 주로 기존 C 스타일 배열과의 호환성을 위해 사용됩니다.
- **예시**:
  ```cpp
  std::vector<int> vec = {1, 2, 3, 4, 5};
  int* ptr = vec.data(); // 'ptr'은 vec의 내부 배열을 가리킵니다.
  for (size_t i = 0; i < vec.size(); ++i) {
      std::cout << ptr[i] << " ";
  }
  ```

### 차이점 요약
- `begin()`은 반복자를 반환하며, 주로 벡터를 순회(iterate)하는 데 사용됩니다.
- `data()`는 포인터를 반환하며, 벡터의 내부 배열에 직접 접근할 때 사용됩니다.

이 두 함수는 벡터의 요소에 접근하는 방법이 다르며, 용도에 따라 적절하게 선택해서 사용해야 합니다.

C++의 `vector` 클래스는 STL(Standard Template Library)의 일부로, 동적 배열을 구현합니다. `vector` 클래스에는 다양한 메서드가 있으며, 그중 하나가 `assign` 메서드입니다. `assign` 메서드는 벡터의 내용을 새 값으로 대체합니다. 여러 가지 방식으로 사용할 수 있습니다.

다음은 `vector::assign` 메서드의 세 가지 주요 오버로드와 그 사용 예시입니다:

1. **범위 기반 할당**:
   - 다른 컨테이너나 반복자의 범위를 사용하여 벡터에 값을 할당합니다.
   - 구문: `void assign(InputIterator first, InputIterator last);`
   ```cpp
   #include <iostream>
   #include <vector>

   int main() {
       std::vector<int> vec;
       std::vector<int> anotherVec = {1, 2, 3, 4, 5};

       vec.assign(anotherVec.begin(), anotherVec.end());

       for (int value : vec) {
           std::cout << value << " ";
       }
       return 0;
   }
   ```

2. **값 기반 할당**:
   - 지정된 개수의 동일한 값을 벡터에 할당합니다.
   - 구문: `void assign(size_type n, const value_type& val);`
   ```cpp
   #include <iostream>
   #include <vector>

   int main() {
       std::vector<int> vec;

       vec.assign(5, 10); // 벡터에 5개의 10 값을 할당합니다.

       for (int value : vec) {
           std::cout << value << " ";
       }
       return 0;
   }
   ```

3. **초기화 리스트 할당** (C++11 이상):
   - 초기화 리스트를 사용하여 벡터에 값을 할당합니다.
   - 구문: `void assign(std::initializer_list<value_type> il);`
   ```cpp
   #include <iostream>
   #include <vector>

   int main() {
       std::vector<int> vec;

       vec.assign({1, 2, 3, 4, 5}); // 초기화 리스트를 사용하여 벡터에 값을 할당합니다.

       for (int value : vec) {
           std::cout << value << " ";
       }
       return 0;
   }
   ```

### 요약
- `assign` 메서드는 벡터의 모든 요소를 새로운 값으로 대체합니다.
- 반복자 범위, 특정 값의 반복, 초기화 리스트를 통해 벡터에 값을 할당할 수 있습니다.

이 메서드를 사용하면 벡터의 크기와 내용을 쉽게 초기화하거나 변경할 수 있습니다.