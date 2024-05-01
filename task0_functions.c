#include "main.h"

/**
 * struct fmt - struct that contain the format identifier and function
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(val_list)
};

/**
 * typdef struct fmt  fmt_type - struct tha contains the idetifier an function
 *
 * @fmat: The format.
 * @fm_t: The function associated
 */
typedef struct fmt fmt_t;
