#include <stdio.h>
#include <math.h>

/* 整数包含正整数 0 负整数 本题目要求[1,1000]，所以这里没有考虑负整数, 0的情况 */
int isInt(const char *_n) {
    int i = 0, res = 1;
    char ch;
    if (_n[0] == '0') {
        res = 0;
    } else {
        while (ch = _n[i]) {
            if (ch >= '0' && ch <= '9'){ i++; }
            else { res = 0; break;}
        }
    }
    return res;
}

int myA2I(const char *_n) {
    int i = 0, res = 0, j;
    while (_n[i]){i++;} /* example : 123 */
    j = 0; i--;
    while (_n[j]) { 
        res += pow(10, i) * (_n[j] - '0');
        i--;j++;
     }
    return res;
}

int main(int argc, const char *argv[]) {
    int i = 0;
    char ch;
    char A[5], B[5]; /* A 和 B 两个数字*/
    char AS = 1, BS = 1; /* A 和 B 是否为合法数字 */
    /* 接收输入 */
    while((ch = getchar()) != ' ') {  
        /* 接收A的输入 */
        if (i >= 4) {
            AS = 0;
            while(getchar() != ' '); 
            break;
        }
        A[i++] = ch;
    }
    i = 0;
    while ((ch = getchar()) != '\n') {
        /* 接收B的输入 */
        if (i >= 4) {BS = 0; break;}
        B[i++] = ch;
    }
    AS = AS && isInt(A) && myA2I(A) <= 1000 && myA2I(A) >= 1;
    BS = BS && isInt(B) && myA2I(B) <= 1000 && myA2I(B) >= 1;
    if (AS && BS) {
        printf("%s + %s = %d\n", A, B, myA2I(A) + myA2I(B));
    } else if (!AS && BS) {
        A[0] = '?'; A[1] = '\0';
        printf("%s + %s = ?\n", A, B);
    } else if (AS && !BS) {
        B[0] = '?'; B[1] = '\0';
        printf("%s + %s = ?\n", A, B);
    } else {
        printf("? + ? = ?\n");
    }
    return 0;
}

