int strStr(char* a, char* b) {
    int i, j, k;
    
    for (i = 0; a[i] != '\0'; i++) {
        // try to match needle b starting from haystack a[i]
        for (j = 0, k = i; b[j] != '\0' && a[k] != '\0'; j++, k++) {
            if (a[k] != b[j]) break;
        }
        if (b[j] == '\0') {
            return i; // found match at index i
        }
    }
    return -1; // not found
}
