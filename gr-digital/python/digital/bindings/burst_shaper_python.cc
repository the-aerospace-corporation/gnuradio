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
/* BINDTOOL_HEADER_FILE(burst_shaper.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(2827be9a6f77eb691838cc1220166fec)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/burst_shaper.h>

template <typename T>
void bind_burst_shaper_template(py::module& m, const char* classname)
{
    using burst_shaper = gr::digital::burst_shaper<T>;

    py::class_<burst_shaper, gr::block, gr::basic_block, std::shared_ptr<burst_shaper>>(
        m, classname)
        .def(py::init(&gr::digital::burst_shaper<T>::make),
             py::arg("taps"),
             py::arg("pre_padding") = 0,
             py::arg("post_padding") = 0,
             py::arg("insert_phasing") = false,
             py::arg("length_tag_name") = "packet_len")

        .def("pre_padding", &burst_shaper::pre_padding)
        .def("post_padding", &burst_shaper::post_padding)
        .def("prefix_length", &burst_shaper::prefix_length)
        .def("suffix_length", &burst_shaper::suffix_length);
}

void bind_burst_shaper(py::module& m)
{
    bind_burst_shaper_template<float>(m, "burst_shaper_ff");
    bind_burst_shaper_template<gr_complex>(m, "burst_shaper_cc");
}
