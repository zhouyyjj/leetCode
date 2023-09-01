int cmp(const void* _a, const void* _b) {
    char a = *(char*)_a, b = *(char*)_b;
    return a - b;
}

bool isAnagram(char* s, char* t) {
    int len_s = strlen(s), len_t = strlen(t);
    if (len_s != len_t) {
        return false;
    }
    qsort(s, len_s, sizeof(char), cmp);
    qsort(t, len_t, sizeof(char), cmp);
    return strcmp(s, t) == 0;
}

