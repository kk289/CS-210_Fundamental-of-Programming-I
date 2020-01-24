/** CS 210 : Machine Problem 9
 * Program : No Suck String
 *  Author : kevil khadka
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int magic;
    int length;
    int alloc;
    char str[];
} nss;

int nss_create_header(int alloc){
    int *ptr;

    this.alloc = alloc * sizeof(int) + sizeof(this.magic) + sizeof(this.length);
    this.magic = *ptr = realloc(*ptr, this.alloc);

    return ptr;
}

int *nss_verify(nss nss1){
    int *ptr;

    *ptr = nss1 - 3 * (int *)malloc(sizeof(int));

    if (*ptr == 0){

    }
}

int *nss_to_cstr (int *){
}

int nss_ensure_alloc(int  ) {

}


/* nss_empty - returns a newly-allocated nss with a length of 0 */
nss nss_empty() {
    nss nssEmpty;
    nssEmpty.magic = nss_create_header(0);
    nssEmpty.length = 0;
    nssEmpty.alloc = 0;
    return nssEmpty;
}

/* nss_from_cstr - Given a standard C string, returns a newly-allocated
 *                 nss with the same contents as str */
nss nss_from_cstr(char* str) {
    nss nssNew;

    nssNew.magic = nss_create_header(sizeof(*str));
    nssNew.length = sizeof(*str);
    nssNew.alloc = sizeof(*str) + 1;

    //strcpy(nssNew.str, str);
    return nssNew;
}

/* nss_free - given an nss, return the allocated storage to the heap */
void nss_free(nss str) {

}

/* nss_len - given an nss, return its length.
 *           (Note: this should work in constant time (no loop)) */
size_t nss_len(nss s) {
    return s.length;
}

/* nss_cpy - copy the contents of src into dest and return a pointer to dest */
nss nss_cpy(nss dest, nss src) {
    dest.length = src.length;
    dest.alloc = src.alloc;

    //memcpy(dest.str, src.str, dest.length)

    return dest;
}

/* nss_cat - append the contents of src to dest and return a pointer to dest */
nss nss_cat(nss dest, nss src) {
    dest.length = dest.length + src.length;
    dest.alloc = dest.alloc + src.alloc;

    //memcpy(dest.str, src.str, dest.length);
    gets(src.str);

    dest.length = 0;
    while (src.str[dest.length] != '\0') {
        dest.str[dest.length] = src.str[dest.length];
        dest.length++;
    }

    dest.str[dest.length] = '\0';

    return dest.str;
}3

/* nss_catchar - append a single character to the end of dest
                 and return a pointer to dest */
nss nss_catchar(nss dest, char ch){

}

/* nss_cmp - compare the strings a and b.
 *           Return -1 if a < b, 0 if a == b, 1 if a > b */
int nss_cmp(nss a, nss b) {
    // char is int so you can literally compare char's just like int's OK?

    //if (a.string < b.string)
    //  return -1;

}

/* nss_substr - return a newly allocated nss with the substring of
 *              s starting at index start and having length len */
nss nss_substr(nss s, size_t start, size_t len) {

}

/* fgetnss - get a line from the file f and store it in the nss, s
 *           does NOT keep the newline character in the result */
nss fgetnss(nss s, FILE* f) {
    char c;

    while ((c = getc(f)) != '\0' && (c = getc(f)) != EOF) {
        s = nss_catchar(s, c);
    }

    return s;
}










