/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013 Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#include "Animable.hpp"

namespace Magnum { namespace SceneGraph {

#ifndef DOXYGEN_GENERATING_OUTPUT
template class MAGNUM_SCENEGRAPH_EXPORT BasicAnimable<2, Float>;
template class MAGNUM_SCENEGRAPH_EXPORT BasicAnimable<3, Float>;
template class MAGNUM_SCENEGRAPH_EXPORT BasicAnimableGroup<2, Float>;
template class MAGNUM_SCENEGRAPH_EXPORT BasicAnimableGroup<3, Float>;
#endif

Debug operator<<(Debug debug, AnimationState value) {
    switch(value) {
        #define _c(value) case AnimationState::value: return debug << "SceneGraph::AnimationState::" #value;
        _c(Stopped)
        _c(Paused)
        _c(Running)
        #undef _c
    }

    return debug << "SceneGraph::AnimationState::(invalid)";
}

}}
