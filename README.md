# study-c

C 언어 학습을 위한 저장소입니다. WSL(Windows Subsystem for Linux) 환경에서 C 언어 개발 환경을 설정하고 학습하는 방법을 안내합니다.

## 1. 환경 설정 (WSL)

WSL 터미널에서 다음 명령어를 입력하여 필요한 도구들을 설치합니다.

```bash
# 패키지 목록 업데이트
sudo apt update

# 컴파일러 및 필수 도구 설치
sudo apt install build-essential gdb
```

- `build-essential`: `gcc` 컴파일러와 `make` 등 개발에 필요한 필수 도구 모음입니다.
- `gdb`: 프로그램의 오류를 찾을 때 사용하는 디버거입니다.

## 2. 컴파일 및 실행 방법

C 언어 소스 코드를 작성한 후, 실행 가능한 파일로 만드는 과정을 '컴파일'이라고 합니다.

### 컴파일하기
```bash
gcc -o 실행파일명 소스코드파일명.c
```
예를 들어 `01_hello_world.c` 파일을 컴파일하려면:
```bash
gcc -o hello 01_hello_world.c
```

### 실행하기
```bash
./실행파일명
```
예를 들어 위에서 만든 `hello`를 실행하려면:
```bash
./hello
```

## 3. 학습 예제
- `01_hello_world.c`: 화면에 글자를 출력하는 가장 기본적인 예제입니다.
- `02_variables.c`: 변수를 선언하고 사용자로부터 값을 입력받는 예제입니다.
