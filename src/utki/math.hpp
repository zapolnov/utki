/*
The MIT License (MIT)

utki - Utility Kit for C++.

Copyright (c) 2015-2025 Ivan Gagis <igagis@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/* ================ LICENSE END ================ */

#pragma once

#include <cmath>

#include "utility.hpp"

namespace utki {

/**
 * @brief Get sign of a number.
 * Template function which returns the sign of a number.
 * General implementation of this template is as easy as:
 * @code
 * template <typename number_type> inline number_type sign(number_type n){
 *     return n > 0 ? (1) : (-1);
 * }
 * @endcode
 * @param n - number to get sign of.
 * @return -1 if the argument is negative.
 * @return 1 if the number is positive.
 */
template <typename number_type>
constexpr number_type sign(number_type n) noexcept
{
	return n < 0 ? number_type(-1) : number_type(1);
}

/**
 * @brief The pi number constant.
 */
constexpr auto pi = 3.14159265358979323846264338327950288;

/**
 * @brief Two pi constant.
 */
constexpr auto two_pi = 2 * pi;

/**
 * @brief Number of angle degrees in pi radians.
 */
constexpr auto pi_degrees = 180;

/**
 * @brief Convert angle degrees to radians.
 * @param deg - angle in degrees.
 * @return Angle in radians.
 */
template <typename number_type>
constexpr number_type deg_to_rad(number_type deg) noexcept
{
	return number_type(pi) * deg / number_type(pi_degrees);
}

/**
 * @brief Convert radians to angle degrees.
 * @param rad - angle in radians.
 * @return Angle in degrees.
 */
template <typename number_type>
constexpr number_type rad_to_deg(number_type rad) noexcept
{
	return pi_degrees * rad / number_type(pi);
}

/**
 * @brief Natural logarithm of 2 constant, i.e. ln(2).
 */
constexpr auto log_2 = 0.693147180559945309417232121458;

/**
 * @brief Calculate x^2.
 * @param x - value.
 * @return x * x.
 */
template <typename number_type>
constexpr number_type pow2(number_type x) noexcept
{
	return x * x;
}

/**
 * @brief Calculate x^3.
 */
template <typename number_type>
constexpr number_type pow3(number_type x) noexcept
{
	return pow2(x) * x;
}

/**
 * @brief Calculate x^4.
 */
template <typename number_type>
constexpr number_type pow4(number_type x) noexcept
{
	return pow2(pow2(x));
}

/**
 * @brief Calculate x^5.
 */
template <typename number_type>
constexpr number_type pow5(number_type x) noexcept
{
	return pow4(x) * x;
}

/**
 * @brief Calculate x^6.
 */
template <typename number_type>
constexpr number_type pow6(number_type x) noexcept
{
	return pow2(pow3(x));
}

} // namespace utki
