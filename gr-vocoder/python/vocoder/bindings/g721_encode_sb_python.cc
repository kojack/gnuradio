/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/vocoder/g721_encode_sb.h>
// pydoc.h is automatically generated in the build directory
#include <g721_encode_sb_pydoc.h>

void bind_g721_encode_sb(py::module& m)
{

    using g721_encode_sb = ::gr::vocoder::g721_encode_sb;


    py::class_<g721_encode_sb,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<g721_encode_sb>>(m, "g721_encode_sb", D(g721_encode_sb))

        .def(py::init(&g721_encode_sb::make), D(g721_encode_sb, make))


        ;
}