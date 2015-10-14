/*  This file is part of the Vc library. {{{
Copyright © 2011-2014 Matthias Kretz <kretz@kde.org>
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the names of contributing organizations nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

}}}*/


/**
 * Copies the sign of \p reference.
 *
 * \param reference This values sign bit will be transferred.
 *
 * \return a value where the sign of the value equals the sign of \p reference. I.e.
 * sign(v.copySign(r)) == sign(r).
 */
inline VECTOR_TYPE copySign(VECTOR_TYPE reference) const;

/**
 * Extracts the exponent.
 *
 * \return the exponent to base 2.
 *
 * This function provides efficient access to the exponent of the floating point number. The
 * returned value is a fast approximation to the logarithm of base 2. The absolute error of that
 * approximation is between [0, 1[.
 *
 * Examples:
\verbatim
 value | exponent | log2
=======|==========|=======
   1.0 |        0 | 0
   2.0 |        1 | 1
   3.0 |        1 | 1.585
   3.9 |        1 | 1.963
   4.0 |        2 | 2
   4.1 |        2 | 2.036
\endverbatim
 *
 * \warning This function assumes a positive value (non-zero). If the value is negative the sign bit will
 * modify the returned value. An input value of zero will return the bias of the floating-point
 * representation. If you compile with Vc runtime checks, the function will assert
 * values greater than or equal to zero.
 *
 * You may use abs to apply this function to negative values:
 * \code
 * abs(v).exponent()
 * \endcode
 */
inline VECTOR_TYPE exponent() const;

/**
 * Check the sign bit of each vector entry.
 *
 * \return whether the sign bit is set.
 *
 * This function is especially useful to distinguish negative zero.
 * \code
 * float_v z  = float_v::Zero(); //  z.isNegative() will be m[0000],  z < float_v::Zero() will be m[0000]
 * float_v nz = -0.f;            // nz.isNegative() will be m[1111], nz < float_v::Zero() will be m[0000]
 * float_v n  = -1.f;            //  n.isNegative() will be m[1111],  n < float_v::Zero() will be m[1111]
 * \endcode
 */
inline MASK_TYPE isNegative() const;
