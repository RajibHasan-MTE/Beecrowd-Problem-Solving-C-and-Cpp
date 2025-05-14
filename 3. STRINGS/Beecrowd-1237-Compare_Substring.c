#include <stdio.h>
#include <string.h>

// Function to find the length of the longest common substring
int longestCommonSubstring(char *str1, char *str2, int sizeOfstr1, int sizeOfstr2);

int main()
{
    char str1[51] = {""}, str2[51] = {""};

    // Loop to read input until EOF (End Of File)
    while (scanf(" %[^\n] %[^\n]", str1, str2) != EOF)
    {
        // Call the function and print the result
        printf("%d\n", longestCommonSubstring(str1, str2, strlen(str1), strlen(str2)));
    }

    return 0;
}

int longestCommonSubstring(char *str1, char *str2, int sizeOfstr1, int sizeOfstr2)
{
    int i, j, x, y;
    int sizeOfSubstring = 0;      // Current length of matching substring
    int maxSizeOfSubstring = 0;   // Maximum found matching substring length

    // Loop over each character of the first string
    for (i = 0; i < sizeOfstr1; i++)
    {
        // Loop over each character of the second string
        for (j = 0; j < sizeOfstr2; j++)
        {
            sizeOfSubstring = 0;  // Reset the current substring length

            // Start matching characters from str1[i..] and str2[j..]
            for (x = i, y = j; x < sizeOfstr1 && y < sizeOfstr2; x++, y++)
            {
                // If characters match, increase the length
                if (str1[x] == str2[y])
                {
                    sizeOfSubstring++;

                    // Update the maximum if current match is longer
                    if (sizeOfSubstring > maxSizeOfSubstring)
                        maxSizeOfSubstring = sizeOfSubstring;
                }
                else
                {
                    // If characters do not match, stop the inner matching loop
                    break;
                }
            }
        }
    }

    // Return the maximum length of common substring found
    return maxSizeOfSubstring;
}
