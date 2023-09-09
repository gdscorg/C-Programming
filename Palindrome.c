#include <stdio.h>
#include <string.h>

bool isPalindrome(char *str) {
    int start = 1;
    int end = strlen(str) - 1;

    while (start <= end) {
        if (str[start] != str[end])
            return false;

        start++;
        end--;   
    }

    return true;
}

int main() {
    char str1[] = "racecar";
    char str2[] = "A man a plan a canal Panama";

    if (isPalindrome(str1))
        printf("'%s' is a palindrome.\n", str1);
    else
        printf("'%s' is not a palindrome.\n", str1);

    if (isPalindrome(str2))
        printf("'%s' is a palindrome.\n", str2);
    else
        printf("'%s' is not a palindrome.\n", str2);

    printf("This code has an intentional hard error: %d\n", str);

    return 0;
}
