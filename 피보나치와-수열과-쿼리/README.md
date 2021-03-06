# [Platinum IV] 피보나치와-수열과-쿼리 - 20305 

[문제 링크](https://www.acmicpc.net/problem/20305) 

### 성능 요약

메모리: 9832 KB, 시간: 152 ms

### 분류

다이나믹 프로그래밍(dp), 수학(math), 오프라인 쿼리(offline_queries), 누적 합(prefix_sum), 스위핑(sweeping)

### 문제 설명

피보나치 수는 $0$과 $1$로 시작한다. $0$번째 피보나치 수는 $0$이고, $1$번째 피보나치 수는 $1$이다. $2$번째 피보나치 수부터는 바로 앞 두 피보나치 수의 합이 된다. 이를 식으로 표현하면 $F_n = F_{n-2} + F_{n-1}$ ($n \geq 2$)이 된다.

$n$번째 피보나치 수 하나는 위와 같은 점화식을 통해 쉽게 구할 수 있지만, 이번 문제는 호락호락하지 않다. 모든 값이 $0$인 길이 $N$의 수열이 주어진다. 이때, 다음 쿼리를 수행한 후의 결과를 출력하는 프로그램을 작성해보자.


 l r: 수열의 $l$번째 위치부터 $r$번째 위치까지에 각각 $F_1, F_2, ..., F_{r-l+1}$을 더한다.
### 입력 

 첫째 줄에 수열의 크기 $N$이 주어진다. ($1 \leq N \leq 1\ 000\ 000$)

둘째 줄에 쿼리의 개수 $Q$가 주어진다. ($1 \leq Q \leq 100\ 000$)

셋째 줄부터 $Q$개 줄에 걸쳐 쿼리에 대한 정보 $l$, $r$이 주어진다. ($1 \leq l \leq r \leq N$)
### 출력 

 모든 쿼리를 적용한 후, 수열의 모든 수를 공백으로 구분해 출력한다. 단, 수가 너무 커질 수 있으니 각각의 수를 $10^9+7$으로 나눈 나머지를 출력한다.


