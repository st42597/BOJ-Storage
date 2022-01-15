for T in range(int(input())):
    s = input()
    run = 0
    score = 0
    for c in s:
        if c == "O":
            run+= 1
            score+= run
        else:
            run = 0
    print(score)