/*  This file is part of the Vc library. {{{
Copyright © 2014 Matthias Kretz <kretz@kde.org>
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

public:
    ///////////////////////////////////////////////////////////////////////////
    // init to zero
    Vc_GPU_CALLABLE Vector() = default;

    ///////////////////////////////////////////////////////////////////////////
    // types

    ///////////////////////////////////////////////////////////////////////////
    // constants
    Vc_GPU_CALLABLE static constexpr std::size_t size() { return Size; }

    ///////////////////////////////////////////////////////////////////////////
    // constant Vectors
    Vc_GPU_CALLABLE explicit
    Vc_INTRINSIC_L Vector(VectorSpecialInitializerZero::ZEnum) Vc_INTRINSIC_R;
    
    Vc_GPU_CALLABLE explicit
    Vc_INTRINSIC_L Vector(VectorSpecialInitializerOne::OEnum) Vc_INTRINSIC_R;
    Vc_GPU_CALLABLE explicit
    Vc_INTRINSIC_L Vector(VectorSpecialInitializerIndexesFromZero::IEnum) Vc_INTRINSIC_R;
    
    Vc_GPU_CALLABLE static Vc_INTRINSIC Vc_CONST Vector Zero()
    {
        return Vector(VectorSpecialInitializerZero::Zero);
    }
    Vc_GPU_CALLABLE static Vc_INTRINSIC Vc_CONST Vector One()
    {
        return Vector(VectorSpecialInitializerOne::One);
    }
    Vc_GPU_CALLABLE static Vc_INTRINSIC Vc_CONST Vector IndexesFromZero()
    {
        return Vector(VectorSpecialInitializerIndexesFromZero::IndexesFromZero);
    }

// vim: foldmethod=marker
