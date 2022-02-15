#include <stdio.h>
#include <math.h>

/* �������������� 0 ������ ����ĿҪ��[1,1000]����������û�п��Ǹ�����, 0����� */
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
    char A[5], B[5]; /* A �� B ��������*/
    char AS = 1, BS = 1; /* A �� B �Ƿ�Ϊ�Ϸ����� */
    /* �������� */
    while((ch = getchar()) != ' ') {  
        /* ����A������ */
        if (i >= 4) {
            AS = 0;
            while(getchar() != ' '); 
            break;
        }
        A[i++] = ch;
    }
    i = 0;
    while ((ch = getchar()) != '\n') {
        /* ����B������ */
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

