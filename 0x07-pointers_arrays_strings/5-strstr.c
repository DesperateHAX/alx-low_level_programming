/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
 */

har *_strstr(char *haystack, char *needle)

{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
