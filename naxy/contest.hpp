
#ifndef __HAXY_CONTEST_HPP__
#define __HAXY_CONTEST_HPP__

namespace naxy
{
	/**
	 * @brief If the value of argument 1 is smaller than the value of argument 2, it is overwritten by argument 2.
	 *
	 * @tparam _Tp1 argument type
	 * @param a Argument 1
	 * @param b Argument 2
	 * @return true a < b
	 * @return false a > b
	 */
	template <typename _Tp1>
	bool chmax(_Tp1 &a, _Tp1 b)
	{
		if (a < b)
		{
			a = b;
			return true;
		}
		return false;
	}

	/**
	 * @brief If the value of the first argument is greater than the value of the second argument, the second argument is overwritten.
	 *
	 * @tparam _Tp1 argument type
	 * @param a Argument 1
	 * @param b Argument 2
	 * @return true a > b
	 * @return false a < b
	 */
	template <typename _Tp1>
	bool chmin(_Tp1 &a, _Tp1 b)
	{
		if (a > b)
		{
			a = b;
			return true;
		}
		return false;
	}
} // namespace naxy

#endif
