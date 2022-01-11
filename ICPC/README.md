# [Bronze IV] ICPC - 16727 

[문제 링크](https://www.acmicpc.net/problem/16727) 

### 성능 요약

메모리: 30864 KB, 시간: 68 ms

### 분류

구현(implementation)

### 문제 설명

The Iranian ChamPions Cup (ICPC), the most prestigious football league in Iran, is reaching its end, and people are eagerly waiting for the finals, which happened to be between the two most popular Iranian teams, Persepolis and Esteghlal.

The ICPC finals consist of two matches, with each team competing as the home team in one match. The winning team is determined by aggregate score, the sum of the scores of the two matches. For example, if the scores of the two matches are Persepolis 6–0 Esteghlal in the first match, and Esteghlal 3–1 Persepolis in the second match, then the aggregate score will be Persepolis 7–3 Esteghlal, meaning that Persepolis is the winner. If aggregates are equal, the away goals rule is used to determine the winner, in which case the winner is the team that scored the most goals in the match it played away from home. If the result is still equal, a penalty shootout is required.

Hana, an avid football fan, is trying to figure out various scenarios in which her favorite team wins the finals. To this end, she aims to write a program that gets as input the number of goals in the two matches, and decides which team is the winner if it can be derived from the aggregate scores and the away goals rule, otherwise declares that the match goes to penalty kicks. You are going to help Hana write such a program.
### 입력 

 The first line of the input contains two space-separated integers p1 and s1, where p1 and s1 are the number of goals scored by Persepolis and Esteghlal, respectively, in the first match in which Persepolis is the home team. The second line contains two space-separated integers s2 and p2, where s2 and p2 are the number of goals scored by Esteghlal and Persepolis, respectively, in the second match in which Esteghlal is the home team. All input integers are between 0 and 20, inclusively.
### 출력 

 In the output, print the name of the winning team, either Persepolis or Esteghlal, if the winner can be determined by the aggregate scores and the away goals rule. Otherwise, print Penalty.


