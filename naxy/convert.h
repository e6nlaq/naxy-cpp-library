
#ifndef __NAXY_CONVERT_H__
#define __NAXY_CONVERT_H__

namespace naxy
{
	/**
	 * @brief Convert char type to int type
	 *
	 * @param c char to be converted
	 * @return int Converted int
	 */
	inline int ctoi(char c)
	{
		if (c >= '0' && c <= '9')
			return c - '0';
		return 0;
	}
} // namespace naxy

#endif
