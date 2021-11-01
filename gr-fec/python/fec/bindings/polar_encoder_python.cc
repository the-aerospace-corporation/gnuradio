/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(polar_encoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(2b7038339cef878f4b0d8fa563d59eab)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/polar_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <polar_encoder_pydoc.h>

void bind_polar_encoder(py::module& m)
{


    py::module m_code = m.def_submodule("code");

    using polar_encoder = ::gr::fec::code::polar_encoder;


    py::class_<polar_encoder, gr::fec::generic_encoder, std::shared_ptr<polar_encoder>>(
        m_code, "polar_encoder", D(code, polar_encoder))

        .def_static("make",
                    &polar_encoder::make,
                    py::arg("block_size"),
                    py::arg("num_info_bits"),
                    py::arg("frozen_bit_positions"),
                    py::arg("frozen_bit_values"),
                    py::arg("is_packed") = false,
                    D(code, polar_encoder, make))


        .def("generic_work",
             &polar_encoder::generic_work,
             py::arg("in_buffer"),
             py::arg("out_buffer"),
             D(code, polar_encoder, generic_work))


        .def("rate", &polar_encoder::rate, D(code, polar_encoder, rate))


        .def("get_input_size",
             &polar_encoder::get_input_size,
             D(code, polar_encoder, get_input_size))


        .def("get_output_size",
             &polar_encoder::get_output_size,
             D(code, polar_encoder, get_output_size))


        .def("set_frame_size",
             &polar_encoder::set_frame_size,
             py::arg("frame_size"),
             D(code, polar_encoder, set_frame_size))


        .def("get_input_conversion",
             &polar_encoder::get_input_conversion,
             D(code, polar_encoder, get_input_conversion))


        .def("get_output_conversion",
             &polar_encoder::get_output_conversion,
             D(code, polar_encoder, get_output_conversion))

        ;
}
