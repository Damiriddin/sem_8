int compare(char *s, char*t, int i) {
    int j = i;
    while (1) {
        if (s[i] == t[i-j]) {
            if (t[i-j] == '\0')
                return 1;
            i++;
        }
        else
            return 0;
    }
}

int str(char *s, char*t, int i) {
    while (1) {
        if (s[i] == t[0]) {
            if (compare(s, t, i))
                return 1;
            else
                return str(s, t, i+1);
        }
        if (s[i] == '\0')
            return 0;
        i++;
    }
}

int strend(char *s, char *t) { return str(s, t, 0); }


