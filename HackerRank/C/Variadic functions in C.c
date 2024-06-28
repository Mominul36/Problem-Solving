
int  sum (int count,...) {
int S = 0;
    va_list ptr;
    va_start(ptr, count);

    for (int i = 0; i < count; i++)
        S += va_arg(ptr, int);
    va_end(ptr);

    return S;
}

int min(int count,...) {
    va_list ptr;
    va_start(ptr, count);

    int mi = va_arg(ptr, int);

    for (int i = 0; i < count-1; i++) {
        int temp = va_arg(ptr, int);
        mi = temp < mi ? temp : mi;
    }
    va_end(ptr);
    return mi;

}

int max(int count,...) {
        va_list ptr;
    va_start(ptr, count);

    int m = va_arg(ptr, int);

    for (int i = 0; i < count-1; i++) {
        int temp = va_arg(ptr, int);
        m = temp > m ? temp : m;
    }
    va_end(ptr);
    return m;

}

