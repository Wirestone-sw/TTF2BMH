#include "font.h"

int find_char_index(const struct font_t *font, char c, const char **char_ptr, char *char_width)
{
	const char *ptr = font->char_values;
	int	    index = 0;
	while (ptr[index] != '\0') {
		if (ptr[index] == c) {
			*char_ptr = font->char_addr[index];
			*char_width = font->char_width[index];
			return 0;
		}
		index++;
	}
	return -1;
}
